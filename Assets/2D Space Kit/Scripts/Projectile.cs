using UnityEngine;
using System.Collections;

public class Projectile : MonoBehaviour
{
    public GameObject shoot_effect;
    public GameObject hit_effect;
    public GameObject firing_ship;
    public float speed = 50;
    public int damage = 1000;

    public int team;

    // Use this for initialization
    void Start()
    {
        // GameObject obj = (GameObject) Instantiate(shoot_effect, transform.position  - new Vector3(0,0,5), Quaternion.identity); //Spawn muzzle flash
        // obj.transform.parent = firing_ship.transform;
        // Debug.Log(gameObject);
        // Debug.Log(GetComponent<Rigidbody2D>());
        // Debug.Log(GetComponent<Rigidbody2D>().velocity);
        // Destroy(gameObject, 5f); //Bullet will despawn after 5 seconds
    }

    // // Update is called once per frame
    // void Update()
    // {

    // }


    void OnTriggerEnter2D(Collider2D col)
    {

        //Don't want to collide with the ship that's shooting this thing, nor another projectile.
        if (col.gameObject != firing_ship && col.gameObject.tag == "Ship")
        {
            Instantiate(hit_effect, transform.position, Quaternion.identity);
            col.gameObject.GetComponent<fighterAI>().health -= damage;
            firing_ship.GetComponent<fighterAI>().hits += 1;
            // if (col.gameObject.GetComponent<ExampleShipControl>().health <= 0)
            // {
            //     firing_ship.GetComponent<fighterAI>().killed();
            // }

            // Destroy(gameObject);
            resetBullet();
        }

        else if (col.tag == "FighterRadar")
        {
            col.gameObject.GetComponentInParent<fighterAI>().bulletRadar.addBullet(gameObject);
        }
    }

    void OnTriggerExit2D(Collider2D col)
    {

        if (gameObject.tag == "Projectile" && col.gameObject.tag == "Wall")
        {
            resetBullet();
        }
        // else if (col.tag == "FighterRadar")
        // {
        // Debug.Log("Left");
        //     // col.gameObject.GetComponentInParent<fighterAI>().bulletRadar.addBullet(gameObject);

        // }
        // else
        // {
        //     Destroy(gameObject);
        // }

    }



    public void resetBullet()
    {
        gameObject.GetComponent<TrailRenderer>().Clear();
        gameObject.SetActive(false);
    }
}