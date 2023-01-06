using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.Playables;

public class AchievementUI : MonoBehaviour
{
    #region Editor Fields

    [SerializeField] private PlayableDirector _timeLine;
    [SerializeField] private TextMeshProUGUI _nameText;
    [SerializeField] private TextMeshProUGUI _descriptionText;

    #endregion

    #region Private Variables

    private Queue<IEnumerator> _achievementCoroutines = new Queue<IEnumerator>();
    [SerializeField] private List<string> _achievementNames = new List<string>();
    [SerializeField] private bool _isPlaying = false;
    private float _timeSinceLastPlayedTimeline;

    #endregion

    #region Public Properties

    public static AchievementUI Instance { get; private set; }

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

    private void Update()
    {
        _timeSinceLastPlayedTimeline += Time.deltaTime;
    }

    private void LateUpdate()
    {
        if(_achievementCoroutines.Count < 1) { return; }

        if (_isPlaying) { return; }

        if(_timeLine.state == PlayState.Playing) { return; }


        Debug.Log("Remove From Queue: " + _achievementNames[_achievementNames.Count - 1]);

        _achievementNames.Remove(_achievementNames[_achievementNames.Count - 1]);

        StartCoroutine(_achievementCoroutines.Dequeue());
    }

    #endregion

    public void AddAchievementToQueue(Achievement achievement)
    {
        _achievementCoroutines.Enqueue(ShowNewAchievement(achievement));
        _achievementNames.Add(achievement.Name);
    }

    public IEnumerator ShowNewAchievement(Achievement achievement)
    {
        _isPlaying = true;

        Debug.Log("Start Coroutine: " + achievement.Name);
        string descriptionText = achievement.Description;

        //if (descriptionText.Contains("#")){ descriptionText = descriptionText.Replace("#", achievement.StepCount.ToString()); }

        _nameText.text = achievement.Name;
        _descriptionText.text = descriptionText;

        _timeLine.Play();

        yield return new WaitForSeconds(3f);

        Debug.Log("End Coroutine: " + achievement.Name);

        _isPlaying = false;
    }
}
