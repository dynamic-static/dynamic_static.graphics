
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

#include "Enemy.hpp"
#include "Resources.hpp"

#include "Dynamic_Static/Core/Random.hpp"

namespace ShapeBlaster {

    class Wanderer final
        : public Enemy
    {
    private:
        static constexpr float Speed { 64 };
        static constexpr float RotationSpeed { 4 };
        static constexpr float CalculateDirectionTime { 0.1f };

    private:
        float mDirection { 0 };
        float mRotationSpeed { RotationSpeed };
        float mCalclulateDirectionTimer { CalculateDirectionTime };

    public:
        Wanderer() = default;

        Wanderer(Resources& resources, size_t index)
        {
            mSprite = resources.mWandererPackage.mSprite;
            mSprite.uniformBufferIndex = index;
            mColor = dst::Color::Transparent;
            mRadius = mSprite.image->extent().width * 0.5f;
            mExpired = true;

            // TODO : Fix probability...
            if (dst::Random.die_roll(2) == 1) {
                mRotationSpeed *= -1;
            }
        }

    protected:
        void on_spawn(const dst::Clock& clock, const PlayerShip& player) override final
        {
            mCalclulateDirectionTimer = CalculateDirectionTime;
        }

        void apply_behavior(const dst::Clock& clock, const VkExtent2D& playField) override final
        {
            auto dt = clock.elapsed<dst::Second<float>>();
            mCalclulateDirectionTimer -= dt;
            if (mCalclulateDirectionTimer <= 0) {
                mCalclulateDirectionTimer = CalculateDirectionTime;
                mDirection += dst::Random.range<float>(-0.1f, 0.1f);
                mDirection = wrap_radians(mDirection);
            }

            mVelocity += from_polar(mDirection, 0.4f) * Speed;
            mOrientation += mRotationSpeed * dt;

            dst::Vector2 avoidWallDirection;
            uint32_t w = mSprite.image->extent().width;
            if (mPosition.x < w) {
                ++avoidWallDirection.x;
            } else
            if (mPosition.x > playField.width - w) {
                --avoidWallDirection.x;
            }

            uint32_t h = mSprite.image->extent().height;
            if (mPosition.y < h) {
                ++avoidWallDirection.y;
            } else
            if (mPosition.y > playField.height - h) {
                --avoidWallDirection.y;
            }

            if (avoidWallDirection.x || avoidWallDirection.y) {
                avoidWallDirection.normalize();
                mDirection = to_angle(avoidWallDirection) + dst::Random.range<float>(-M_PI_2, M_PI_2);
            }
        }
    };

} // namespace ShapeBlaster
