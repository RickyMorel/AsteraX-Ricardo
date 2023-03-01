using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Pickup : MonoBehaviour
{
    [SerializeField] private PickupType _type;

    private void OnTriggerEnter(Collider other)
    {
        if(!other.gameObject.TryGetComponent(out PlayerPowerupsManager player)) { return; }

        player.ActivatePowerup(_type);

        GameAudioManager.Instance.PlayPickupSFX();

        Destroy(gameObject);    
    }
}

public enum PickupType
{
    Shield,
    Health,
    Bullet
}
