using NUnit.Framework;
using Tests.Factories;

namespace Tests
{
    public class game_manager_tests
    {
        
        [Test]
        [TestCase(3, 2)]
        [TestCase(0, 0)]
        public void check_if_reduced_jumps(int startingJumps, int expectedJumps)
        {
            var gameManager = GameManagerFactory.AGameManager.WithJumps(startingJumps).Build();

            gameManager.ReduceJumps();

            Assert.AreEqual(expectedJumps, gameManager.Jumps);
        }
    }
}
