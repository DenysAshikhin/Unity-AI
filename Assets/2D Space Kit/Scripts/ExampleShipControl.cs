using UnityEngine;
using System.Collections;

public class ExampleShipControl : MonoBehaviour
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

    public Vector3 startingVector;
    public Vector3 startingRotate;

    // Use this for initialization
    void Start()
    {
        startingVector = new Vector3(gameObject.transform.localPosition.x, gameObject.transform.localPosition.y, gameObject.transform.localPosition.z);
        startingRotate = new Vector3(gameObject.transform.eulerAngles.x, gameObject.transform.eulerAngles.y, gameObject.transform.eulerAngles.z);
        // GetComponent<Rigidbody2D>().isKinematic = true;
    }

    // Update is called once per frame
    void Update()
    {

        // if (health <= 0)
        // {
        //     Destroy(gameObject);
        // }

        if (control)
        {
            if (Input.GetKeyDown(KeyCode.Escape))
                Screen.lockCursor = !Screen.lockCursor;

            if (Input.GetKey(KeyCode.W))
            {
                // Debug.Log (transform.up);
                // Debug.Log (Time.deltaTime);
                // Debug.Log (acceleration_amount * Time.deltaTime);
                // Debug.Log (transform.up * acceleration_amount * Time.deltaTime);
                // Debug.Log("-----------------");
                // Debug.Log(transform.up * acceleration_amount * Time.deltaTime);
                GetComponent<Rigidbody2D>().AddForce(transform.up * acceleration_amount * Time.deltaTime);

            }
            if (Input.GetKey(KeyCode.S))
            {
                GetComponent<Rigidbody2D>().AddForce((-transform.up) * acceleration_amount * Time.deltaTime);

            }

            if (Input.GetKey(KeyCode.A) && Input.GetKey(KeyCode.LeftShift))
            {
                GetComponent<Rigidbody2D>().AddForce((-transform.right) * acceleration_amount * 0.6f * Time.deltaTime);
                //print ("strafeing");
            }
            if (Input.GetKey(KeyCode.D) && Input.GetKey(KeyCode.LeftShift))
            {
                GetComponent<Rigidbody2D>().AddForce((transform.right) * acceleration_amount * 0.6f * Time.deltaTime);

            }

            if (Input.GetKey(KeyCode.D) && !Input.GetKey(KeyCode.LeftShift))
            {
                GetComponent<Rigidbody2D>().AddTorque(-rotation_speed * Time.deltaTime);

            }
            if (Input.GetKey(KeyCode.A) && !Input.GetKey(KeyCode.LeftShift))
            {
                GetComponent<Rigidbody2D>().AddTorque(rotation_speed * Time.deltaTime);

            }
            if (Input.GetKey(KeyCode.C))
            {
                GetComponent<Rigidbody2D>().angularVelocity = Mathf.Lerp(GetComponent<Rigidbody2D>().angularVelocity, 0, rotation_speed * 0.06f * Time.deltaTime);
                GetComponent<Rigidbody2D>().velocity = Vector2.Lerp(GetComponent<Rigidbody2D>().velocity, Vector2.zero, acceleration_amount * 0.06f * Time.deltaTime);
            }


            if (Input.GetKey(KeyCode.H))
            {
                transform.localPosition = new Vector3(0, 0, 0);
            }


            if (Input.GetKey(KeyCode.Space))
            {
                if (Time.time > timeToFire)
                {
                    timeToFire = Time.time + 1 / fireRate;
                    // Debug.Log(transform);
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
                }
            }
        }
    }


    void OnCollisionEnter2D(Collision2D collision)
    {

        if (collision.gameObject.tag == "Wall")
        {
            gameObject.GetComponent<fighterAI>().died();
            Instantiate(explosion, transform.position, Quaternion.identity);
            // Destroy(gameObject);
        }
    }
}
