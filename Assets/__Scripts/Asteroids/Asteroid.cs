using UnityEngine;

[CreateAssetMenu(fileName = "Data", menuName = "ScriptableObjects/Asteroid", order = 1)]
public class Asteroid : ScriptableObject
{
    public GameObject AsteroidPrefab;
    public GameObject AsteroidPrefabMobile;
    public float Speed;
    public float AngularVel;
    public int ScoreGiven;
    public GameObject ExplosionParticles;

    public Vector3 GetRandomDirection()
    {
        Vector3 randomDirection = new Vector3(
            Random.Range(-Speed, Speed),
            Random.Range(-Speed, Speed),
            Random.Range(-Speed, Speed));

        return randomDirection;
    }
}
