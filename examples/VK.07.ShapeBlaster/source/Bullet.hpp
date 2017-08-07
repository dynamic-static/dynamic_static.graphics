
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

#include "Dynamic_Static/Core/Math.hpp"

namespace ShapeBlaster {

    // class Bullet final
    //     : public Entity
    // {
    // public:
    //     Bullet(const dst::Vector2& position, const dst::Vector2& velocity)
    //     {
    //         mPosition = position;
    //         mVelocity = velocity;
    //         mOrientation = to_angle(mVelocity);
    //         mRadius = 8;
    //     }
    // 
    // public:
    //     void update() override final
    //     {
    //         if (mVelocity.x || mVelocity.y) {
    //             mOrientation = to_angle(mVelocity);
    //         }
    // 
    //         mPosition += mVelocity;
    // 
    //         // TODO : If out of bounds...
    //         if (false) {
    //             mExpired = true;
    //         }
    //     }
    // };

} // namespace ShapeBlaster
