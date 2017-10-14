
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

#include "Sprite_ex.hpp"

#include "Dynamic_Static/Core/Algorithm.hpp"
#include "Dynamic_Static/Core/Input.hpp"
#include "Dynamic_Static/Core/Math.hpp"
#include "Dynamic_Static/Core/Time.hpp"

namespace ShapeBlaster_ex {

    class Entity
    {
    public:
        template <typename EntityType>
        // class Pool;
        class Manager;

        template <typename ...EntityTypes>
        class Manager_ex;

    protected:
        dst::Vector2 mPosition;
        float mRotation { 0 };
        dst::Vector2 mScale { dst::Vector2::One };
        dst::Color mColor { dst::Color::White };
        dst::Vector2 mVelocity;
        float mRadius { 0 };
        bool mEnabled { false };

    private:
        Sprite* mSprite { nullptr };

    public:
        Entity() = default;
        Entity(Sprite* sprite)
            : mSprite { sprite }
        {
            assert(mSprite);
        }

    public:
        bool enabled() const
        {
            return mEnabled;
        }

        dst::Vector2 extent() const
        {
            return
                mSprite && mSprite->image ?
                dst::Vector2(
                    mSprite->image->extent().width,
                    mSprite->image->extent().height
                ) :
                dst::Vector2::Zero;
        }

        void update(
            const dst::Clock& clock,
            const dst::Input& input,
            const dst::Vector2& playField
        )
        {
            on_update(clock, input, playField);
            mPosition += mVelocity * clock.elapsed<dst::Second<>>();
            if (mPosition.x < 0 || playField.x < mPosition.x ||
                mPosition.y < 0 || playField.y < mPosition.y) {
                on_out_of_bounds(playField);
            }

            mSprite->position = mPosition;
            mSprite->rotation = mRotation;
            mSprite->scale = mScale;
            mSprite->color = mColor;
        }

        void kill()
        {
            mSprite->enabled = false;
            mEnabled = false;
            on_kill();
        }

    protected:
        virtual void on_update(
            const dst::Clock& clock,
            const dst::Input& input,
            const dst::Vector2& playField
        )
        {
        }

        virtual void on_out_of_bounds(const dst::Vector2& playField)
        {
            mPosition.x = dst::clamp(mPosition.x, 0.0f, playField.x);
            mPosition.y = dst::clamp(mPosition.y, 0.0f, playField.y);
        }

        virtual void on_kill()
        {
        }

    public:
        static bool colliding(const Entity& lhs, const Entity& rhs)
        {
            float radius = lhs.mRadius + rhs.mRadius;
            auto distanceSquared = lhs.mPosition.distance_squared(rhs.mPosition);
            return lhs.mEnabled && rhs.mEnabled && distanceSquared < radius * radius;
        }
    };

} // namespace ShapeBlaster_ex

namespace ShapeBlaster_ex {

    inline dst::Vector2 polar_to_cartesian(float angle, float magnitude)
    {
        return dst::Vector2(std::cos(angle), std::sin(angle)) * magnitude;
    }

} // namespace ShapeBlaster_ex
