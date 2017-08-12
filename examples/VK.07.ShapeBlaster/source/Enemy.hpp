
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

#include "Entity.hpp"
#include "PlayerShip.hpp"

#include "Dynamic_Static/Core/Random.hpp"

namespace ShapeBlaster {

    class Enemy
        : public Entity
    {
    private:
        static constexpr float SpawnTime { 1 };

    private:
        float mSpawnTimer { 1 };
        bool mAcitve { false };

    protected:
        const PlayerShip* mPlayer { nullptr };

    public:
        void spawn(const dst::Clock& clock, const dst::Vector2& spawnPosition, const PlayerShip& player)
        {
            mPlayer = &player;
            mPosition = spawnPosition;
            mColor = dst::Color::Transparent;
            on_spawn(clock, player);
            mExpired = false;
        }

        void update(const dst::Input& input, const dst::Clock& clock, const VkExtent2D& playField) override
        {
            if (mSpawnTimer <= 0) {
                if (!mExpired) {
                    apply_behavior(clock, playField);
                }
            } else {
                mSpawnTimer -= clock.elapsed<dst::Second<float>>();
                mColor = dst::Color::White * (1 - mSpawnTimer);
            }

            update_position(clock, playField);
            mVelocity *= 0.8f;
        }

        void was_shot()
        {
            mExpired = true;
        }

    protected:
        virtual void on_spawn(const dst::Clock& clock, const PlayerShip& player)
        {
        }

        virtual void apply_behavior(const dst::Clock& clock, const VkExtent2D& playField) = 0;
    };

} // ShapeBlaster
