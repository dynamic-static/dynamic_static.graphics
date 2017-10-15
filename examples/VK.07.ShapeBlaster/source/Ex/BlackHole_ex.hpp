
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

namespace ShapeBlaster_ex {

    class BlackHole final
        : public Entity
    {
    public:
        BlackHole(Sprite* sprite)
            : Entity(sprite)
        {
        }

    public:
        void spawn(const dst::Vector2& position)
        {
            mPosition = position;
        }

        void on_collision(const Entity& other, size_t typeId)
        {
        }
    };

} // namespace ShapeBlaster_ex
