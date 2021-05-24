using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BulletPool : MonoBehaviour
{

    public static BulletPool SharedInstance;
    public List<GameObject> bullets;
    public GameObject objectToPool;
    public int amountToPool;
    public bool shouldExpand = true;


    void Awake()
    {
        SharedInstance = this;
    }



    // Start is called before the first frame update
    void Start()
    {
        bullets = new List<GameObject>();
        GameObject tmp;

        for (int i = 0; i < amountToPool; i++)
        {
            tmp = Instantiate(objectToPool);
            tmp.SetActive(false);
            bullets.Add(tmp);
        }
        SharedInstance = this;
    }

    public GameObject GetPooledObject()
    {

        for (int i = 0; i < amountToPool; i++)
        {
            if (!bullets[i].activeInHierarchy)
            {
                return bullets[i];
            }
        }
        if (shouldExpand)
        {
            GameObject obj = (GameObject)Instantiate(objectToPool);
            obj.SetActive(false);
            bullets.Add(obj);
            return obj;
        }
        else
        {
            return null;
        }
    }

    public void resetAll()
    {
        for (int i = 0; i < amountToPool; i++)
            bullets[i].GetComponent<Projectile>().resetBullet();
    }
}
