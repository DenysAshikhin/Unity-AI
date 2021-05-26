using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Unity.MLAgents;
using Unity.MLAgents.Sensors;
using Unity.MLAgents.Actuators;

public class fighterAI : Agent
{
    public float acceleration_amount = 100f;
    public float rotation_speed = 1f;
    public GameObject turret;
    public float turret_rotation_speed = 3f;
    public GameObject explosion;
    public GameObject bullet;
    public float fireRate = 5;
    public int team = 0;
    public bool control = true;
    public int health = 100;
    private float timeToFire = 0;
    public float xLength = 20.07f / 2f;
    public float yLength = 10f / 2f;
    public float maxVel = 5f;
    public float maxAngleVel = 1000f;

    public bulletRadar bulletRadar;

    private BufferSensorComponent bufferSensor;

    [SerializeField] private GameObject target;

    private Rigidbody2D rigidBody;


    void Start()
    {

        bulletRadar = new bulletRadar();
        rigidBody = gameObject.GetComponent<Rigidbody2D>();
        bufferSensor = gameObject.GetComponent<BufferSensorComponent>();
    }
    public override void CollectObservations(VectorSensor sensor)
    {
        sensor.AddObservation(new Vector2(transform.position.x / xLength, transform.position.y / yLength)); //Normalized x,y
        sensor.AddObservation(new Vector2(rigidBody.velocity.x / maxVel, rigidBody.velocity.y / maxVel)); // Normalized velocity x,y
        sensor.AddObservation((transform.rotation.z % 360f) / 360f); // Normalized angle
        sensor.AddObservation(rigidBody.angularVelocity / maxAngleVel); // Normalized angular velocity

        Rigidbody2D targetRigid = target.GetComponent<Rigidbody2D>();
        sensor.AddObservation(new Vector2(target.transform.position.x / xLength, target.transform.position.y / yLength)); //Normalized x,y
        sensor.AddObservation(new Vector2(targetRigid.velocity.x / maxVel, targetRigid.velocity.y / maxVel)); // Normalized velocity x,y
        sensor.AddObservation((target.transform.rotation.z % 360f) / 360f); // Normalized angle
        sensor.AddObservation(targetRigid.angularVelocity / maxAngleVel); // Normalized angular velocity

        bulletRadar.checkActiveBullets();
        for (int i = 0; i < bulletRadar.bullets.Count; i++)
        {

            Transform tempTran = bulletRadar.bullets[i].GetComponent<Transform>();
            Rigidbody2D tempRigid = bulletRadar.bullets[i].GetComponent<Rigidbody2D>();
            //normalized: x, y, velX, velY rotation around Z
            float[] temp = { tempTran.position.x / xLength, tempTran.position.y / yLength, tempRigid.velocity.x / maxVel, tempRigid.velocity.y / maxVel, (transform.rotation.z % 360f) / 360f };
            bufferSensor.AppendObservation(temp);
        }


    }


    public override void OnEpisodeBegin()
    {

        BulletPool.SharedInstance.resetAll();
        bulletRadar.resetAll();

        Vector3 tempV = gameObject.GetComponent<ExampleShipControl>().startingVector;
        gameObject.transform.position = new Vector3(tempV.x, tempV.y, tempV.z);

        Vector3 tempR = gameObject.GetComponent<ExampleShipControl>().startingRotate;
        gameObject.transform.eulerAngles = new Vector3(tempR.x, tempR.y, tempR.z);

        gameObject.GetComponent<Rigidbody2D>().velocity = Vector3.zero;
        gameObject.GetComponent<Rigidbody2D>().angularVelocity = 0;

    }

    public override void Heuristic(in ActionBuffers actionsOut)
    {

    }

    public override void OnActionReceived(ActionBuffers actions)
    {

        ActionSegment<int> vectorAction = actions.DiscreteActions;
        int forward = (int)vectorAction[0];
        int backward = (int)vectorAction[1];
        int strafeLeft = (int)vectorAction[2];
        int strafeRight = (int)vectorAction[3];
        int rotateLeft = (int)vectorAction[4];
        int rotateRight = (int)vectorAction[5];
        int fire = (int)vectorAction[6];

        if (fire == 1)
        {
            if (Time.time > timeToFire)
            {
                timeToFire = Time.time + 1 / fireRate;



                // Debug.Log(transform);
                // GameObject newBullet = Instantiate(bullet, transform.localPosition, transform.rotation);
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

        if (forward == 1)
            GetComponent<Rigidbody2D>().AddForce(transform.up * acceleration_amount * Time.deltaTime);

        if (backward == 1)
            GetComponent<Rigidbody2D>().AddForce((-transform.up) * acceleration_amount * Time.deltaTime);

        if (strafeLeft == 1)
            GetComponent<Rigidbody2D>().AddForce((-transform.right) * acceleration_amount * 0.6f * Time.deltaTime);

        if (strafeRight == 1)
            GetComponent<Rigidbody2D>().AddForce((transform.right) * acceleration_amount * 0.6f * Time.deltaTime);

        if (rotateLeft == 1)
            GetComponent<Rigidbody2D>().AddTorque(rotation_speed * Time.deltaTime);

        if (rotateRight == 1)
            GetComponent<Rigidbody2D>().AddTorque(-rotation_speed * Time.deltaTime);

    }

    public void died()
    {
        Debug.Log("Loss: " + (-1f).ToString());
        SetReward(-1f);
        EndEpisode();
    }

    public void killed()
    {

        BulletPool.SharedInstance.resetAll();
        Debug.Log("VICTORY: " + (1f * ((float)StepCount / (float)MaxStep)).ToString());
        SetReward(1f * (1f * ((float)StepCount / (float)MaxStep)));
        EndEpisode();
    }

    void onTriggerEnter2D(Collider2D col)
    {

        Debug.Log("Entered FIGHTER!");
    }
}