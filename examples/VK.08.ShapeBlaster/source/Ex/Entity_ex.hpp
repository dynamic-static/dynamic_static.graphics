
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
#include "Dynamic_Static/Core/Callback.hpp"
#include "Dynamic_Static/Core/Input.hpp"
#include "Dynamic_Static/Core/Math.hpp"
#include "Dynamic_Static/Core/Time.hpp"

namespace ShapeBlaster_ex {

    class Entity
    {
    public:
        template <typename ...EntityTypes>
        class Manager;
        class Spawner;

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
        dst::Callback<Entity, const Entity&> on_spawned;
        dst::Callback<Entity, const Entity&> on_killed;

    public:
        Entity(Sprite* sprite)
            : mSprite { sprite }
        {
            assert(mSprite);
            mSprite->enabled = false;
        }

    public:
        const dst::Vector2& position() const
        {
            return mPosition;
        }

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
            const dst::Vector2& playArea
        )
        {
            on_update(clock, input, playArea);
            mPosition += mVelocity * clock.elapsed<dst::Second<>>();
            if (mPosition.x < 0 || playArea.x < mPosition.x ||
                mPosition.y < 0 || playArea.y < mPosition.y) {
                on_out_of_bounds(playArea);
            }

            mSprite->position = mPosition;
            mSprite->rotation = mRotation;
            mSprite->scale = mScale;
            mSprite->color = mColor;
            mSprite->enabled = mEnabled;
        }

        void kill()
        {
            // mSprite->enabled = false;
            mEnabled = false;
            on_kill();
            on_killed(*this);
        }

    protected:
        virtual void on_update(
            const dst::Clock& clock,
            const dst::Input& input,
            const dst::Vector2& playArea
        )
        {
        }

        virtual void on_out_of_bounds(const dst::Vector2& playArea)
        {
            mPosition.x = dst::clamp(mPosition.x, 0.0f, playArea.x);
            mPosition.y = dst::clamp(mPosition.y, 0.0f, playArea.y);
        }

        virtual void on_kill()
        {
        }

    public:
        template <typename EntityType>
        static size_t type_id()
        {
            static size_t sTypeId;
            return reinterpret_cast<size_t>(&sTypeId);
        }

        static bool colliding(const Entity& lhs, const Entity& rhs)
        {
            float radius = lhs.mRadius + rhs.mRadius;
            auto distanceSquared = lhs.mPosition.distance_squared(rhs.mPosition);
            return &lhs != &rhs && lhs.mEnabled && rhs.mEnabled && distanceSquared < radius * radius;
        }
    };

} // namespace ShapeBlaster_ex

namespace ShapeBlaster_ex {

    inline dst::Vector2 polar_to_cartesian(float angle, float magnitude)
    {
        // TODO : Move into dst::Core.
        return dst::Vector2(std::cos(angle), std::sin(angle)) * magnitude;
    }

} // namespace ShapeBlaster_ex
