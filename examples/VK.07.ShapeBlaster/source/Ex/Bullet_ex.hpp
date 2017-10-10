
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
#include "Sprite_ex.Manager.hpp"

namespace ShapeBlaster_ex {

    class Bullet final
        : public Entity
    {
    public:
        Bullet() = default;
        Bullet(
            Sprite::Manager& spriteManager,
            const dst::Vector2& position,
            const dst::Vector2& velocity
        )
        {
            mSprite = spriteManager.check_out("Bullet.png");
            mSprite->position = position;
            mVelocity = velocity;
            mRadius = 8;
        }

    public:
        void update(
            const dst::Clock& clock,
            const dst::Input& input,
            const dst::Vector2& playField
        ) override final
        {
            if (mVelocity != dst::Vector2::Zero) {
                mSprite->rotation = mVelocity.to_angle();
            }

            mSprite->position += mVelocity * clock.elapsed<dst::Second<>>();
            if (mSprite->position.x < 0 || playField.x < mSprite->position.x ||
                mSprite->position.y < 0 || playField.y < mSprite->position.y) {
                mAlive = false;
            }
        }
    };

} // namespace ShapeBlaster_ex
