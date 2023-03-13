using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Random = UnityEngine.Random;

public class PickupSpawner : MonoBehaviour
{
    #region Editor Fields

    [SerializeField] private int _spawnEveryLevel = 5;
    [SerializeField] private List<GameObject> _pickupPrefabs;

    #endregion

    #region Private Variables 

    private int _prevIndex = -1;

    #endregion

    private void Start()
    {
        GameManager.OnLevelUpdated += HandleLevelUpdated;
    }

    private void OnDestroy()
    {
        GameManager.OnLevelUpdated -= HandleLevelUpdated;
    }

    private void HandleLevelUpdated(int level)
    {
        if (level % _spawnEveryLevel != 0) { return; }

        int randomPickup = _prevIndex;

        while (_prevIndex == randomPickup)
        {
            randomPickup = Random.Range(0, _pickupPrefabs.Count);
        }

        _prevIndex = randomPickup;

        Instantiate(_pickupPrefabs[randomPickup], GameManager.Instance.ScreenBounds.GetRandomSpawnPos(Player.Instance.transform.position), Quaternion.identity);
    }
}
