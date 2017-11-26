
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
#include "Enemy.hpp"
#include "Bullet.hpp"
#include "PlayerShip.hpp"
#include "Resources.hpp"

namespace ShapeBlaster {

    class BlackHole final
        : public Entity
    {
    private:
        int32_t mHitPoints { 10 };

    public:
        std::vector<Enemy*>* mEnemies { nullptr };
        std::vector<Bullet>* mBullets { nullptr };
        PlayerShip* mPlayerShip { nullptr };

    public:
        BlackHole() = default;

        BlackHole(Resources& resources, size_t index)
        {
            mSprite = resources.mBlackHolePackage.mSprite;
            mSprite.uniformBufferIndex = index;
            mColor = dst::Color::Transparent;
            mRadius = mSprite.image->extent().width * 0.5f;
            enabled(false);
        }

    public:
        void spawn(const dst::Clock& clock, const dst::Vector2& spawnPosition)
        {
            mPosition = spawnPosition;
            mColor = dst::Color::White;
            mHitPoints = 10;
            enabled(true);
        }

        void update(const dst::sys::Input& input, const dst::Clock& clock, const VkExtent2D& playField)
        {            
            auto scale_to =
            [&](const dst::Vector2& v, float length)
            {
                return v * (length / v.length());
            };
            
            for (auto& bullet : *mBullets) {
                bullet.mVelocity += scale_to((bullet.position() - mPosition), 10.0f);
            }
            
            for (auto& enemy : *mEnemies) {
                if (enemy->enabled()) {
                    auto dPos = mPosition - enemy->position();
                    auto length = dPos.length();
                    enemy->mVelocity += scale_to(dPos, dst::lerp(2.0f, 0.0f, length / 250.0f));
                }
            }
            
            if (mPlayerShip->enabled()) {
                auto dPos = mPosition - mPlayerShip->position();
                auto length = dPos.length();
                mPlayerShip->mVelocity += scale_to(dPos, dst::lerp(2.0f, 0.0f, length / 250.0f));
            }
            
            mScale = 1 + 0.1f * std::sin(10.0f * clock.total<dst::Second<float>>());
        }

        void was_shot()
        {
            --mHitPoints;
            if (mHitPoints <= 0) {
                mColor = dst::Color::Transparent;
                enabled(false);
            }

            // Sound.Explosion.Play(0.5f, random(-0.2f, 0.2f), 0);
        }

        void kill()
        {
            mHitPoints = 0;
            was_shot();
        }
    };

} // namespace ShapeBlaster
