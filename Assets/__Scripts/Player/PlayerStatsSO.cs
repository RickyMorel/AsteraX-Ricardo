using UnityEngine;

[CreateAssetMenu(fileName = "Data", menuName = "ScriptableObjects/PlayerStats", order = 2)]
public class PlayerStatsSO : ScriptableObject
{
    public int Jumps = 3;
    public float RespawnTime = 2f;
}
