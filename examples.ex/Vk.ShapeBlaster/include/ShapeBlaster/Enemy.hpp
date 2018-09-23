
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

#include "ShapeBlaster/Entity.hpp"

#include "Dynamic_Static.Graphics.hpp"

namespace ShapeBlaster {

    class Enemy
        : public Entity
    {
    private:
        static constexpr float Damping { 0.8f }; // Pixels / second
        static constexpr float SpawnTime { 1 }; // Seconds
        float mSpawnTimer { 0 };

    public:
        Enemy() = default;
        Enemy(Sprite&& sprite)
            : Entity(std::move(sprite))
        {
        }

    public:
        void spawn(
            const glm::vec2& position,
            dst::RandomNumberGenerator& rng
        ) override
        {
            mSpawnTimer = SpawnTime;
            mColor = dst::Color::Transparent;
            mScale = 0;
            Entity::spawn(position, rng);
        }

        void update(
            const dst::Clock& clock,
            const dst::sys::Input& input,
            const glm::vec2& playAreaExtent,
            dst::RandomNumberGenerator& rng
        ) override
        {
            if (mSpawnTimer > 0) {
                mSpawnTimer -= clock.elapsed<dst::Second<float>>();
                float adjustment = (1.0f - mSpawnTimer / SpawnTime);
                mColor = dst::Color::White * adjustment;
                mScale = adjustment;
            } else {
                mSpawnTimer = 0;
                mVelocity *= Damping;
            }
            Entity::update(clock, input, playAreaExtent, rng);
        }

    protected:
        bool is_spawning() const
        {
            return mSpawnTimer > 0;
        }
    };

} // namespace ShapeBlaster
