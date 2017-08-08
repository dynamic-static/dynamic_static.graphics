
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
    public:
        Bullet(Resources& resources, const dst::Vector2& position, const dst::Vector2& velocity, size_t index)
        {
            mSprite.uniformBufferIndex = static_cast<uint32_t>(index);
            mPosition = position;
            mVelocity = velocity;
            mOrientation = to_angle(mVelocity);
            mRadius = 8;
        }
    
    public:
        void update(const dst::Input& input, const dst::Clock& clock, VkExtent2D playField) override final
        {
            if (mVelocity.x || mVelocity.y) {
                mOrientation = to_angle(mVelocity);
            }

            // mPosition += mVelocity;

            // TODO : If out of bounds...
            if (false) {
                mExpired = true;
            }
        }
    };

} // namespace ShapeBlaster
