using System;
using System.Collections;
using System.Collections.Generic;
using System.Globalization;
using UnityEngine;
using Random = UnityEngine.Random;

public class AsteroidScript : MonoBehaviour
{
    #region Pubic Properties

    public Asteroid AsteroidSo;
    public bool IsChild = false;
    public int ChildCount = 0;
    public float SpeedMultiplier = 1.5f;

    public static event Action<GameObject> OnAsteroidDestroyed;

    #endregion

    #region Unity Loops

    private void Start()
    {
        if (!IsChild) { SpawnChildrenAsteroids(); }
    }

    private void OnCollisionEnter(Collision collision)
    {
        if(collision.gameObject.tag != "Player") { return; }

        Damage(true);

        GameManager.Instance.ReduceJumps();
    }

    #endregion

    private void SpawnChildrenAsteroids()
    {
        //Add velocity to parent astroid
        if (TryGetComponent<Rigidbody>(out Rigidbody rb))
        {
            Vector3 addedForce = AsteroidSo.GetRandomDirection();
            Vector3 angularVel = Random.insideUnitSphere * AsteroidSo.AngularVel * (1 + ChildCount);
            rb.AddForce(addedForce, ForceMode.Impulse);
            rb.angularVelocity = angularVel;
        }

        LevelData levelData = GameManager.Instance.GetCurrentLevelData();

        //Spawn children
        for (int i = 0; i < levelData.Children; i++)
        {
            GameObject firstChildAsteroid = SpawnChildAsteroid(transform, 1);

            for (int j = 0; j < levelData.Children; j++)
            {
                GameObject secondChildAsteroid = SpawnChildAsteroid(firstChildAsteroid.transform, 2);
            }
        }
    }

    public void Damage(bool hitPlayer)
    {
        Transform[] allChildren = transform.GetComponentsInChildren<Transform>();
        foreach (Transform child in allChildren)
        {
            if (child == transform) { continue; }

            if (child.parent != transform) { continue; }

            //Promote child to parent astroid
            child.transform.parent = null;
            AsteroidScript asteroidScript = child.gameObject.GetComponent<AsteroidScript>();
            Rigidbody rb = child.gameObject.AddComponent<Rigidbody>();
            child.gameObject.AddComponent<ScreenWrap>();

            //force child back to z = 0
            child.transform.position = new Vector3(child.transform.position.x, child.transform.position.y, 0f);

            //Tell it that it can't spawn sub children
            asteroidScript.IsChild = true;
            rb.useGravity = false;
            rb.constraints = RigidbodyConstraints.FreezePositionZ;

            //Adds Velocity
            Vector3 randomDirection = asteroidScript.AsteroidSo.GetRandomDirection();
            Vector3 addedForce = randomDirection * asteroidScript.ChildCount * SpeedMultiplier;
            Vector3 angularVel = Random.insideUnitSphere * asteroidScript.AsteroidSo.AngularVel * (1 + asteroidScript.ChildCount);
            rb.AddForce(addedForce, ForceMode.Impulse);
            rb.angularVelocity = angularVel;
        }

        if (!hitPlayer) { GameManager.Instance.AddScore(AsteroidSo.ScoreGiven * (1 + ChildCount)); }

        OnAsteroidDestroyed?.Invoke(gameObject);

        GameObject asteroidParticles = Instantiate(AsteroidSo.ExplosionParticles, transform.position, Quaternion.identity);
        float particleScale = 1f / (1+ ChildCount);
        asteroidParticles.transform.localScale = new Vector3(particleScale, particleScale, particleScale);

        Destroy(gameObject);
    }

    private GameObject SpawnChildAsteroid(Transform parent, int childCount)
    {
        float maxDistance = 0.3f;
        Vector3 randomSpawnPos = new Vector3(
            Random.Range(-maxDistance, maxDistance),
            Random.Range(-maxDistance, maxDistance),
            Random.Range(-maxDistance, maxDistance));

        float maxAngle = 90f;
        Vector3 randomRotation = new Vector3(
            Random.Range(-maxAngle, maxAngle),
            Random.Range(-maxAngle, maxAngle),
            Random.Range(-maxAngle, maxAngle));

        //Sets random rotation and position on parent asteroid
        Asteroid asteroidSO = AsteroidSpawner.GetRandomAsteroid();
        GameObject asteroidInstance = Instantiate(asteroidSO.AsteroidPrefab, parent);
        asteroidInstance.transform.localPosition = randomSpawnPos;
        asteroidInstance.transform.localRotation = Quaternion.Euler(randomRotation);
        asteroidInstance.transform.localScale = new Vector3(0.6f, 0.6f, 0.6f);

        //Gives Child Data
        AsteroidScript asteroidScript = asteroidInstance.GetComponent<AsteroidScript>();
        asteroidScript.IsChild = true;
        asteroidScript.AsteroidSo = asteroidSO;
        asteroidScript.ChildCount = childCount;

        //Removes parent only asteroid components
        Destroy(asteroidInstance.GetComponent<Rigidbody>());
        Destroy(asteroidInstance.GetComponent<ScreenWrap>());

        AsteroidSpawner.Instance.AddChildToAsteroidList(asteroidInstance);

        return asteroidInstance;
    }
}