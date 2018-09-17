
/*
==========================================
  Copyright (c) 2017-2018 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "Entity.hpp"
#include "Entity.Manager.hpp"

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
        virtual void on_update(
            const dst::Clock& clock,
            const dst::sys::Input& input,
            dst::RandomNumberGenerator& rng,
            const glm::vec2& playAreaExtent
        )
        {
            sp();
        }

        inline void on_out_of_bounds(const glm::vec2& playAreaExtent)
        {
            kill();
        }
    };

} // namespace ShapeBlaster
