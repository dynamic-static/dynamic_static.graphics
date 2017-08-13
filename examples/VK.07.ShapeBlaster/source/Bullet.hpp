
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

#include "Entity.hpp"
#include "Resources.hpp"

#include "Dynamic_Static/Core/Math.hpp"

namespace ShapeBlaster {

    class Bullet final
        : public Entity
    {
    private:
        float mSpeed { 96 };

    public:
        Bullet() = default;

        Bullet(Resources& resources, size_t index)
        {
            mSprite = resources.mBulletPackage.mSprite;
            mSprite.uniformBufferIndex = static_cast<uint32_t>(index);
            mColor = dst::Color::Transparent;
            mRadius = 8;
            mExpired = true;
        }
    
    public:
        void spawn(const dst::Vector2& position, const dst::Vector2& direction)
        {
            mPosition = position;
            mVelocity = direction * mSpeed;
            mOrientation = to_angle(mVelocity);
            mColor = dst::Color::White;
            mExpired = false;
        }

        void update(const dst::Input& input, const dst::Clock& clock, const VkExtent2D& playField) override final
        {
            if (mVelocity.x || mVelocity.y) {
                mOrientation = to_angle(mVelocity);
            }

            update_position(clock, playField);
        }

        void shot()
        {
            expire();
        }

    private:
        void bounds_check(const VkExtent2D& playField)
        {
            if (mPosition.x < 0 || playField.width < mPosition.x ||
                mPosition.y < 0 || playField.height < mPosition.y) {
                expire();
            }
        }
    };

} // namespace ShapeBlaster
