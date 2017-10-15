
/*
==========================================
    Copyright (c) 2017 Dynamic_Static
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

// Based on "Make a Neon Vector Shooter in XNA"
// https://gamedevelopment.tutsplus.com/series/cross-platform-vector-shooter-xna--gamedev-10559

#pragma once

#include "BlackHole_ex.hpp"
#include "Bullet_ex.hpp"
#include "Entity_ex.hpp"
#include "Entity_ex.Manager.hpp"
#include "Player_ex.hpp"
#include "Seeker_ex.hpp"
#include "Wanderer_ex.hpp"

#include "Dynamic_Static/Core/Math.hpp"
#include "Dynamic_Static/Core/Random.hpp"

#include <utility>
#include <vector>

namespace ShapeBlaster_ex {

    class Entity::Spawner final
    {
    private:
        static constexpr float EnemySpawnProbabilityMax { 0 };
        static constexpr float EnemySpawnProbabilityDefault { 0.1f };
        static constexpr float EnemySpawnProbabilityIncreaseRate { 0 };
        static constexpr float BlackHoleSpawnProbabilityMax { 0 };
        static constexpr float BlackHoleSpawnProbabilityDefault { 0.1f };
        static constexpr float BlackHolespawnProbabilityIncreaseRate { 0 };

        float mEnemySpawnProbability { EnemySpawnProbabilityDefault };
        float mBlackHoleSpawnProbability { BlackHoleSpawnProbabilityDefault };
        std::vector<std::pair<dst::Vector2, dst::Vector2>> mBulletSpawns;
        Player* mPlayer { nullptr };

    public:
        void update(
            const dst::Clock& clock,
            const dst::Vector2& playArea,
            Entity::Manager<Player, Bullet, Seeker, Wanderer, BlackHole>& entityManager
        )
        {
            if (!mPlayer) {
                mPlayer = entityManager.spawn<Player>(playArea * 0.5f);
                assert(mPlayer);
                mPlayer->on_bullet_fired =
                [&](const dst::Vector2& position, const dst::Vector2& direction)
                {
                    mBulletSpawns.push_back(std::make_pair(position, direction));
                };
            }

            for (const auto& bulletSpawn : mBulletSpawns) {
                entityManager.spawn<Bullet>(bulletSpawn.first, bulletSpawn.second);
            }

            mBulletSpawns.clear();

            if (dst::Random.probability(mEnemySpawnProbability)) {
                entityManager.spawn<Seeker>(spawn_position(playArea), *mPlayer);
            }

            if (dst::Random.probability(mEnemySpawnProbability)) {
                entityManager.spawn<Wanderer>(spawn_position(playArea));
            }

            if (dst::Random.probability(mBlackHoleSpawnProbability)) {
                entityManager.spawn<BlackHole>(spawn_position(playArea));
            }

            if (mEnemySpawnProbability < EnemySpawnProbabilityMax) {
                mEnemySpawnProbability += EnemySpawnProbabilityIncreaseRate;
            }

            if (mBlackHoleSpawnProbability < BlackHoleSpawnProbabilityMax) {
                mBlackHoleSpawnProbability += BlackHolespawnProbabilityIncreaseRate;
            }
        }

        void reset()
        {
            mEnemySpawnProbability = EnemySpawnProbabilityDefault;
            mBlackHoleSpawnProbability = BlackHoleSpawnProbabilityDefault;
        }

    private:
        dst::Vector2 spawn_position(const dst::Vector2& playArea)
        {
            return dst::Vector2(
                dst::Random.range(0.0f, playArea.x),
                dst::Random.range(0.0f, playArea.y)
            );
        }
    };

} // namespace ShapeBlaster_ex
