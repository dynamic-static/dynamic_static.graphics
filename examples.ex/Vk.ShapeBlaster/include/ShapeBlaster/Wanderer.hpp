
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

#include "glm/gtx/vector_angle.hpp"

#include "ShapeBlaster/Enemy.hpp"

#include "Dynamic_Static.Graphics.hpp"

namespace ShapeBlaster {

    class Wanderer final
        : public Enemy
    {
    private:
        static constexpr float Speed { 25.6f }; // Pixels / second // 64
        static constexpr float RotationSpeed { 4 }; // Rotations / second
        static constexpr float ChangeDirectionTime { 0.1f }; // Seconds
        glm::vec2 mDirectionEx { };
        float mDirection { 0 };
        float mRotationSpeed { RotationSpeed };
        float mChangeDirectionTimer { ChangeDirectionTime };

    public:
        Wanderer() = default;
        Wanderer(Sprite&& sprite)
            : Enemy(std::move(sprite))
        {
        }

    public:
        void on_add(dst::Entity& entity)
        {
            entity.add_component<Enemy>((Enemy*)this);
        }

        void update(
            const dst::Clock& clock,
            const dst::sys::Input& input,
            const glm::vec2& playAreaExtent,
            dst::RandomNumberGenerator& rng
        ) override
        {
            if (!is_spawning()) {
                auto dt = clock.elapsed<dst::Second<float>>();
                mChangeDirectionTimer -= dt;
                if (mChangeDirectionTimer <= 0) {
                    mChangeDirectionTimer = ChangeDirectionTime;

                    auto r = rng.range(-0.1f, 0.1f);

                    auto angle = std::atan2f(mDirectionEx.y, mDirectionEx.x);
                    angle += r;
                    angle = dst::wrap_angle(angle, dst::Radians { });
                    

                    mDirection += r; // rng.range(-0.1f, 0.1f);
                    mDirection = dst::wrap_angle(mDirection, dst::Radians { });

                    mDirectionEx = glm::normalize(glm::vec2 { glm::cos(angle), glm::sin(angle) });

                    int breaker = 0;
                }
                // auto d = glm::normalize(glm::vec2 { glm::cos(mDirection), glm::sin(mDirection) });
                // d *= 0.4f;
                // 
                auto a = dst::polar_to_cartesian(0.4f, mDirection);
                // mVelocity += dst::polar_to_cartesian(0.4f, mDirection) * Speed;
                mVelocity += mDirectionEx * Speed;
                mRotation += mRotationSpeed * dt;
            }
            Enemy::update(clock, input, playAreaExtent, rng);
        }

    // protected:
        void spawn(
            const glm::vec2& position,
            dst::RandomNumberGenerator& rng
        ) override final
        {
            mDirection = rng.range(0.0f, glm::two_pi<float>());
            mDirectionEx = glm::normalize(glm::vec2 { glm::cos(mDirection), glm::sin(mDirection) });
            mRotationSpeed *= rng.probability(0.5f) ? 1 : -1;
            Enemy::spawn(position, rng);
        }

        void out_of_bounds(
            const glm::vec2& playAreaExtent,
            dst::RandomNumberGenerator& rng
        ) override final
        {
            mDirection = std::atan2f(-mPosition.y, -mPosition.x);
            auto twoPi = glm::two_pi<float>();
            mDirection += rng.range(-twoPi, twoPi);
            mDirectionEx = glm::normalize(glm::vec2 { glm::cos(mDirection), glm::sin(mDirection) });
            Enemy::out_of_bounds(playAreaExtent, rng);
        }
    };

} // namespace ShapeBlaster
