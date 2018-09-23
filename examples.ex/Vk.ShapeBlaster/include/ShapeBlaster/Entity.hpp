
/*
==========================================
  Copyright (c) 2017-2018 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

// NOTE : Based on "Cross-Platform Vector Shooter: XNA" by Michael Hoffman...
//  https://gamedevelopment.tutsplus.com/series/cross-platform-vector-shooter-xna--gamedev-10559

#pragma once

#include "ShapeBlaster/Pool.hpp"
#include "ShapeBlaster/Sprite.hpp"

#include "Dynamic_Static.Graphics.hpp"

#include <utility>

namespace ShapeBlaster {

    class Entity
        : dst::NonCopyable
    {
    public:
        class Manager;
        class Spawner;

        class Component
        {
        public:
            struct Handle final
            {
                struct Comparator final
                {
                    inline bool operator()(const Handle& lhs, const Handle& rhs)
                    {
                        return lhs < rhs;
                    }

                    inline bool operator()(const Handle& lhs, uint64_t rhs)
                    {
                        return lhs.componentId < rhs;
                    }

                    inline bool operator()(uint64_t lhs, const Handle& rhs)
                    {
                        return lhs < rhs.componentId;
                    }
                };

                uint64_t componentId { 0 };
                void* pool { nullptr };
                void* component { nullptr };

                inline operator bool() const
                {
                    return componentId && pool && component;
                }
            };

        public:
            template <typename ComponentType>
            static inline uint64_t get_type_id()
            {
                static uint8_t sComponentId;
                return (uint64_t)&sComponentId;
            }
        };

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
        bool mActive { false };
        // std::vector<Component::Handle> mComponents;

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

        virtual void update(
            const dst::Clock& clock,
            const dst::sys::Input& input,
            const glm::vec2& playAreaExtent,
            dst::RandomNumberGenerator& rng
        )
        {
            mPosition += mVelocity * clock.elapsed<dst::Second<float>>();
            float w = playAreaExtent.x * 0.5f;
            float h = playAreaExtent.y * 0.5f;
            if (mPosition.x < -w || w < mPosition.x ||
                mPosition.y < -h || h < mPosition.y) {
                out_of_bounds(playAreaExtent, rng);
            }
            assert(mSprite);
            mSprite->position = mPosition;
            mSprite->rotation = mRotation;
            mSprite->scale = mScale;
            mSprite->color = mColor;
        }

        // template <typename ComponentType>
        // void add_component(Pool<ComponentType> pool)
        // {
        //     Component::Handle handle { };
        //     handle.componentId = Component::get_type_id<ComponentType>();
        //     handle.component = pool.check_out();
        //     assert(handle.component);
        //     handle.pool = &pool;
        //     auto itr = std::lower_bound(
        //         mComponents.begin(), mComponents.end(), handle, std::greater<Component::Handle>()
        //     );
        //     mComponents.insert(itr, handle);
        // }
        // 
        // template <typename ComponentType>
        // ComponentType* get_component()
        // {
        //     return (ComponentType*)get_component(Component::get_type_id<ComponentType>());
        // }
        // 
        // template <typename ComponentType>
        // const ComponentType* get_component() const
        // {
        //     return (ComponentType*)get_component(Component::get_type_id<ComponentType>());
        // }

    // protected:
        virtual void spawn(
            const glm::vec2& position,
            dst::RandomNumberGenerator& rng
        )
        {
            mPosition = position;
        }

        virtual void kill()
        {
            mIsAlive = false;
        }

        virtual void out_of_bounds(
            const glm::vec2& playAreaExtent,
            dst::RandomNumberGenerator& rng
        )
        {
            auto max = playAreaExtent * 0.5f;
            auto min = -max;
            mPosition = glm::clamp(mPosition, min, max);
        }

    private:
        // inline void* get_component(uint64_t componentId)
        // {
        //     return const_cast<void*>(std::as_const(*this).get_component(componentId));
        // }
        // 
        // inline const void* get_component(uint64_t componentId) const
        // {
        //     void* component = nullptr;
        //     auto itr = std::lower_bound(
        //         mComponents.begin(), mComponents.end(), componentId, Component::Handle::Comparator { }
        //     );
        //     if (itr != mComponents.end()) {
        //         component = itr->component;
        //     }
        //     return component;
        // }
    };

} // namespace ShapeBlaster
