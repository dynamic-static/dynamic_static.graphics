
/*
==========================================
  Copyright (c) 2017-2018 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "Sprite.hpp"

#include "Dynamic_Static.Graphics.hpp"

namespace ShapeBlaster {

    class Entity
        : dst::NonCopyable
    {
    public:
        class Component;
        class Manager;

    protected:
        glm::vec2 mPosition { };
        float mRotation { 0 };
        float mScale { 1 };
        glm::vec4 mColor { dst::Color::White };
        float mRadius { 20 };
        glm::vec2 mVelocity { };

    private:
        Sprite mSprite;
        bool mIsAlive { true };

    public:
        Entity() = default;
        Entity(Sprite&& sprite)
            : mSprite(std::move(sprite))
        {
            assert(mSprite);
        }

        inline Entity(Entity&& other)
        {
            *this = std::move(other);
        }

        virtual ~Entity() = 0;

        inline Entity& operator=(Entity&& other)
        {
            mPosition = std::move(other.mPosition);
            mRotation = std::move(other.mRotation);
            mScale = std::move(other.mScale);
            mColor = std::move(other.mColor);
            mRadius = std::move(other.mRadius);
            mVelocity = std::move(other.mVelocity);
            mSprite = std::move(other.mSprite);
            mIsAlive = std::move(other.mIsAlive);
            return *this;
        }

    public:
        inline const bool is_alive() const
        {
            return mIsAlive;
        }

        inline const glm::vec2& get_position() const
        {
            assert(mSprite);
            return mSprite->position;
        }

        inline const glm::vec2& get_extent() const
        {
            assert(mSprite);
            return mSprite->extent;
        }

        inline void update(
            const dst::Clock& clock,
            const dst::sys::Input& input,
            dst::RandomNumberGenerator& rng,
            const glm::vec2& playAreaExtent
        )
        {
            on_update(clock, input, rng, playAreaExtent);
            mPosition += mVelocity * clock.elapsed<dst::Second<float>>();
            float w = playAreaExtent.x * 0.5f;
            float h = playAreaExtent.y * 0.5f;
            if (mPosition.x < -w || w < mPosition.x ||
                mPosition.y < -h || h < mPosition.y) {
                on_out_of_bounds(playAreaExtent);
            }
            assert(mSprite);
            mSprite->position = mPosition;
            mSprite->rotation = mRotation;
            mSprite->scale = mScale;
            mSprite->color = mColor;
        }

    protected:
        void kill()
        {
            mIsAlive = false;
        }

        virtual void on_update(
            const dst::Clock& clock,
            const dst::sys::Input& input,
            dst::RandomNumberGenerator& rng,
            const glm::vec2& playAreaExtent
        )
        {
        }

        virtual void on_out_of_bounds(const glm::vec2& playAreaExtent)
        {
            auto max = playAreaExtent * 0.5f;
            auto min = -max;
            mPosition = glm::clamp(mPosition, min, max);
        }
    };

    Entity::~Entity()
    {
    }

} // namespace ShapeBlaster
