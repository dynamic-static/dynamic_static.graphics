
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

#include "Entity_ex.hpp"

namespace ShapeBlaster_ex {

    class Bullet final
        : public Entity
    {
    private:
        static constexpr float Speed { 660 }; // Pixels / second
        static constexpr float Radius { 8 }; // Pixels

    public:
        Bullet(Sprite* sprite)
            : Entity(sprite)
        {
            mRadius = Radius;
        }

    public:
        void spawn(const glm::vec2& position, const glm::vec2& direction)
        {
            mPosition = position;
            if (direction != glm::vec2 { }) {
                mVelocity = glm::normalize(direction) * Speed;
            }
        }

        void on_update(
            const dst::Clock& clock,
            const dst::sys::Input& input,
            const glm::vec2& playField
        ) override final
        {
            if (mVelocity != glm::vec2 { }) {
                mRotation = std::atan2(mVelocity.y, mVelocity.x);
            }
        }

        void on_collision(const Entity& other, size_t typeId)
        {
            if (/*typeId != type_id<Player>() &&*/
                typeId != type_id<Bullet>()) {
                mEnabled = false;
            }
        }

        void on_out_of_bounds(const glm::vec2& playField) override final
        {
            kill();
        }
    };

} // namespace ShapeBlaster_ex
