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

    private void FixedUpdate()
    {
        _timeSinceLastScreenWrap += Time.deltaTime;

        KeepOnScreen();
    }

    private void KeepOnScreen()
    {
        Vector3 newPosition = transform.position;
        Vector3 viewportPos = Camera.main.WorldToViewportPoint(transform.position);

        if(viewportPos.x > 1)
        {
            newPosition.x = -newPosition.x + 0.1f;
            _timeSinceLastScreenWrap = 0f;
        }
        else if (viewportPos.x < 0)
        {
            newPosition.x = -newPosition.x - 0.1f;
            _timeSinceLastScreenWrap = 0f;
        }
        if (viewportPos.y > 1)
        {
            newPosition.y = -newPosition.y + 0.1f;
            _timeSinceLastScreenWrap = 0f;
        }
        else if (viewportPos.y < 0)
        {
            newPosition.y = -newPosition.y - 0.1f;
            _timeSinceLastScreenWrap = 0f;
        }

        transform.position = newPosition;
    }
}
