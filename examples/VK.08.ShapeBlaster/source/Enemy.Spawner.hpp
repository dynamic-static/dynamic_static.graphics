
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

#include "Enemy.hpp"

#include "Dynamic_Static/Core/Math.hpp"
#include "Dynamic_Static/Core/Time.hpp"

namespace ShapeBlaster {

    class Enemy::Spawner final
    {
    public:
        void update(const dst::Clock& clock)
        {
        }

        void reset()
        {
        }

    private:
        dst::Vector2 spawn_position()
        {

        }
    };

} // namespace ShapeBlaster
