using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScreenBounds
{
    #region Private Variables

    private Vector2 _bounds;
    private float _minSpawnDistanceFromPlayer;

    #endregion

    public ScreenBounds(Vector2 bounds, float minSpawnDistanceFromPlayer)
    {
        _bounds = bounds;
        _minSpawnDistanceFromPlayer = minSpawnDistanceFromPlayer;
    }

    public bool IsWithinBounds(Vector3 targetPos)
    {
        if(Mathf.Abs(targetPos.y) > _bounds.y) { return false; }

        if (Mathf.Abs(targetPos.x) > _bounds.x) { return false; }

        return true;
    }

    public Vector3 GetRandomSpawnPos(Vector3 playerPosition)
    {
        Vector3 randomPos;
        do
        {
            float randomX = Random.Range(-_bounds.x, _bounds.x);
            float randomY = Random.Range(-_bounds.y, _bounds.y);

            randomPos = new Vector3(randomX, randomY, 0f);
        } while (Vector3.Distance(playerPosition, randomPos) < _minSpawnDistanceFromPlayer);

        return randomPos;
    }

}
