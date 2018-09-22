
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
#include "ShapeBlaster/Entity.Manager.hpp"

#include "Dynamic_Static.Graphics.hpp"

namespace ShapeBlaster {

    class Bullet final
        : public Entity
    {
    private:
        static constexpr float Speed { 660 }; // Pixels / second
        static constexpr float Radius { 8 }; // Pixels

    public:
        Bullet() = default;
        Bullet(Sprite&& sprite)
            : Entity(std::move(sprite))
        {
            mRadius = Radius;
        }

        inline Bullet(Bullet&& other)
        {
            *this = std::move(other);
        }

        inline Bullet& operator=(Bullet&& other)
        {
            Entity::operator=(std::move(other));
            return *this;
        }

    public:
        inline void spawn(
            glm::vec2 position,
            glm::vec2 direction
        )
        {
            mPosition = position;
            if (direction != glm::vec2 { }) {
                mVelocity = glm::normalize(direction) * Speed;
                mRotation = std::atan2(direction.y, direction.x);
            }
        }

    private:
        inline void on_out_of_bounds(const glm::vec2& playAreaExtent)
        {
            kill();
        }
    };

} // namespace ShapeBlaster
