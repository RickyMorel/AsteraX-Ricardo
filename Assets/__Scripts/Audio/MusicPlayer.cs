using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(AudioSource))]
public class MusicPlayer : MonoBehaviour
{
    private AudioSource _musicSource;
    private AudioClip _prevMusicClip;

    private void Start()
    {
        _musicSource = GetComponent<AudioSource>();

        StartCoroutine(PlayNewMusic(GameManager.Instance.AudioSo.GetRandomMusicClip()));
    }

    private IEnumerator PlayNewMusic(AudioClip musicClip)
    {
        if (_musicSource.isPlaying) { yield return null; }

        _musicSource.PlayOneShot(musicClip);

        yield return new WaitForSeconds(musicClip.length);

        AudioClip newClip = GameManager.Instance.AudioSo.GetRandomMusicClip();

        while (newClip == _prevMusicClip)
        {
            newClip = GameManager.Instance.AudioSo.GetRandomMusicClip();
        }

        StartCoroutine(PlayNewMusic(GameManager.Instance.AudioSo.GetRandomMusicClip()));
    }
}
