using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using GooglePlayGames.BasicApi;
using UnityEngine.SocialPlatforms;
using GooglePlayGames;

public class GPGSAuthentication : MonoBehaviour
{
    public static PlayGamesPlatform Platform;

    private void Start()
    {
        if (Platform == null)
        {

            PlayGamesClientConfiguration config = new PlayGamesClientConfiguration.Builder().Build();
            PlayGamesPlatform.InitializeInstance(config);
            PlayGamesPlatform.DebugLogEnabled = true;

            Platform = PlayGamesPlatform.Activate();
        }

        Social.Active.localUser.Authenticate(success =>
        {
            if (success) { Debug.Log("Logged in Succesfully"); }
            else { Debug.Log("Failed to log in :("); }
        });
    }
}
