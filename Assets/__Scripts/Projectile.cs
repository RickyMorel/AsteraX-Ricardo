using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(Rigidbody))]
public class Projectile : MonoBehaviour
{
    #region Editor Fields

    [SerializeField] private float _bulletForce = 50f;

    #endregion

    #region Private Variables

    private Rigidbody _rb;

    #endregion

    #region Public Properties

    public static event Action OnHit;
    public static event Action OnLuckyShot;

    #endregion

    private void Awake()
    {
        _rb = GetComponent<Rigidbody>();
    }

    private void Start()
    {
        _rb.AddForce(_bulletForce * transform.up, ForceMode.Impulse);

        Invoke(nameof(SelfDestruct), 2f);
    }

    private void SelfDestruct()
    {
        Destroy(gameObject);
    }

    private void OnCollisionEnter(Collision collision)
    {
        if (!collision.gameObject.TryGetComponent<AsteroidScript>(out AsteroidScript asteroid)) { return; }

        asteroid.Damage(false);

        SelfDestruct();
    }
}
