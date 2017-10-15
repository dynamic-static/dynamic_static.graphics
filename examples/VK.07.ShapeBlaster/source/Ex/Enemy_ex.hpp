
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
        }

    public:
        void on_update(
            const dst::Clock& clock,
            const dst::Input& input,
            const dst::Vector2& playArea
        ) override
        {
            mVelocity *= Damping;
        }
    };

} // namespace ShapeBlaster_ex
