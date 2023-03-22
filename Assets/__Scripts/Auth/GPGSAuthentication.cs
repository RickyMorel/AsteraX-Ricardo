using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using GooglePlayGames.BasicApi;
using UnityEngine.SocialPlatforms;
using GooglePlayGames;
using System;

public class GPGSAuthentication : MonoBehaviour
{
    public static GPGSAuthentication Instance { get; private set; }
    public static PlayGamesPlatform Platform;
    public bool IsConnectedToGooglePlay;

    private string _debugString;

    public event Action OnSignedIn;

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

        DontDestroyOnLoad(gameObject);

        PlayGamesPlatform.DebugLogEnabled = true;
        PlayGamesPlatform.Activate();
    }

    private void Start()
    {
        LoginToGooglePlay();
    }

    private void LoginToGooglePlay()
    {
        _debugString = "Try LoginToGooglePlay";

        PlayGamesPlatform.Instance.Authenticate(SignInInteractivity.CanPromptAlways, (result) =>
        {
            _debugString = "Authenticate?";

            switch (result)
            {
                case SignInStatus.Success:
                    _debugString = $"Sucessful Login!  : {result.ToString()}";
                    Debug.Log(_debugString);
                    IsConnectedToGooglePlay = true;
                    OnSignedIn?.Invoke();
                    break;
                default:
                    _debugString = $"Failed to log in :(  ; {result.ToString()}";
                    Debug.Log(_debugString);
                    IsConnectedToGooglePlay = false;
                    break;
            }
        });
    }

    public void TrySendScoreToLeaderBoard()
    {
        _debugString = "TrySendScoreToLeaderBoard";

        if (!IsConnectedToGooglePlay) { return; }

        _debugString = "Is Connected To Google Play!";

        if (!GameManager.Instance.AchievementManager.GotHighScore) { return; }

        _debugString = "Got High Score!";

        Social.ReportScore(GameManager.Instance.AchievementManager.HighScore, GPGSIds.leaderboard_fyouasteroids_leaderboard, LeaderboardUpdate);
    }

    private void LeaderboardUpdate(bool success)
    {
        if (success) { _debugString = "Updated Leaderboard!"; Debug.Log(_debugString); }
        else { _debugString = "Unable to update leaderboard :(";  Debug.Log(_debugString); }
    }

    public void ShowLeaderboard()
    {
        Debug.Log("ShowLeaderboard");

        _debugString = "Pressed ShowLeaderboard!";

        if (!IsConnectedToGooglePlay) { LoginToGooglePlay(); return; }

        Social.ShowLeaderboardUI();
    }

    public bool ShowStore()
    {
        Debug.Log("ShowStore");

        _debugString = "Pressed ShowStore!";

        if (!IsConnectedToGooglePlay) { LoginToGooglePlay(); return false; }

        return true;
    }

    void OnGUI()
    {
        GUIStyle StatesLabel = new GUIStyle(GUI.skin.label)
        {
            alignment = TextAnchor.MiddleLeft,
            margin = new RectOffset(),
            padding = new RectOffset(),
            fontSize = 45,
            fontStyle = FontStyle.Bold
        };

        GUI.Label(new Rect(100, 10, 1000, 100), _debugString, StatesLabel);
    }
}
