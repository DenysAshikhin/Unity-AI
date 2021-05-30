using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class bulletRadar
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
        for (int i = 0; i < bullets.Count; i++)
        {
            if (bullets[i].activeInHierarchy)
                bullets[i].GetComponent<Projectile>().resetBullet();
        }

        bullets.Clear();
    }

    public void checkActiveBullets()
    {
        for (int i = 0; i < bullets.Count; i++)
        {
            if (!bullets[i].activeInHierarchy)
                bullets.RemoveAt(i);
        }
    }
}