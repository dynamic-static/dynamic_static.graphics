
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
#include "Resources.hpp"

namespace ShapeBlaster {

    class Seeker final
        : public Enemy
    {
    private:
        static constexpr float Speed { 80 };

    public:
        Seeker() = default;

        Seeker(Resources& resources, size_t index)
        {
            mSprite = resources.seekerSprite;
            mSprite.uniformBufferIndex = index;
            mColor = dst::Color::Transparent;
            mRadius = mSprite.image->extent().width * 0.5f;
            mExpired = true;
        }

    protected:
        void apply_behavior(const dst::Clock& clock, const VkExtent2D& playField) override final
        {
            auto direction = mPlayer->position() - mPosition;
            if (direction.x || direction.y) {
                direction.normalize();
                mOrientation = to_angle(direction);
            }

            mVelocity += direction * Speed;
        }
    };

} // namespace ShapeBlaster
