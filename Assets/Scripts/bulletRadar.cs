using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class bulletRadar : MonoBehaviour
{
    public List<GameObject> bullets = new List<GameObject>();


    public void addBullet(GameObject bullet)
    {

        // for (int i = 0; i < bullets.Count; i++)
        // {
        //     if (bullet == bullets[i])
        //         return;
        // }

        bullets.Add(bullet);
    }

    public void resetAll()
    {
        bullets.Clear();
    }

    public void checkActiveBullets()
    {
        for (int i = 0; i < bullets.Count; i++)
        {
            if (!bullets[i].activeSelf)
                bullets.RemoveAt(i);
        }
    }

    void onUpdate()
    {
        Debug.Log("BulletRadar onUpdate");
    }

}
