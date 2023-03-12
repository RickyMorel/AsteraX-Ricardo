using NUnit.Framework;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class asteroid_spawner_tests
{
    [Test]
    [TestCase(5)]
    [TestCase(40)]
    public void check_if_spawned_correct_amount_of_asteroids(int expectedAmountToSpawn)
    {
        GameManager manager = new GameManager();
        GameObject playerObj = new GameObject();
        playerObj.transform.position = Vector3.zero; ;
        AsteroidSpawner spawner = new AsteroidSpawner(manager, playerObj);

        spawner.SpawnAsteroids(expectedAmountToSpawn);

        Assert.AreEqual(expectedAmountToSpawn, spawner.CurrentAsteroids.Count, "Did not spawn correct amount");
    }

    [TearDown]
    public void asteroids_teardown()
    {
        Asteroid[] asteroids = GameObject.FindObjectsOfType<Asteroid>();

        foreach (Asteroid asteroid in asteroids)
        {
            GameObject.DestroyImmediate(asteroid);
        }
    }
}
