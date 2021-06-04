using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class arenaController : MonoBehaviour
{
    public GameObject[] team1 = new GameObject[1];
    public GameObject[] team2 = new GameObject[1];
    public float xLength = 20.07f / 2f;
    public float yLength = 10f / 2f;

    public int m_ResetTimer = 0;
    public int MaxEnvironmentSteps = 1000;
    // Start is called before the first frame update
    void Start()
    {

    }

    void FixedUpdate()
    {

        if (team1[0].GetComponent<fighterAI>().health <= 0)
        {
            Debug.Log("team 2 won");
            team1[0].GetComponent<fighterAI>().died();//Team 1 died, either shot or collided wall

            if (team2[0].GetComponent<fighterAI>().hits >= 0)//team1 died due to being shot
                team2[0].GetComponent<fighterAI>().killed();
            else
                team2[0].GetComponent<fighterAI>().EpisodeInterrupted();//The other agent hit a wall, this agent had nothing to do with it?
                                                                        //NOTE possibly preventing tactic of running enemy into wall, look into changing this to end episode instead
            Debug.Log("team 1 score:");
            Debug.Log(team1[0].GetComponent<fighterAI>().GetCumulativeReward());
            Debug.Log("team 2 score:");
            Debug.Log(team2[0].GetComponent<fighterAI>().GetCumulativeReward());
            team1[0].GetComponent<fighterAI>().EndEpisode();
            team2[0].GetComponent<fighterAI>().EndEpisode(); 
            resetScene();
        }
        else if (team2[0].GetComponent<fighterAI>().health <= 0)
        {
            Debug.Log("team 1 won");
            team2[0].GetComponent<fighterAI>().died();//Team 2 died, either shot or collided wall

            if (team1[0].GetComponent<fighterAI>().hits >= 0)//team1 died due to being shot
                team1[0].GetComponent<fighterAI>().killed();
            else
                team1[0].GetComponent<fighterAI>().EpisodeInterrupted();


            Debug.Log("team 1 score:");
            Debug.Log(team1[0].GetComponent<fighterAI>().GetCumulativeReward());
            Debug.Log("team 2 score:");
            Debug.Log(team2[0].GetComponent<fighterAI>().GetCumulativeReward());
            team1[0].GetComponent<fighterAI>().EndEpisode();
            team2[0].GetComponent<fighterAI>().EndEpisode();
            resetScene();
        }
        else
        {

            m_ResetTimer += 1;
            if (m_ResetTimer >= MaxEnvironmentSteps && MaxEnvironmentSteps > 0)
            {
                team1[0].GetComponent<fighterAI>().EpisodeInterrupted();
                team2[0].GetComponent<fighterAI>().EpisodeInterrupted();
                resetScene();
            }
        }
    }


    private void resetScene()
    {
        randomSpawns();
        m_ResetTimer = 0;
        team1[0].GetComponent<fighterAI>().health = 100;
        team2[0].GetComponent<fighterAI>().health = 100;
    }

    private void randomSpawns()
    {
        float xlen = xLength - 0.5f;
        float ylen = yLength - 0.5f;

        float tempX = Random.Range(-xlen, xlen);
        float tempY = Random.Range(-ylen, ylen);

        team2[0].GetComponent<Transform>().localPosition = new Vector3(tempX, tempY, 0);

        if (Mathf.Abs(tempX) < 0.25)
            tempX *= 3;

        if (Mathf.Abs(tempY) < 0.25)
            tempY *= 3;

        team1[0].transform.localPosition = new Vector3(-tempX, -tempY, 0);

        team1[0].GetComponent<Rigidbody2D>().velocity = Vector3.zero;
        team1[0].GetComponent<Rigidbody2D>().angularVelocity = 0;

        team2[0].GetComponent<Rigidbody2D>().velocity = Vector3.zero;
        team2[0].GetComponent<Rigidbody2D>().angularVelocity = 0;
    }
}
