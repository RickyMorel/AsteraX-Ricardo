using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScreenWrap : MonoBehaviour
{
    #region Public Properties

    public float TimeSinceLastScreenWrap => _timeSinceLastScreenWrap;

    #endregion

    #region Private Variables

    private float _timeSinceLastScreenWrap = 999f;

    #endregion

    private void Update()
    {
        _timeSinceLastScreenWrap += Time.deltaTime;
    }

    private void OnTriggerExit(Collider other)
    {
        if(other.gameObject.tag != "OnScreenBounds") { return; }

        //Gets negative or positive value from x and y
        float addedMoveAmountX = (transform.position.x / Mathf.Abs(transform.position.x)) * 2;
        float addedMoveAmountY = (transform.position.y / Mathf.Abs(transform.position.y)) * 2;

        if (Mathf.Abs(transform.position.y) > ScreenBounds.Instance.Bounds.y)
        {
            //Debug.Log("New Y: " + transform.position.y * -1f + " ; Added Offset: " + addedMoveAmountY);
            transform.position = new Vector3(transform.position.x, transform.position.y * -1f + addedMoveAmountY, transform.position.z);
            _timeSinceLastScreenWrap = 0f;
        }
        if (Mathf.Abs(transform.position.x) > ScreenBounds.Instance.Bounds.x)
        {
            //Debug.Log("New X: " + transform.position.x * -1f + " ; Added Offset: " + addedMoveAmountX);
            transform.position = new Vector3(transform.position.x * -1f + addedMoveAmountX, transform.position.y, transform.position.z);
            _timeSinceLastScreenWrap = 0f;
        }
    }
}
