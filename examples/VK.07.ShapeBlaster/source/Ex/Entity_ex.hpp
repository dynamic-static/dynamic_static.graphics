
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

#include "Dynamic_Static/Core/Math.hpp"

namespace ShapeBlaster_ex {

    class Entity
    {
    protected:
        dst::Color mColor { dst::Color::White };
        dst::Vector2 mPosition;
        dst::Vector2 mVelocity;
        float mOrientation { 0 };
        float mRadius { 20 };
        float mScale { 1 };


    };

} // namespace ShapeBlaster_ex
