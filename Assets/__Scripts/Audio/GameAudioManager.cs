using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameAudioManager : MonoBehaviour
{
    #region Editor Fields

    [SerializeField] private AudioSource _respawnSource;
    [SerializeField] private AudioSource _buttonSource;
    [SerializeField] private AudioSource _achievementSource;
    [SerializeField] private AudioSource _pickupSource;

    #endregion

    #region Public Properties

    public static GameAudioManager Instance { get; private set; }

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

    public void PlayRespawnSFX()
    {
        _respawnSource.PlayOneShot(GameManager.Instance.AudioSo.Respawn);
    }

    public void PlayAchievementSFX()
    {
        _achievementSource.PlayOneShot(GameManager.Instance.AudioSo.AchievementUnlocked);
    }

    public void PlayDieSFX()
    {
        _respawnSource.PlayOneShot(GameManager.Instance.AudioSo.Die);
    }

    public void PlayPickupSFX()
    {
        _pickupSource.PlayOneShot(GameManager.Instance.AudioSo.Pickup);
    }

    public void PlayButtonPressSound()
    {
        _buttonSource.PlayOneShot(GameManager.Instance.AudioSo.GetRandomButtonPressSound());
    }
}
