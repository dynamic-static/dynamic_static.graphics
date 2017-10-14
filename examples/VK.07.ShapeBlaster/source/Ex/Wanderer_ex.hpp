
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

#include "Enemy_ex.hpp"

namespace ShapeBlaster_ex {

    class Wanderer final
        : public Enemy
    {
    public:
        Wanderer(Sprite* sprite)
            : Enemy(sprite)
        {
        }
    };

} // namespace ShapeBlaster_ex
