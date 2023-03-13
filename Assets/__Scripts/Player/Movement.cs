using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Movement
{
    public float Speed;

    public Movement(float speed)
    {
        Speed = speed;
    }

    public Vector3 CalculateMovement(float h, float v, float deltaTime)
    {
        Vector3 moveDirection3D = new Vector3(h, v, 0f);
        Vector3 finalDirection = moveDirection3D.normalized * Speed * deltaTime;
        return finalDirection;
    }
}
