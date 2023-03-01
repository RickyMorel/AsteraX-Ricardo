using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(Rigidbody))]
[RequireComponent(typeof(ScreenWrap))]
[RequireComponent(typeof(AudioSource))]
public class Projectile : MonoBehaviour
{
    #region Editor Fields

    [SerializeField] private float _bulletForce = 50f;

    #endregion

    #region Private Variables

    private Rigidbody _rb;
    private ScreenWrap _screenWrap;
    private AudioSource _audioSource;   

    #endregion

    #region Public Properties

    public static event Action OnHit;
    public static event Action OnLuckyShot;
    public static event Action OnBulletFired;

    #endregion

    private void Awake()
    {
        _rb = GetComponent<Rigidbody>();
        _screenWrap = GetComponent<ScreenWrap>();
        _audioSource = GetComponent<AudioSource>();
    }

    private void Start()
    {
        OnBulletFired?.Invoke();

        _rb.AddForce(_bulletForce * transform.up, ForceMode.Impulse);

        AudioClip wantedSound = Player.Instance.BulletsAreUpgraded ? GameManager.Instance.AudioSo.GetRandomUpgradedLaserSound() : GameManager.Instance.AudioSo.GetRandomLaserSound();

        _audioSource.PlayOneShot(wantedSound);

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

        OnHit?.Invoke();

        if (_screenWrap.TimeSinceLastScreenWrap < 1.5f) { OnLuckyShot?.Invoke(); }

        SelfDestruct();
    }
}
