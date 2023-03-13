using NUnit.Framework;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEditor;
using UnityEditor.SceneManagement;
using UnityEngine;
using UnityEngine.SceneManagement;

namespace Tests
{
    public class GameplayScenesProvider : IEnumerable<string>
    {
        IEnumerator<string> IEnumerable<string>.GetEnumerator()
        {
            foreach (var scene in EditorBuildSettings.scenes)
            {
                if(!scene.enabled || scene.path == null || !Path.GetFileName(scene.path).StartsWith("Level"))
                    continue;

                yield return scene.path;
            }
        }

        public IEnumerator GetEnumerator() => ((IEnumerable<string>)this).GetEnumerator();
    }

    [TestFixture]
    [TestFixtureSource(typeof(GameplayScenesProvider))]
    public class scene_validation_tests
    {
        private readonly string _scenePath;
        private Scene _scene;

        public scene_validation_tests(string scenePath)
        {
            _scenePath = scenePath;
        }

        [OneTimeSetUp]
        public void LoadScene()
        {
            _scene = SceneManager.GetSceneAt(0);

            if (SceneManager.sceneCount > 1 || _scene.path != _scenePath)
                _scene = EditorSceneManager.OpenScene(_scenePath, OpenSceneMode.Single);
        }

        [Test]
        public void check_if_has_start_position()
        {
            Assert.That(Object.FindObjectOfType<Player>(), "There is no player in the scene or it's not enabled");
        }


        [Test]
        public void check_if_in_correct_start_position()
        {
            Assert.IsTrue(Object.FindObjectOfType<Player>().transform.position == Vector3.zero, "Player is not in position 0");
        }

        [Test]
        public void check_if_scene_contains_gpgs_obj()
        {
            Assert.IsTrue(Object.FindObjectOfType<GPGSAuthentication>() != null, "Did not find a GPGSAuthentication script in scene");
        }

        [Test]
        public void check_if_scene_contains_level_ui()
        {
            Assert.IsTrue(Object.FindObjectOfType<LevelUI>(true) != null, "Did not find a LevelUI script in scene");
        }

        [Test]
        public void check_if_scene_contains_gameOver_ui()
        {
            Assert.IsTrue(Object.FindObjectOfType<GameOverUI>(true) != null, "Did not find a GameOverUI script in scene");
        }

        [Test]
        public void check_if_scene_contains_playerStats_ui()
        {
            Assert.IsTrue(Object.FindObjectOfType<PlayerStatsUI>(true) != null, "Did not find a PlayerStatsUI script in scene");
        }

        [Test]
        public void check_if_scene_contains_booster_particles()
        {
            Assert.IsTrue(GameObject.FindWithTag("BoosterParticles") != null, "Did not find a BoosterParticles object in scene");
        }

        [Test]
        public void check_if_scene_contains_shipPartsSelector_obj()
        {
            ShipPartSelector[] shipPartSelectors = Object.FindObjectsOfType<ShipPartSelector>();

            bool foundShipPartSelectorCamera = false;

            foreach (ShipPartSelector partSelector in shipPartSelectors)
            {
                foundShipPartSelectorCamera = partSelector.transform.Find("ShipViewCamera") != null;
            }

            Assert.IsTrue(foundShipPartSelectorCamera, "Did not find a GPGSAuthentication script in scene");
        }
    }
}
