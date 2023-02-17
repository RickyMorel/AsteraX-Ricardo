using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityStandardAssets.CrossPlatformInput;

public class PlayerInput : MonoBehaviour
{
    public Joystick Joystick_1;
    public Joystick Joystick_2;

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
        GetMouseInputs();
    }

    private void GetMoveInputs()
    {
        float horizontalInput = Joystick_1.Horizontal;
        float verticalInput = Joystick_1.Vertical;

        _moveDirection = new Vector2(horizontalInput, verticalInput);
    }

    private void GetMouseInputs()
    {
        float horizontalInput = Joystick_2.Horizontal;
        float verticalInput = Joystick_2.Vertical;
        Vector3 lookPos = new Vector2(horizontalInput, verticalInput).normalized * 3;

        _isShooting = lookPos.magnitude > 0;

        _mousePosition = lookPos;
    }
}
