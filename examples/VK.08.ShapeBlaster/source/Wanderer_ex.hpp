
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

#include "Enemy_ex.hpp"

#include "Dynamic_Static/Core/Math.hpp"
#include "Dynamic_Static/Core/Random.hpp"

namespace ShapeBlaster_ex {

    class Wanderer final
        : public Enemy
    {
    private:
        static constexpr float RotationSpeed { 4 };

        float mDirection { 0 };
        float mRotationSpeed { RotationSpeed };

    public:
        Wanderer(Sprite* sprite)
            : Enemy(sprite)
        {
        }

    public:
        void spawn(const glm::vec2& position)
        {
            mPosition = position;
            if (dst::Random.probability(0.5f)) {
                mRotationSpeed *= -1;
            }
        }

        void on_update(
            const dst::Clock& clock,
            const dst::sys::Input& input,
            const glm::vec2& playArea
        ) override final
        {
            auto dt = clock.elapsed<dst::Second<float>>();
            // float direction = dst::Random.range<float>(0, M_PI * 2);
            mRotation += mRotationSpeed * dt;
        }

        void on_out_of_bounds(const glm::vec2& playArea) override final
        {
            auto towardsCenter = playArea * 0.5f - mPosition;
            mDirection = std::atan2(towardsCenter.y, towardsCenter.x);
            mDirection += static_cast<float>(dst::Random.range(-M_PI_2, M_PI_2));
        }
    };

} // namespace ShapeBlaster_ex
