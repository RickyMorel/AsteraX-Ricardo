using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScreenBounds : MonoBehaviour
{
    #region Editor Fields

    [SerializeField] private Vector2 _bounds;
    [SerializeField] private float _minSpawnDistanceFromPlayer = 5f;

    #endregion

    #region Public Properties

    public static ScreenBounds Instance { get; private set; }

    public Vector2 Bounds => _bounds;

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

    public bool IsWithinBounds(Vector3 targetPos)
    {
        if(Mathf.Abs(targetPos.y) > Bounds.y) { return false; }

        if (Mathf.Abs(targetPos.x) > Bounds.x) { return false; }

        return true;
    }

    public Vector3 GetRandomSpawnPos()
    {
        Vector3 randomPos;
        do
        {
            float randomX = Random.Range(-Bounds.x, Bounds.x);
            float randomY = Random.Range(-Bounds.y, Bounds.y);

            randomPos = new Vector3(randomX, randomY, 0f);
        } while (Vector3.Distance(Player.Instance.transform.position, randomPos) < _minSpawnDistanceFromPlayer);

        return randomPos;
    }

}
