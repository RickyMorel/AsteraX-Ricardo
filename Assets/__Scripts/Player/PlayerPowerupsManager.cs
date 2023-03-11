using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(Player))]
public class PlayerPowerupsManager : MonoBehaviour
{
    #region Editor Fields

    [Header("Bullets")]
    [SerializeField] private float _bulletBuffDuration = 10f;
    [SerializeField] private float _originalTimeBetweenShots;
    [SerializeField] private GameObject _originalBulletPrefab;
    [SerializeField] private float _upgradedTimeBetweenShots;
    [SerializeField] private GameObject _upgradedBulletPrefab;

    [Header("Shield")]
    [SerializeField] private float _shieldDuration = 10f;
    [SerializeField] private GameObject _shieldObj;

    #endregion

    #region Private Variables

    private Player _player;

    #endregion

    private void Awake()
    {
        _player = GetComponent<Player>();
    }

    private void Start()
    {
        _player.ChangeBullets(_originalBulletPrefab, _originalTimeBetweenShots, false);
    }

    public void ActivatePowerup(PickupType pickupType)
    {
        if(pickupType == PickupType.Shield) { EnableShieldBuff(); }

        if(pickupType == PickupType.Bullet) { EnableBulletBuff(); }
    }

    public void EnableBulletBuff()
    {
        _player.ChangeBullets(_upgradedBulletPrefab, _upgradedTimeBetweenShots, true);

        StartCoroutine(DowngradeBulletsCoroutine());
    }

    public void EnableShieldBuff()
    {
        _shieldObj.SetActive(true);

        GameManager.Instance.GameManagerHumble.SetIsInvunerable(true);

        StartCoroutine(FlashShieldCoroutine());
    }

    private IEnumerator FlashShieldCoroutine()
    {
        SpriteRenderer shieldSprite = _shieldObj.GetComponentInChildren<SpriteRenderer>();

        yield return new WaitForSeconds(_shieldDuration * 0.7f);

        shieldSprite.enabled = false;

        yield return new WaitForSeconds(_shieldDuration * 0.025f);

        shieldSprite.enabled = true;

        yield return new WaitForSeconds(_shieldDuration * 0.025f);

        shieldSprite.enabled = false;

        yield return new WaitForSeconds(_shieldDuration * 0.025f);

        shieldSprite.enabled = true;

        yield return new WaitForSeconds(_shieldDuration * 0.025f);

        shieldSprite.enabled = false;

        yield return new WaitForSeconds(_shieldDuration * 0.025f);

        shieldSprite.enabled = true;

        yield return new WaitForSeconds(_shieldDuration * 0.025f);

        shieldSprite.enabled = false;

        yield return new WaitForSeconds(_shieldDuration * 0.025f);

        shieldSprite.enabled = true;

        yield return new WaitForSeconds(_shieldDuration * 0.025f);

        shieldSprite.enabled = false;

        yield return new WaitForSeconds(_shieldDuration * 0.015f);

        shieldSprite.enabled = true;

        yield return new WaitForSeconds(_shieldDuration * 0.015f);

        shieldSprite.enabled = false;

        yield return new WaitForSeconds(_shieldDuration * 0.015f);

        shieldSprite.enabled = true;

        yield return new WaitForSeconds(_shieldDuration * 0.015f);

        shieldSprite.enabled = false;

        yield return new WaitForSeconds(_shieldDuration * 0.015f);

        shieldSprite.enabled = true;

        yield return new WaitForSeconds(_shieldDuration * 0.015f);

        shieldSprite.enabled = false;

        yield return new WaitForSeconds(_shieldDuration * 0.015f);

        shieldSprite.enabled = true;

        yield return new WaitForSeconds(_shieldDuration * 0.015f);

        shieldSprite.enabled = false;

        yield return new WaitForSeconds(_shieldDuration * 0.015f);

        shieldSprite.enabled = true;

        yield return new WaitForSeconds(_shieldDuration * 0.0075f);

        shieldSprite.enabled = false;

        yield return new WaitForSeconds(_shieldDuration * 0.0075f);

        shieldSprite.enabled = true;

        yield return new WaitForSeconds(_shieldDuration * 0.0075f);

        shieldSprite.enabled = false;

        yield return new WaitForSeconds(_shieldDuration * 0.0075f);

        shieldSprite.enabled = true;

        yield return new WaitForSeconds(_shieldDuration * 0.0075f);

        shieldSprite.enabled = false;

        yield return new WaitForSeconds(_shieldDuration * 0.0075f);

        shieldSprite.enabled = true;

        yield return new WaitForSeconds(_shieldDuration * 0.0075f);

        _shieldObj.SetActive(false);

        GameManager.Instance.GameManagerHumble.SetIsInvunerable(false);

        GameAudioManager.Instance.PlayPowerDownSFX();
    }

    private IEnumerator DowngradeBulletsCoroutine()
    {
        yield return new WaitForSeconds(_bulletBuffDuration);

        _player.ChangeBullets(_originalBulletPrefab, _originalTimeBetweenShots, false);

        GameAudioManager.Instance.PlayPowerDownSFX();
    }
}
