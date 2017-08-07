
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

#include "Cursor.hpp"
#include "Entity.hpp"
#include "Resources.hpp"

#include "Dynamic_Static/Core/Algorithm.hpp"
#include "Dynamic_Static/Core/Input.hpp"
#include "Dynamic_Static/Core/Math.hpp"
#include "Dynamic_Static/Core/Time.hpp"

namespace ShapeBlaster {

    class PlayerShip final
        : public Entity
    {
    private:
        float mSpeed { 720 };
        dst::Vector2 mAimDirection;
        Cursor* mCursor { nullptr };

    public:
        PlayerShip(Resources& resources, Cursor& cursor, const dst::Vector2& position)
            : mCursor { &cursor }
        {
            mSprite = resources.playerSprite;
            mPosition = position;
        }

    public:
        void update(const dst::Input& input, const dst::Clock& clock, VkExtent2D playField) override final
        {
            mVelocity = dst::Vector3::Zero;
            if (input.keyboard().down(dst::Keyboard::Key::W)) {
                ++mVelocity.y;
            }

            if (input.keyboard().down(dst::Keyboard::Key::S)) {
                --mVelocity.y;
            }

            if (input.keyboard().down(dst::Keyboard::Key::A)) {
                --mVelocity.x;
            }

            if (input.keyboard().down(dst::Keyboard::Key::D)) {
                ++mVelocity.x;
            }

            if (mVelocity.x || mVelocity.y) {
                mVelocity.normalize();
                mOrientation = to_angle(mVelocity);
            }

            mVelocity *= mSpeed * clock.elapsed<dst::Second<float>>();
            mPosition += mVelocity;
            mPosition.x = dst::clamp(mPosition.x, 0.0f, static_cast<float>(playField.width));
            mPosition.y = dst::clamp(mPosition.y, 0.0f, static_cast<float>(playField.height));
        }
    };

} // namespace ShapeBlaster
