using System.Collections;
using System.Collections.Generic;
using System.Security.Cryptography.X509Certificates;
using UnityEngine;

public class AsteroidSpawner : MonoBehaviour
{
    #region Editor Fields

    [SerializeField] private static Asteroid[] _asteroidSOs;

    #endregion

    #region Public Properties

    public static AsteroidSpawner Instance { get; private set; }

    #endregion

    #region Private Variables

    [SerializeField] private List<GameObject> _currentAsteroids = new List<GameObject>();

    #endregion

    private void Awake()
    {
        if (Instance != null && Instance != this)
        {
            Destroy(this);
        }
        else
        {
            Instance = this;
        }
    }

    private void Start()
    {
        AsteroidScript.OnAsteroidDestroyed += HandleAsteroidDestroyed;

        _asteroidSOs = Resources.LoadAll<Asteroid>("AsteroidSOs");
    }

    private void OnDestroy()
    {
        AsteroidScript.OnAsteroidDestroyed -= HandleAsteroidDestroyed;
    }

    private void HandleAsteroidDestroyed(GameObject asteroidObj)
    {
        _currentAsteroids.Remove(asteroidObj);

        CheckIfNextLevel();
    }

    private void CheckIfNextLevel()
    {
        if (_currentAsteroids.Count > 0) { return; }

        GameManager.Instance.RaiseLevel();
    }

    public void SpawnAsteroids()
    {
        LevelData levelData = GameManager.Instance.GameManagerHumble.GetCurrentLevelData();

        for (int i = 0; i < levelData.Asteroids; i++)
        {
            Asteroid wantedAsteroid = GetRandomAsteroid();
            GameObject asteroidInstance = Instantiate(wantedAsteroid.AsteroidPrefab, ScreenBounds.Instance.GetRandomSpawnPos(), Quaternion.identity);
            asteroidInstance.GetComponent<AsteroidScript>().AsteroidSo = wantedAsteroid;
            float maxForce = wantedAsteroid.Speed;
            asteroidInstance.GetComponent<Rigidbody>()
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
            spawnPos = ScreenBounds.Instance.GetRandomSpawnPos();

            hasSafeSpawnPos = true;

            foreach (GameObject asteroid in _currentAsteroids)
            {
                if (Vector3.Distance(spawnPos, asteroid.transform.position) < 3f) { hasSafeSpawnPos = false; }
            }

        } while (!hasSafeSpawnPos);

        return spawnPos;
    }
}
