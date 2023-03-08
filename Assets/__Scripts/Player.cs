//#define DEBUG_TurretPointAtMouse_DrawMousePoint

using System.Collections;
using UnityEngine;


[RequireComponent(typeof(PlayerInput))]
[RequireComponent(typeof(AudioSource))]
public class Player : MonoBehaviour
{
    #region Editor Fields

    [Header("Set In Inspector")]
    [SerializeField] private float _moveSpeed = 10f;

    [SerializeField] private Transform _turretTransform;
    [SerializeField] private Transform _shootTransform;
    [SerializeField] private ParticleSystem _boosterParticles;
    [SerializeField] private GameObject _jumpInParticles;
    [SerializeField] private GameObject _jumpOutParticles;
    [SerializeField] private AudioSource _engineAudioSource;
    [SerializeField] private GameObject _meshes;

    #endregion

    #region Private Variables

    private PlayerInput _playerInput;
    private float _timeSinceLastShot = 0f;
    private float _boosterParticlesTurnSmoothVel;
    private Vector3 _prevPos;
    private float _enginePitch;
    private float _timeBetweenShots = 0.2f;
    private GameObject _projectilePrefab;
    private bool _bulletsAreUpgraded = false;
    private Movement _movement;

    #endregion

    #region Public Properties

    public static Player Instance { get; private set; }
    public bool BulletsAreUpgraded => _bulletsAreUpgraded;

    #endregion

    #region Unity Loops

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

    private void Start()
    {
        _playerInput = GetComponent<PlayerInput>();

        _movement = new Movement(_moveSpeed);
    }

    private void Update()
    {
        _timeSinceLastShot += Time.deltaTime;
    }

    private void FixedUpdate()
    {
        PlayBoostParticles();
        CalculateEnginePitch();

        if (GameManager.Instance.GameState != GameState.Playing) { return; }

        Move();
        CheckShoot();
        Aim();
    }

    #endregion

    public void ChangeBullets(GameObject newProjectilePrefab, float newTimeBetweenShots, bool bulletsAreUpgraded)
    {
        _projectilePrefab = newProjectilePrefab;
        _timeBetweenShots = newTimeBetweenShots;
        _bulletsAreUpgraded = bulletsAreUpgraded;
    }

    public void Respawn(float respawnTime)
    {
        StartCoroutine(RespawnCoroutine(respawnTime));
    }

    public IEnumerator RespawnCoroutine(float respawnTime)
    {
        GameManager.Instance.SetGameState(GameState.Respawning);

        //Jump In

        Instantiate(_jumpOutParticles, transform.position, Quaternion.identity);

        GameAudioManager.Instance.PlayDieSFX();

        transform.position = new Vector3(0f, 0f, -100f);

        //

        //Jump Out

        yield return new WaitForSeconds(respawnTime);

        Vector3 spawnPos = AsteroidSpawner.Instance.GetSafeSpawnPosition();

        Instantiate(_jumpInParticles, spawnPos, Quaternion.identity);

        GameAudioManager.Instance.PlayRespawnSFX();

        yield return new WaitForSeconds(0.5f);

        transform.position = spawnPos;

        StartCoroutine(BecomeInvunerableCoroutine());

        //

        GameManager.Instance.SetGameState(GameState.Playing);
    }

    private IEnumerator BecomeInvunerableCoroutine()
    {
        GameManager.Instance.IsInvunerable = true;
        _meshes.SetActive(false);
        yield return new WaitForSeconds(0.25f);
        _meshes.SetActive(true);
        yield return new WaitForSeconds(0.25f);
        _meshes.SetActive(false);
        yield return new WaitForSeconds(0.25f);
        _meshes.SetActive(true);
        yield return new WaitForSeconds(0.25f);
        _meshes.SetActive(false);
        yield return new WaitForSeconds(0.25f);
        _meshes.SetActive(true);
        yield return new WaitForSeconds(0.25f);
        _meshes.SetActive(false);
        yield return new WaitForSeconds(0.25f);
        _meshes.SetActive(true);
        yield return new WaitForSeconds(0.25f);
        _meshes.SetActive(false);
        yield return new WaitForSeconds(0.25f);
        _meshes.SetActive(true);
        GameManager.Instance.IsInvunerable = false;
    }

    private void Move()
    {
        float deltaTime = Time.deltaTime;

        transform.position += _movement.CalculateMovement(_playerInput.MoveDirection.x, _playerInput.MoveDirection.y, deltaTime);

        _prevPos = transform.position;
    }

    private void CalculateEnginePitch()
    {
        if(GameManager.Instance.GameState != GameState.Playing) { _enginePitch = 0f; }

        bool isMoving = _playerInput.MoveDirection.magnitude != 0f;

        _engineAudioSource.volume = isMoving ? 1f : 0f;

        _enginePitch = Mathf.Lerp(_enginePitch, isMoving ? 1f : 0f, Time.deltaTime * 3f);

        _engineAudioSource.pitch = (_enginePitch + 1f);
    }

    private void PlayBoostParticles()
    {
        var emitter = _boosterParticles.emission;
        if (_playerInput.MoveDirection.magnitude == 0) { emitter.enabled = false; }
        else { emitter.enabled = true; }

        float targetAngle = Mathf.Atan2(_playerInput.MoveDirection.x, _playerInput.MoveDirection.y) * Mathf.Rad2Deg + 90f;

        float angle = Mathf.SmoothDampAngle(_boosterParticles.transform.eulerAngles.x, targetAngle, ref _boosterParticlesTurnSmoothVel, 0.1f);
        _boosterParticles.transform.rotation = Quaternion.Euler(targetAngle, 90f, 0f);
    }

    private void Aim()
    {
        if(_playerInput.MousePosition.magnitude == 0) { return; }

        Vector3 direction = _playerInput.MousePosition;
        float angle = Mathf.Atan2(direction.y, direction.x) * Mathf.Rad2Deg - 90f;
        _turretTransform.rotation = Quaternion.AngleAxis(angle, Vector3.forward);
    }

    private void CheckShoot()
    {
        if(_timeSinceLastShot < _timeBetweenShots) { return; }

        if (!_playerInput.IsShooting) { return; }

        _timeSinceLastShot = 0f;

        Instantiate(_projectilePrefab, _shootTransform.position, _shootTransform.rotation);
    }

#if DEBUG_TurretPointAtMouse_DrawMousePoint

    private void OnDrawGizmos()
    {
        Gizmos.color = Color.white;
        Gizmos.DrawWireSphere(_playerInput.MousePosition, 0.2f);
        Gizmos.DrawLine(transform.position, _playerInput.MousePosition);
    }

#endif
}
