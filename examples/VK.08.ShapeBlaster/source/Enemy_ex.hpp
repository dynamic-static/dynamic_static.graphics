
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

    class Enemy
        : public Entity
    {
    private:
        static constexpr float Damping { 0.8f };

    public:
        Enemy(Sprite* sprite)
            : Entity(sprite)
        {
            assert(sprite);
            mRadius = sprite->image->extent().width * 0.5f;
        }

    public:
        void on_update(
            const dst::Clock& clock,
            const dst::sys::Input& input,
            const dst::Vector2& playArea
        ) override
        {
            mVelocity *= Damping;
        }

        void on_collision(const Entity& other, size_t typeId)
        {
            auto t = type_id<Bullet>();
            if (typeId == type_id<Bullet>()) {
                mEnabled = false;
            }
        }
    };

} // namespace ShapeBlaster_ex
