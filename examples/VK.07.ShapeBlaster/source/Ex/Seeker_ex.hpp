
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

    class Seeker final
        : public Enemy
    {
    private:
        Entity* mTarget { nullptr };

    public:
        Seeker(Sprite* sprite)
            : Enemy(sprite)
        {
        }

    public:
        void spawn(const dst::Vector2& position, Entity& target)
        {
            mPosition = position;
            mTarget = &target;
        }

        void on_update(
            const dst::Clock& clock,
            const dst::Input& input,
            const dst::Vector2& playArea
        ) override final
        {
            if (mTarget) {
                auto direction = mTarget->position() - mPosition;
                if (direction != dst::Vector2::Zero) {
                    direction.normalize();
                    mRotation = direction.to_angle();
                }
            }
        }
    };

} // namespace ShapeBlaster_ex
