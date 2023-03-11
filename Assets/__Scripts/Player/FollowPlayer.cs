using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FollowPlayer : MonoBehaviour
{
    #region Editor Fields

    [SerializeField] private Vector3 _offset = new Vector3(0f, 0f, -2f);

    #endregion

    private void FixedUpdate()
    {
        transform.position = Player.Instance.transform.position + _offset;
    }
}
