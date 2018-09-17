
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
        class Manager;

    protected:
        glm::vec2 mPosition { };
        float mRotation { 0 };
        float mScale { 0 };
        glm::vec4 mColor { dst::Color::White };
        float mRadius { 20 };
        glm::vec2 mVelocity { };

    private:
        Sprite mSprite;

    public:
        Entity() = default;
        Entity(Sprite&& sprite)
        {
            mSprite = std::move(sprite);
        }

        inline Entity(Entity&& other)
        {
            *this = std::move(other);
        }

        virtual ~Entity() = 0;

        inline Entity& operator=(Entity&& other)
        {
            if (this != &other) {
                mSprite = std::move(other.mSprite);
                mRadius = std::move(other.mRadius);
                mVelocity = std::move(other.mVelocity);
            }
            return *this;
        }

    public:
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
            const glm::vec2& playAreaExtent
        )
        {
            on_update(clock, input, playAreaExtent);
            mPosition += mVelocity * clock.elapsed<dst::Second<float>>();
            if (mPosition.x < 0 || playAreaExtent.x < mPosition.x ||
                mPosition.y < 0 || playAreaExtent.y < mPosition.y) {
                // on_out_of_bounds(playAreaExtent);
            }
            assert(mSprite);
            mSprite->position = mPosition;
            mSprite->rotation = mRotation;
            mSprite->scale = mScale;
            mSprite->color = mColor;
        }

    protected:
        virtual void on_update(
            const dst::Clock& clock,
            const dst::sys::Input& input,
            const glm::vec2& playAreaExtent
        )
        {
        }
    };

    Entity::~Entity()
    {
    }

} // namespace ShapeBlaster
