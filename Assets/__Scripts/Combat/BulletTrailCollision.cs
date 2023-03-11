using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BulletTrailCollision : MonoBehaviour
{
    private ParticleSystem _particles;

    private void Start()
    {
        _particles = GetComponent<ParticleSystem>();
    }

    private void OnParticleCollision(GameObject other)
    {
        AsteroidScript asteroid = other.GetComponent<AsteroidScript>();

        if (asteroid != null) { asteroid.Damage(false); }
    }
}
