
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
#include "Entity_ex.Pool.hpp"
#include "Sprite_ex.Manager.hpp"

namespace ShapeBlaster_ex {

    class Bullet final
        : public Entity
    {
    private:
        static constexpr float Speed { 660 }; // Pixels / second
        static constexpr float Radius { 8 }; // Pixels

    public:
        class Manager;

    public:
        Bullet() = default;
        Bullet(Sprite* sprite)
            : Entity(sprite)
        {
            mRadius = Radius;
        }

    public:
        void spawn(const dst::Vector2& position, const dst::Vector2& direction)
        {
            mPosition = position;
            if (direction != dst::Vector2::Zero) {
                mVelocity = direction.normalized() * Speed;
            }
        }

        void on_update(
            const dst::Clock& clock,
            const dst::Input& input,
            const dst::Vector2& playField
        ) override final
        {
            if (mVelocity != dst::Vector2::Zero) {
                mRotation = mVelocity.to_angle();
            }
        }

        void on_out_of_bounds(const dst::Vector2& playField) override final
        {
            kill();
        }
    };

} // namespace ShapeBlaster_ex
