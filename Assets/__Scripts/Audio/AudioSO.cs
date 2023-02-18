using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "Data", menuName = "Audio/AudioSO", order = 1)]
public class AudioSO : ScriptableObject
{
    public AudioClip[] Musics;
    public AudioClip[] Lasers;
    public AudioClip[] Explosions;
    public AudioClip Respawn;
    public AudioClip Die;
    public AudioClip ButtonPress;

    public AudioClip GetRandomLaserSound()
    {
        int randomIndex = Random.Range(0, Lasers.Length - 1);

        return Lasers[randomIndex];
    }

    public AudioClip GetRandomExplosionSound()
    {
        int randomIndex = Random.Range(0, Lasers.Length - 1);

        return Lasers[randomIndex];
    }
}
