using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Unity.MLAgents;
using Unity.MLAgents.Sensors;
using Unity.MLAgents.Actuators;

public class fighterAI : Agent
{
    public float acceleration_amount = 100f;
    public float rotation_speed = 3f;
    public GameObject turret;
    public float turret_rotation_speed = 3f;
    public GameObject explosion;
    public GameObject bullet;
    public float fireRate = 5;
    public int team = 0;
    public bool control = false;
    public int health = 100;
    private float timeToFire = 0;
    public float xLength = 20.07f / 2f;
    public float yLength = 10f / 2f;
    public float maxVel = 5f;
    public float maxAngleVel = 1000f;
    public int hits = 0;

    public bulletRadar bulletRadar;

    private BufferSensorComponent bufferSensor;

    [SerializeField] private GameObject target;

    private Rigidbody2D rigidBody;
    // private float lastStep = 0f;


    void Start()
    {

        health = 100;
        bulletRadar = new bulletRadar();
        rigidBody = gameObject.GetComponent<Rigidbody2D>();
        bufferSensor = gameObject.GetComponent<BufferSensorComponent>();
        MaxStep = 10000;
    }
    public override void CollectObservations(VectorSensor sensor)
    {
        sensor.AddObservation(new Vector2(transform.localPosition.x / xLength, transform.localPosition.y / yLength)); //Normalized x,y
        sensor.AddObservation(new Vector2(rigidBody.velocity.x / maxVel, rigidBody.velocity.y / maxVel)); // Normalized velocity x,y
        sensor.AddObservation((transform.rotation.z % 360f) / 360f); // Normalized angle
        sensor.AddObservation(rigidBody.angularVelocity / maxAngleVel); // Normalized angular velocity

        Rigidbody2D targetRigid = target.GetComponent<Rigidbody2D>();
        sensor.AddObservation(new Vector2(target.transform.localPosition.x / xLength, target.transform.localPosition.y / yLength)); //Normalized x,y
        sensor.AddObservation(new Vector2(targetRigid.velocity.x / maxVel, targetRigid.velocity.y / maxVel)); // Normalized velocity x,y
        sensor.AddObservation((target.transform.rotation.z % 360f) / 360f); // Normalized angle
        sensor.AddObservation(targetRigid.angularVelocity / maxAngleVel); // Normalized angular velocity

        bulletRadar.checkActiveBullets();
        for (int i = 0; i < bulletRadar.bullets.Count; i++)
        {

            Transform tempTran = bulletRadar.bullets[i].GetComponent<Transform>();
            Rigidbody2D tempRigid = bulletRadar.bullets[i].GetComponent<Rigidbody2D>();
            //normalized: x, y, velX, velY rotation around Z
            float[] temp = { tempTran.localPosition.x / xLength, tempTran.localPosition.y / yLength, tempRigid.velocity.x / maxVel, tempRigid.velocity.y / maxVel, (transform.rotation.z % 360f) / 360f };
            bufferSensor.AppendObservation(temp);
        }
    }


    public override void OnEpisodeBegin()
    {

        // BulletPool.SharedInstance.resetAll();
        bulletRadar.resetAll();
        health = 100;
        hits = 0;

        // Vector3 tempV = gameObject.GetComponent<ExampleShipControl>().startingVector;
        // gameObject.transform.localPosition = new Vector3(tempV.x, tempV.y, tempV.z);

        // Vector3 tempR = gameObject.GetComponent<ExampleShipControl>().startingRotate;
        // gameObject.transform.eulerAngles = new Vector3(tempR.x, tempR.y, tempR.z);
        // randomSpawns();
    }


    public override void Heuristic(in ActionBuffers actionsOut)
    {
        if (control != true)
            return;
        ActionSegment<int> vectorAction = actionsOut.DiscreteActions;

        int forBack = (int)vectorAction[0];
        int leftRight = (int)vectorAction[1];
        int rotLeRi = (int)vectorAction[2];
        int fire = (int)vectorAction[3];

        if (Input.GetKey(KeyCode.W))
            vectorAction[0] = 1;
        else if (Input.GetKey(KeyCode.S))
            vectorAction[0] = 2;
        else
            vectorAction[0] = 0;


        if (Input.GetKey(KeyCode.A) && Input.GetKey(KeyCode.LeftShift))
            vectorAction[1] = 1;
        else if (Input.GetKey(KeyCode.D) && Input.GetKey(KeyCode.LeftShift))
            vectorAction[1] = 2;
        else
            vectorAction[1] = 0;

        if (Input.GetKey(KeyCode.A) && !Input.GetKey(KeyCode.LeftShift))
            vectorAction[2] = 1;
        else if (Input.GetKey(KeyCode.D) && !Input.GetKey(KeyCode.LeftShift))
            vectorAction[2] = 2;
        else
            vectorAction[2] = 0;


        if (Input.GetKey(KeyCode.Space))
            vectorAction[3] = 1;
        else
            vectorAction[3] = 0;
    }

    public override void OnActionReceived(ActionBuffers actions)
    {

        ActionSegment<int> vectorAction = actions.DiscreteActions;

        int forBack = (int)vectorAction[0];
        int leftRight = (int)vectorAction[1];
        int rotLeRi = (int)vectorAction[2];
        int fire = (int)vectorAction[3];

        if (fire == 1)
        {
            if (Time.time > timeToFire)
            {
                timeToFire = Time.time + 1 / fireRate;



                // Debug.Log(transform);
                // GameObject newBullet = Instantiate(bullet, transform.locallocalPosition, transform.rotation);
                // newBullet.firing_ship
                // Debug.Log(newBullet);
                GameObject newBullet = BulletPool.SharedInstance.GetPooledObject();

                if (newBullet != null)
                {
                    newBullet.SetActive(true);

                    Projectile script = newBullet.GetComponent<Projectile>();
                    script.firing_ship = this.gameObject;
                    newBullet.transform.position = transform.position;
                    newBullet.transform.rotation = transform.rotation;

                    Vector2 tempV = new Vector2(transform.up.normalized.x * 10f, transform.up.normalized.y * 10f);

                    newBullet.GetComponent<Rigidbody2D>().velocity = tempV;
                }

                // Projectile script = newBullet.GetComponent<Projectile>();
                // script.firing_ship = this.gameObject;
                // newBullet.GetComponent<Rigidbody2D>().velocity = transform.up.normalized * 10;
            }
            AddReward(-0.01f);
        }

        if (forBack == 1)
            GetComponent<Rigidbody2D>().AddForce(transform.up * acceleration_amount * Time.deltaTime);
        else if (forBack == 2)
            GetComponent<Rigidbody2D>().AddForce((-transform.up) * acceleration_amount * Time.deltaTime);

        if (leftRight == 1)
            GetComponent<Rigidbody2D>().AddForce((-transform.right) * acceleration_amount * 0.6f * Time.deltaTime);
        else if (leftRight == 2)
            GetComponent<Rigidbody2D>().AddForce((transform.right) * acceleration_amount * 0.6f * Time.deltaTime);

        if (rotLeRi == 1)
            GetComponent<Rigidbody2D>().AddTorque(rotation_speed * Time.deltaTime);
        else if (rotLeRi == 2)
            GetComponent<Rigidbody2D>().AddTorque(-rotation_speed * Time.deltaTime);
    }

    public void died()
    {
        if ((float)StepCount < 2)
        {
            AddReward(-1f - 1000f);
            // EndEpisode();
        }
        else
        {
            AddReward(-1f - (((float)MaxStep / (float)StepCount)));
            // EndEpisode();
        }
    }

    public void killed()
    {
        AddReward(1f);
        // randomSpawns();
        // EndEpisode();
    }



    void OnCollisionEnter2D(Collision2D collision)
    {
        if (collision.gameObject.tag == "Wall")
        {
            // gameObject.GetComponent<fighterAI>().died();
            health = 0;
            Instantiate(explosion, transform.position, Quaternion.identity);
            // Destroy(gameObject);
        }
        else if (collision.gameObject.tag == "Ship")
        {
            health = 0;
        }
    }
}