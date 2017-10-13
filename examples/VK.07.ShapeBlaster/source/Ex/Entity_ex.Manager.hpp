
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
#include "Pool_ex.hpp"

#include "Dynamic_Static/Core/Input.hpp"
#include "Dynamic_Static/Core/Math.hpp"
#include "Dynamic_Static/Core/Time.hpp"
#include "Dynamic_Static/Core/TypeUtilities.hpp"

#include <algorithm>
#include <tuple>
#include <vector>

namespace ShapeBlaster_ex {

    template <typename ...EntityTypes>
    class Entity::Manager_ex final
    {
    private:
        std::tuple<Pool<EntityTypes>...> mEntityPools;
        std::tuple<std::vector<EntityTypes*>...> mSpawningEntities;
        std::tuple<std::vector<EntityTypes*>...> mEnabledEntities;
        bool mUpdating { false };
    
    public:
        template <typename EntityType, typename ...Args>
        EntityType* spawn(Args&&... args)
        {
            EntityType* entity = nullptr;
            constexpr size_t index = dst::type_index<EntityType, EntityTypes...>();
            auto& entityPool = std::get<index>(mEntityPools);
            entity = entityPool.checkout();
            if (entity) {
                entity->mEnabled = true;
                entity->mSprite->enabled = true;
                entity->spawn(std::forward(args)...);
                if (mUpdating) {
                    std::get<index>(mEnabledEntities).push_back(entity);
                } else {
                    std::get<index>(mSpawningEntities).push_back(entity);
                }
            }

            return entity;
        }

        void update(
            const dst::Clock& clock,
            const dst::Input& input,
            const dst::Vector2& playField
        )
        {
            mUpdating = true;
            update(clock, input, playField, index_sequence());
            mUpdating = false;
            enable_spawned_entities(index_sequence());
            remove_disabled_entities(index_sequence());
        }

    private:
        auto index_sequence()
        {
            return std::index_sequence_for<decltype(mEntityPools)>();
        }

        template <size_t ... Indices>
        void update(
            const dst::Clock& clock,
            const dst::Input& input,
            const dst::Vector2& playField,
            std::index_sequence<Indices...>
        )
        {
            for (auto& entity : std::get<Indices...>(mEnabledEntities)) {
                entity->update(clock, input, playField);
            }
        }

        template <size_t ... Indices>
        void enable_spawned_entities(std::index_sequence<Indices...>)
        {
            auto& enabledEntities = std::get<Indices...>(mEnabledEntities);
            auto& spawningEntities = std::get<Indices...>(mSpawningEntities);
            for (auto& entity : spawningEntities) {
                enabledEntities.push_back(entity);
            }

            spawningEntities.clear();
        }

        template <size_t ... Indices>
        void remove_disabled_entities(std::index_sequence<Indices...>)
        {
            auto& entityPool = std::get<Indices...>(mEntityPools);
            auto& enabledEntities = std::get<Indices...>(mEnabledEntities);
            enabledEntities.erase(
                std::remove_if(
                    enabledEntities.begin(),
                    enabledEntities.end(),
                    [&](auto entity)
                    {
                        bool enabled = entity->enabled();
                        if (!enabled) {
                            entityPool.check_in(entity);
                        }

                        return enabled;
                    }
                ),
                enabledEntities.end()
            );
        }
    };

    // class Entity::Manager final
    // {
    // private:
    //     Pool<Bullet> mBullets;
    // 
    //     std::vector<Entity*> mEntities;
    //     std::vector<Entity*> mAddedEntites;
    //     bool mUpdating { false };
    // 
    // public:
    //     void add(Entity* entity)
    //     {
    //         if (entity) {
    //             if (mUpdating) {
    //                 mAddedEntites.push_back(entity);
    //             } else {
    //                 mEntities.push_back(entity);
    //             }
    //         }
    //     }
    // 
    //     void update(
    //         const dst::Clock& clock,
    //         const dst::Input& input,
    //         const dst::Vector2& playField
    //     )
    //     {
    //         // mUpdating = true;
    //         // 
    //         // for (auto& entity : mEntities) {
    //         //     entity->update(clock, input, playField);
    //         // }
    //         // 
    //         // mUpdating = false;
    //         // 
    //         // for (auto& entity : mAddedEntites) {
    //         //     mEntities.push_back(entity);
    //         // }
    //         // 
    //         // mAddedEntites.clear();
    //         // 
    //         // mEntities.erase(
    //         //     std::remove_if(
    //         //         mEntities.begin(), mEntities.end(),
    //         //         [](Entity* entity) { !entity->enabled(); }
    //         //     ),
    //         //     mEntities.end()
    //         // );
    //     }
    // };

} // namespace ShapeBlaster_ex
