
/*
==========================================
  Copyright (c) 2017-2018 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

// NOTE : Based on "Cross-Platform Vector Shooter: XNA" by Michael Hoffman...
//  https://gamedevelopment.tutsplus.com/series/cross-platform-vector-shooter-xna--gamedev-10559

#pragma once

#include "ShapeBlaster/Enemy.hpp"

#include "Dynamic_Static.Graphics.hpp"

namespace ShapeBlaster {

    class Wanderer
        : public Enemy
    {
    private:
        static constexpr float RotationSpeed { 4 };
        float mDirection { 0 };
        float mRotationSpeed { RotationSpeed };

    public:
        Wanderer() = default;
        Wanderer(Sprite&& sprite)
            : Enemy(std::move(sprite))
        {
        }

    public:
        void update(
            const dst::Clock& clock,
            const dst::sys::Input& input,
            const glm::vec2& playAreaExtent,
            dst::RandomNumberGenerator& rng
        ) override
        {
            if (!is_spawning()) {
                mRotation += mRotationSpeed * clock.elapsed<dst::Second<float>>();
            }
            Enemy::update(clock, input, playAreaExtent, rng);
        }

    // protected:
        void spawn(
            const glm::vec2& position,
            dst::RandomNumberGenerator& rng
        ) override final
        {
            mRotationSpeed *= rng.probability(0.5f) ? 1 : -1;
            Enemy::spawn(position, rng);
        }

        void out_of_bounds(
            const glm::vec2& playAreaExtent,
            dst::RandomNumberGenerator& rng
        ) override final
        {
            mDirection = std::atan2f(-mPosition.x, -mPosition.y);
            auto twoPi = glm::two_pi<float>();
            mDirection += (float)rng.range(-twoPi, twoPi);
        }
    };

} // namespace ShapeBlaster
