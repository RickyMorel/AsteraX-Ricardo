using NUnit.Framework;
using Tests.Factories;

namespace Tests
{
    public class game_manager_tests
    {
        
        [Test]
        [TestCase(3, 2, false, GameState.Playing)]
        [TestCase(0, 0, false, GameState.Playing)]
        [TestCase(3, 3, true, GameState.Playing)]
        [TestCase(3, 3, false, GameState.Paused)]
        [TestCase(1, 1, false, GameState.Over)]
        [TestCase(0, 0, false, GameState.Respawning)]
        [TestCase(2, 2, false, GameState.Starting)]
        public void check_if_reduced_jumps(int startingJumps, int expectedJumps, bool IsInvunerable, GameState gameState)
        {
            var gameManager = GameManagerFactory.AGameManager.WithJumps(startingJumps).WithIsInvunerable(IsInvunerable).WithGameState(gameState).Build();

            gameManager.ReduceJumps();

            Assert.AreEqual(expectedJumps, gameManager.Jumps, $"Jumps did not reduce. Expected: {expectedJumps} ; Recieved: {gameManager.Jumps}");
        }

        [Test]
        [TestCase(1, 2)]
        [TestCase(5, 6)]
        [TestCase(59, 60)]
        public void check_if_raised_level_by_1(int startingLevel, int expectedLevel)
        {
            var gameManager = GameManagerFactory.AGameManager.WithLevel(startingLevel).Build();

            gameManager.RaiseLevel();

            Assert.AreEqual(expectedLevel, gameManager.Level, $"Levels did not raise as expected. Expected: {expectedLevel} ; Recieved: {gameManager.Level}");
        }

        [Test]
        [TestCase(0, 100, 100, GameState.Playing)]
        [TestCase(0, 100, 0, GameState.Paused)]
        [TestCase(0, 100, 0, GameState.Over)]
        [TestCase(0, 200, 0, GameState.Respawning)]
        public void check_if_added_score_only_in_play_state(int startingScore, int scoreAdded, int expectedScore, GameState gameState)
        {
            var gameManager = GameManagerFactory.AGameManager.WithScore(startingScore).WithGameState(gameState).Build();

            gameManager.AddScore(scoreAdded);

            Assert.AreEqual(expectedScore, gameManager.Score, $"Score added in incorrect state. Expected: {expectedScore} ; Recieved: {gameManager.Score} ");
        }

        [Test]
        public void check_if_get_level_data_list_populates()
        {
            var gameManager = GameManagerFactory.AGameManager.Build();

            Assert.Greater(gameManager.LevelDataList.Count, 0, "LevelDataList did not populate");
        }

        [Test]
        [TestCase(1)]
        [TestCase(6)]
        [TestCase(10)]
        [TestCase(60)]
        public void check_if_get_level_data_returns_not_null(int level)
        {
            var gameManager = GameManagerFactory.AGameManager.WithLevel(level).Build();

            Assert.IsTrue(gameManager.GetCurrentLevelData() != null, "LevelDataList did not populate");
        }

        [Test]
        [TestCase(1)]
        [TestCase(6)]
        [TestCase(10)]
        [TestCase(60)]
        public void check_if_get_level_data_level_is_greater_than_0(int level)
        {
            var gameManager = GameManagerFactory.AGameManager.WithLevel(level).Build();

            Assert.IsTrue(gameManager.GetCurrentLevelData().Level > 0, "LevelDataList level is less than 0");
        }

        [Test]
        [TestCase(1)]
        [TestCase(6)]
        [TestCase(10)]
        [TestCase(60)]
        public void check_if_get_level_data_asteroids_is_greater_than_0(int level)
        {
            var gameManager = GameManagerFactory.AGameManager.WithLevel(level).Build();

            Assert.IsTrue(gameManager.GetCurrentLevelData().Asteroids > 0, "LevelDataList asteroids is less than 0");
        }

        [Test]
        [TestCase(1)]
        [TestCase(6)]
        [TestCase(10)]
        [TestCase(60)]
        public void check_if_get_level_data_children_is_greater_than_0(int level)
        {
            var gameManager = GameManagerFactory.AGameManager.WithLevel(level).Build();

            Assert.IsTrue(gameManager.GetCurrentLevelData().Children > 0, "LevelDataList children is less than 0");
        }
    }
}
