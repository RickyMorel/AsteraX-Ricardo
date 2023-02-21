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
        GameAudioManager.Instance.PlayButtonPressSound();
    }
}
