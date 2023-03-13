using System;
using System.Collections;
using System.Collections.Generic;
using System.Globalization;
using UnityEngine;
using Random = UnityEngine.Random;

[RequireComponent(typeof(AudioSource))]
public class AsteroidScript : MonoBehaviour
{
    #region Editor Fields

    [SerializeField] private SpriteRenderer _mesh;

    #endregion

    #region Private Variables

    private AudioSource _audioSource;

    #endregion

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

        _audioSource = GetComponent<AudioSource>();
    }

    private void OnCollisionEnter2D(Collision2D collision)
    {
        if (collision.gameObject.tag != "Player") { return; }

        Damage(true);

        GameManager.Instance.ReduceJumps();
    }

    #endregion

    private void SpawnChildrenAsteroids()
    {
        //Add velocity to parent astroid
        if (TryGetComponent<Rigidbody2D>(out Rigidbody2D rb))
        {
            Vector3 addedForce = AsteroidSo.GetRandomDirection();
            Vector3 angularVel = Random.insideUnitSphere * AsteroidSo.AngularVel * (1 + ChildCount*0.25f);
            rb.AddForce(addedForce, ForceMode2D.Impulse);
            rb.angularVelocity = angularVel.z;
        }

        LevelData levelData = GameManager.Instance.GameManagerHumble.GetCurrentLevelData();

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

            if(!child.TryGetComponent(out AsteroidScript childAsteroidScript)) { continue; }

            //Promote child to parent astroid
            child.transform.parent = transform.parent;
            Rigidbody2D rb = child.GetComponent<Rigidbody2D>() == null ? child.gameObject.AddComponent<Rigidbody2D>() : child.GetComponent<Rigidbody2D>(); 
            child.gameObject.AddComponent<ScreenWrap>();

            //force child back to z = 0
            child.transform.position = new Vector3(child.transform.position.x, child.transform.position.y, 0f);

            //Tell it that it can't spawn sub children
            childAsteroidScript.IsChild = true;
            rb.gravityScale = 0;
            //rb.constraints = RigidbodyConstraints2D.FreezePositionZ | Rigidbody2DConstraints.FreezeRotationX | Rigidbody2DConstraints.FreezeRotationY;

            //Adds Velocity
            Vector3 randomDirection = childAsteroidScript.AsteroidSo.GetRandomDirection();
            Vector3 addedForce = randomDirection * childAsteroidScript.ChildCount * SpeedMultiplier;
            Vector3 angularVel = Random.insideUnitSphere * childAsteroidScript.AsteroidSo.AngularVel * (1 + childAsteroidScript.ChildCount);
            rb.AddForce(addedForce, ForceMode2D.Impulse);
            rb.angularVelocity = angularVel.z;
        }

        if (!hitPlayer) { GameManager.Instance.AddScore(AsteroidSo.ScoreGiven * (1 + ChildCount)); }

        OnAsteroidDestroyed?.Invoke(gameObject);

        GameObject asteroidParticles = Instantiate(AsteroidSo.ExplosionParticles, GameManager.Instance.AsteroidExplosionsParentTransform);
        asteroidParticles.transform.position = transform.position;
        asteroidParticles.transform.rotation = Quaternion.identity;

        float particleScale = 1f / (1+ ChildCount);
        asteroidParticles.transform.localScale = new Vector3(particleScale, particleScale, particleScale);

        _audioSource.PlayOneShot(GameManager.Instance.AudioSo.GetRandomExplosionSound());
        _mesh.enabled = false;
        //set to no damage layer
        gameObject.layer = 14;

        Invoke(nameof(DestroySelf), 3f);
    }

    private void DestroySelf()
    {
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
            Random.Range(0, 0),
            Random.Range(0, 0),
            Random.Range(-maxAngle, maxAngle));

        //Sets random rotation and position on parent asteroid
        Asteroid asteroidSO = AsteroidSpawner.GetRandomAsteroid();

        GameObject wantedPrefab = Application.platform == RuntimePlatform.Android ? asteroidSO.AsteroidPrefabMobile : asteroidSO.AsteroidPrefab;

        GameObject asteroidInstance = Instantiate(wantedPrefab, parent);

        asteroidInstance.transform.localPosition = randomSpawnPos;
        asteroidInstance.transform.localRotation = Quaternion.Euler(randomRotation);
        asteroidInstance.transform.localScale = new Vector3(0.6f, 0.6f, 0.6f);

        //Gives Child Data
        AsteroidScript asteroidScript = asteroidInstance.GetComponent<AsteroidScript>();
        asteroidScript.IsChild = true;
        asteroidScript.AsteroidSo = asteroidSO;
        asteroidScript.ChildCount = childCount;

        //Removes parent only asteroid components
        Destroy(asteroidInstance.GetComponent<Rigidbody2D>());
        Destroy(asteroidInstance.GetComponent<ScreenWrap>());

        GameManager.Instance.AsteroidSpawner.AddChildToAsteroidList(asteroidInstance);

        return asteroidInstance;
    }
}
