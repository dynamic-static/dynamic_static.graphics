
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

namespace ShapeBlaster {

    class Seeker final
        : public Enemy
    {
    public:
        static constexpr float Acceleration { 54 }; // Pixels / second
        Player* mPlayer { nullptr };

    public:
        Seeker() = default;
        Seeker(Sprite&& sprite)
            : Enemy(std::move(sprite))
        {
        }

    public:
        void on_add(dst::Entity& entity)
        {
            entity.add_component<Enemy>((Enemy*)this);
        }

        void spawn(
            const glm::vec2& position,
            dst::RandomNumberGenerator& rng
        ) override final
        {
        }

        void update(
            const dst::Clock& clock,
            const dst::sys::Input& input,
            const glm::vec2& playAreaExtent,
            dst::RandomNumberGenerator& rng
        ) override
        {
            if (mPlayer) {
                auto direction = mPlayer->get_position() - mPosition;
                if (direction != glm::vec2 { }) {
                    direction = glm::normalize(direction);
                    mRotation = std::atan2(direction.y, direction.x);
                }
            }
            Enemy::update(clock, input, playAreaExtent, rng);
        }
    };

} // namespace ShapeBlaster
