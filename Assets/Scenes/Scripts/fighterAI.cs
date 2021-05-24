using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Unity.MLAgents;
using Unity.MLAgents.Sensors;

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

    [SerializeField] private Transform targetTransform;
    public override void CollectObservations(VectorSensor sensor)
    {
        sensor.AddObservation(transform.position);
        sensor.AddObservation(transform.rotation);
        sensor.AddObservation(targetTransform.position);
    }


    public override void OnEpisodeBegin()
    {

        BulletPool.SharedInstance.resetAll();

        Vector3 tempV = gameObject.GetComponent<ExampleShipControl>().startingVector;
        gameObject.transform.position = new Vector3(tempV.x, tempV.y, tempV.z);

        Vector3 tempR = gameObject.GetComponent<ExampleShipControl>().startingRotate;
        gameObject.transform.eulerAngles = new Vector3(tempR.x, tempR.y, tempR.z);

        gameObject.GetComponent<Rigidbody2D>().velocity = Vector3.zero;
        gameObject.GetComponent<Rigidbody2D>().angularVelocity = 0;

    }



    public override void OnActionReceived(float[] vectorAction)
    {
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





}
