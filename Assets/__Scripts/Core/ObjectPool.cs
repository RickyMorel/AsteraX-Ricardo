using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectPool
{
    public List<GameObject> ExplosionParticlePool { get; private set; } = new List<GameObject>();

    public ObjectPool(GameObject explosionParticles, Transform parentTransform)
    {
        CreatePool(ExplosionParticlePool, explosionParticles, 40, parentTransform);
    }

    public GameObject GetExplosionParticle()
    {
        return GetFromPool(ExplosionParticlePool);
    }

    public void CreatePool(List<GameObject> pool, GameObject objectPrefab, int amount, Transform parentTransform = null)
    {
        for (int i = 0; i < amount; i++)
        {
            AddToPool(pool, objectPrefab, parentTransform);
        }
    }

    public GameObject AddToPool(List<GameObject> pool, GameObject objectPrefab, Transform parentTransform = null)
    {
        GameObject objectInstance = GameObject.Instantiate(objectPrefab, parentTransform);
        objectInstance.SetActive(false);
        pool.Add(objectInstance);

        return objectInstance;
    }

    public GameObject GetFromPool(List<GameObject> pool)
    {
        foreach (GameObject obj in pool)
        {
            if (obj.activeSelf == true) { continue; }

            obj.SetActive(true);

            return obj;
        }

        return null;
    }
}
