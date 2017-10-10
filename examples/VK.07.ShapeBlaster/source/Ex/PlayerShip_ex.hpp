
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

#include "Dynamic_Static/Core/Algorithm.hpp"

namespace ShapeBlaster_ex {

    class PlayerShip final
        : public Entity
    {
    private:
        static constexpr float Speed { 8.0f * 60.0f };

    public:
        PlayerShip() = default;
        PlayerShip(Sprite::Manager& spriteManager)
        {
            mSprite = spriteManager.check_out("Player.png");
            mSprite->position = dst::Vector2::Zero;
            mRadius = 10;
        }

    public:
        void update(
            const dst::Clock& clock,
            const dst::Input& input,
            const dst::Vector2& playField
        ) override final
        {
            if (mSprite) {
                auto moveDirection = dst::Vector2::Zero;
                if (input.keyboard().down(dst::Keyboard::Key::W)) {
                    ++moveDirection.y;
                }

                if (input.keyboard().down(dst::Keyboard::Key::S)) {
                    --moveDirection.y;
                }

                if (input.keyboard().down(dst::Keyboard::Key::A)) {
                    --moveDirection.x;
                }

                if (input.keyboard().down(dst::Keyboard::Key::D)) {
                    ++moveDirection.x;
                }

                if (moveDirection != dst::Vector2::Zero) {
                    moveDirection.normalize();
                    mSprite->rotation = moveDirection.to_angle();
                }

                mVelocity = moveDirection * Speed * clock.elapsed<dst::Second<>>();
                mSprite->position += mVelocity;
                mSprite->position.x = dst::clamp(mSprite->position.x, 0.0f, playField.x);
                mSprite->position.y = dst::clamp(mSprite->position.y, 0.0f, playField.y);
            }
        }
    };

} // namespace ShapeBlaster_ex
