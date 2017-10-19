
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

#include "Bullet_ex.hpp"
#include "Entity_ex.hpp"

namespace ShapeBlaster_ex {

    class BlackHole final
        : public Entity
    {
    public:
        BlackHole(Sprite* sprite)
            : Entity(sprite)
        {
            assert(sprite);
            mRadius = sprite->image->extent().width * 0.5f;
        }

    public:
        void spawn(const dst::Vector2& position)
        {
            mPosition = position;
        }

        void on_collision(const Entity& other, size_t typeId)
        {
            if (typeId == type_id<Bullet>()) {
                mEnabled = false;
            }
        }
    };

} // namespace ShapeBlaster_ex
