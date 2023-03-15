using NUnit.Framework;
using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

namespace Tests
{
    class AsteroidSOsProvider : IEnumerable<Asteroid>
    {
        public IEnumerator<Asteroid> GetEnumerator()
        {
            Asteroid[] asteroids = Resources.LoadAll<Asteroid>("AsteroidSOs");

            //foreach (var guid in AssetDatabase.FindAssets("t:Asteroid", new[] { "Resources/AsteroidSOs" }))
            //{
            //    var path = AssetDatabase.GUIDToAssetPath(guid);
            //    Asteroid root = (Asteroid)AssetDatabase.LoadMainAssetAtPath(path);
            //    yield return root;
            //}

            foreach (var asteroid in asteroids)
            {
                yield return asteroid;
            }
        }

        IEnumerator IEnumerable.GetEnumerator() => ((IEnumerable<Asteroid>)this).GetEnumerator();
    }

    [TestFixture]
    [TestFixtureSource(typeof(AsteroidSOsProvider))]
    public class asteroid_validation_tests
    {
        private readonly Asteroid _asteroidSO;

        public asteroid_validation_tests(Asteroid asteroidSO)
        {
            _asteroidSO = asteroidSO;
        }

        #region Asteroid Prefab Tests

        [Test]
        public void check_asteroid_go_has_asteroidSo_selected()
        {
            AsteroidScript asteroidScript = _asteroidSO.AsteroidPrefab.GetComponent<AsteroidScript>();

            Assert.IsTrue(asteroidScript.AsteroidSo != null, "AsteroidSO in Asteroid Prefab was null");
        }

        [Test]
        public void check_asteroid_go_mobile_has_asteroidSo_selected()
        {
            AsteroidScript asteroidScript = _asteroidSO.AsteroidPrefabMobile.GetComponent<AsteroidScript>();

            Assert.IsTrue(asteroidScript.AsteroidSo != null, "AsteroidSO in Asteroid Mobile Prefab was null");
        }


        [Test]
        public void check_asteroid_go_mobile_has_apropiate_collider_size()
        {
            BoxCollider2D asteroidCollider = _asteroidSO.AsteroidPrefabMobile.GetComponent<BoxCollider2D>();

            Vector2 minimumExpectedSize = new Vector2(1.5f, 1.5f);

            Assert.IsTrue(minimumExpectedSize.x < asteroidCollider.size.x, "Asteroid collider X was too small");
            Assert.IsTrue(minimumExpectedSize.y < asteroidCollider.size.y, "Asteroid collider Y was too small");
        }

        [Test]
        public void check_asteroid_go_mobile_has_apropiate_rb_constraints()
        {
            Rigidbody2D asteroidRb = _asteroidSO.AsteroidPrefabMobile.GetComponent<Rigidbody2D>();

            RigidbodyConstraints2D expectedConstraints = RigidbodyConstraints2D.None;

            Assert.AreEqual(asteroidRb.constraints, expectedConstraints, "Rigidbody constraints don't match");
        }

        [Test]
        public void check_asteroid_go_mobile_has_sprite()
        {
            SpriteRenderer asteroidSprite = _asteroidSO.AsteroidPrefabMobile.GetComponentInChildren<SpriteRenderer>();

            Assert.AreEqual(asteroidSprite.enabled, true, "Asteroid sprite is not enabled / present");
        }

        #endregion

        #region AsteroidSO Tests

        [Test]
        public void check_if_asteroid_prefab_is_not_null()
        {
            Assert.IsTrue(_asteroidSO.AsteroidPrefab != null, "Asteroid PC prefab was null");
        }

        [Test]
        public void check_if_asteroid_mobile_prefab_is_not_null()
        {
            Assert.IsTrue(_asteroidSO.AsteroidPrefabMobile != null, "Asteroid mobile prefab was null");
        }

        [Test]
        public void check_if_asteroid_explosion_prefab_is_not_null()
        {
            Assert.IsTrue(_asteroidSO.ExplosionParticles != null, "Asteroid explosion prefab was null");
        }

        [Test]
        public void check_if_asteroid_angular_velocity_is_not_0()
        {
            Assert.AreNotEqual(_asteroidSO.AngularVel, 0, "Asteroid angular velocity was 0");
        }

        [Test]
        public void check_if_asteroid_speed_is_not_0()
        {
            Assert.AreNotEqual(_asteroidSO.Speed, 0, "Asteroid speed was 0");
        }

        [Test]
        public void check_if_asteroid_score_is_bigger_than_0()
        {
            Assert.IsTrue(_asteroidSO.ScoreGiven > 0, "Asteroid score was less than or equal to 0");
        }

        #endregion
    }
}
