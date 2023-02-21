using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "Data", menuName = "Audio/AudioSO", order = 1)]
public class AudioSO : ScriptableObject
{
    public AudioClip[] Musics;
    public AudioClip[] Lasers;
    public AudioClip[] Explosions;
    public AudioClip[] ButtonPress;
    public AudioClip ShipEngine;
    public AudioClip Respawn;
    public AudioClip Die;
    public AudioClip NextLevel;

    public AudioClip GetRandomLaserSound()
    {
        int randomIndex = Random.Range(0, Lasers.Length - 1);

        return Lasers[randomIndex];
    }

    public AudioClip GetRandomButtonPressSound()
    {
        int randomIndex = Random.Range(0, ButtonPress.Length - 1);

        return ButtonPress[randomIndex];
    }

    public AudioClip GetRandomExplosionSound()
    {
        int randomIndex = Random.Range(0, Explosions.Length - 1);

        return Explosions[randomIndex];
    }

    public AudioClip GetRandomMusicClip()
    {
        int randomIndex = Random.Range(0, Musics.Length - 1);

        return Musics[randomIndex];
    }
}
