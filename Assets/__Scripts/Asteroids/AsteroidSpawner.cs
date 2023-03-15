using System.Collections.Generic;
using UnityEngine;

public class AsteroidSpawner
{
    #region Private Variables

    private static Asteroid[] _asteroidSOs;
    private List<GameObject> _currentAsteroids = new List<GameObject>();
    private GameManager _gameManager;
    private GameObject _player;
    private Transform _asteroidParentTransform;

    #endregion

    #region Public Properties

    public static Asteroid[] AsteroidSos => _asteroidSOs;
    public List<GameObject> CurrentAsteroids => _currentAsteroids;

    #endregion

    public AsteroidSpawner(GameManager gameManager, GameObject player)
    {
        _gameManager = gameManager;
        _player = player;
        _asteroidSOs = Resources.LoadAll<Asteroid>("AsteroidSOs");

        AsteroidScript.OnAsteroidDestroyed += HandleAsteroidDestroyed;

        CreateAsteroidParentTransform();
    }

    public void CreateAsteroidParentTransform()
    {
        _asteroidParentTransform = GameObject.Find("All_Asteroids").transform;
    }

    private void HandleAsteroidDestroyed(GameObject asteroidObj)
    {
        _currentAsteroids.Remove(asteroidObj);

        CheckIfNextLevel();
    }

    private void CheckIfNextLevel()
    {
        if (_currentAsteroids.Count > 0) { return; }

        _gameManager.RaiseLevel();
    }

    public void SpawnAsteroids(int asteroidsToSpawn)
    {
        for (int i = 0; i < asteroidsToSpawn; i++)
        {
            Asteroid wantedAsteroid = GetRandomAsteroid();
            GameObject asteroidInstance = GameObject.Instantiate(wantedAsteroid.AsteroidPrefab, _asteroidParentTransform);
            asteroidInstance.transform.position = _gameManager.ScreenBounds.GetRandomSpawnPos(_player.transform.position);
            asteroidInstance.transform.rotation = Quaternion.identity;

            asteroidInstance.GetComponent<AsteroidScript>().AsteroidSo = wantedAsteroid;

            float maxForce = wantedAsteroid.Speed;
            asteroidInstance.GetComponent<Rigidbody2D>()
                .AddForce(new Vector3(Random.Range(-maxForce, maxForce), Random.Range(-maxForce, maxForce), Random.Range(-maxForce, maxForce)));

            _currentAsteroids.Add(asteroidInstance);
        }
    }

    public void AddChildToAsteroidList(GameObject asteroid)
    {
        _currentAsteroids.Add(asteroid);
    }

    public static Asteroid GetRandomAsteroid()
    {
        int randomAsteroid = Random.Range(0, 2);
        Asteroid wantedAsteroid = _asteroidSOs[randomAsteroid];
        return wantedAsteroid;
    }

    public Vector3 GetSafeSpawnPosition()
    {
        Vector3 spawnPos;
        bool hasSafeSpawnPos = true;

        do
        {
            spawnPos = _gameManager.ScreenBounds.GetRandomSpawnPos(_player.transform.position);

            hasSafeSpawnPos = true;

            foreach (GameObject asteroid in _currentAsteroids)
            {
                if (Vector3.Distance(spawnPos, asteroid.transform.position) < 3f) { hasSafeSpawnPos = false; }
            }

        } while (!hasSafeSpawnPos);

        return spawnPos;
    }
}
