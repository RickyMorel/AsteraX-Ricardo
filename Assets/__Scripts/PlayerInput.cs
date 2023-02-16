using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityStandardAssets.CrossPlatformInput;

public class PlayerInput : MonoBehaviour
{
    public Joystick Joystick;

    #region Private Variables

    private Vector2 _moveDirection;
    private Vector3 _mousePosition;
    private bool _isShooting;

    #endregion

    #region Public Properties

    public Vector2 MoveDirection => _moveDirection;
    public Vector3 MousePosition => _mousePosition;
    public bool IsShooting => _isShooting;

    #endregion

    private void Update()
    {
        GetMoveInputs();
        GetShootInputs();
        GetMouseInputs();
    }

    private void GetMoveInputs()
    {
        float horizontalInput = Joystick.Horizontal;
        float verticalInput = Joystick.Vertical;

        _moveDirection = new Vector2(horizontalInput, verticalInput);
    }

    private void GetShootInputs()
    {
        _isShooting = Input.GetAxis("Fire1") == 1f;
    }

    private void GetMouseInputs()
    {
        _mousePosition = Camera.main.ScreenToWorldPoint(Input.mousePosition);
    }
}
