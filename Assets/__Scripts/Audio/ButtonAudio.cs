using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(AudioSource))]
public class ButtonAudio : MonoBehaviour
{ 
    private AudioSource _audioSource;

    private void Start()
    {
        _audioSource = GetComponent<AudioSource>();
    }

    public void OnClick()
    {
        Debug.Log("Play Button Sfx: " + GameManager.Instance.AudioSo.ButtonPress);
        _audioSource.PlayOneShot(GameManager.Instance.AudioSo.ButtonPress);
    }
}
