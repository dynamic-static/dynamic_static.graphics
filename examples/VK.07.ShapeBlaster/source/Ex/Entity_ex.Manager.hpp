
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

#include <iostream>

namespace Dynamic_Static {

    // TODO : Refine, test, and move into dst::Core.
    template <typename FunctionType, size_t TypeIndex = 0, typename ...TupleTypes>
    inline typename std::enable_if<TypeIndex == sizeof...(TupleTypes)>::type
    for_each_tuple(std::tuple<TupleTypes...>&, const FunctionType&)
    {
        // FROM : https://stackoverflow.com/a/6894436/3453616
    }
   
    template <typename FunctionType, size_t TypeIndex = 0, typename ...TupleTypes>
    inline typename std::enable_if<TypeIndex < sizeof...(TupleTypes)>::type
    for_each_tuple(std::tuple<TupleTypes...>& tuple, const FunctionType& function)
    {
        // FROM : https://stackoverflow.com/a/6894436/3453616
        function(std::get<TypeIndex>(tuple));
        for_each_tuple<FunctionType, TypeIndex + 1, TupleTypes...>(tuple, function);
    }

} // namespace Dynamic_Static

namespace ShapeBlaster_ex {

    template <typename ...EntityTypes>
    class Entity::Manager_ex final
    {
    private:
        template <typename EntityType>
        struct Collection final
        {
            Pool<EntityType> pool;
            std::vector<EntityType*> spawning;
            std::vector<EntityType*> enabled;
        };

        std::tuple<Collection<EntityTypes>...> mEntities;
        bool mUpdating { false };
    
    public:
        template <typename EntityType, typename ...Args>
        void create(Args&&... args)
        {
            constexpr size_t index = dst::type_index<EntityType, EntityTypes...>();
            auto& entityPool = std::get<index>(mEntities).pool;
            entityPool.create(std::forward<Args>(args)...);
        }

        void lock()
        {
            dst::for_each_tuple(
                mEntities,
                [&](auto& entities) { entities.pool.lock(); }
            );
        }

        template <typename EntityType, typename ...Args>
        EntityType* spawn(Args&&... args)
        {
            constexpr size_t index = dst::type_index<EntityType, EntityTypes...>();
            auto entity = std::get<index>(mEntities).pool.check_out();
            if (entity) {
                entity->mEnabled = true;
                entity->mSprite->enabled = true;
                entity->spawn(std::forward<Args>(args)...);
                if (mUpdating) {
                    std::get<index>(mEntities).enabled.push_back(entity);
                } else {
                    std::get<index>(mEntities).spawning.push_back(entity);
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
            // mUpdating = true;
            // update(clock, input, playField, std::make_index_sequence<sizeof...(EntityTypes)>());
            // mUpdating = false;
            // enable_spawned_entities(std::make_index_sequence<sizeof...(EntityTypes)>());
            // remove_disabled_entities(std::make_index_sequence<sizeof...(EntityTypes)>());

            mUpdating = true;

            dst::for_each_tuple(
                mEntities,
                [&](auto& entities)
                {
                    for (auto& entity : entities.enabled) {
                        entity->update(clock, input, playField);
                    }
                }
            );

            mUpdating = false;

            dst::for_each_tuple(
                mEntities,
                [&](auto& entities)
                {
                    for (auto& entity : entities.spawning) {
                        entities.enabled.push_back(entity);
                    }
            
                    entities.spawning.clear();
                }
            );

            dst::for_each_tuple(
                mEntities,
                [&](auto& entities)
                {
                    entities.enabled.erase(
                        std::remove_if(
                            entities.enabled.begin(),
                            entities.enabled.end(),
                            [&](auto entity)
                            {
                                bool enabled = entity->enabled();
                                if (!enabled) {
                                    entities.pool.check_in(entity);
                                }

                                return !enabled;
                            }
                        ),
                        entities.enabled.end()
                    );
                }
            );
        }

    private:
        // auto index_sequence()
        // {
        //     return std::make_index_sequence<sizeof...(EntityTypes)>();
        //     // return std::index_sequence_for<decltype(mEntityPools)>();
        // }

        // template <typename ...TupleTypes, typename FunctionType, std::size_t ...Indices>
        // void for_each_tuple(
        //     const std::tuple<TupleTypes...>& tuple,
        //     const FunctionType& f,
        //     std::index_sequence<Indices...>
        // )
        // {
        //     // FROM : https://stackoverflow.com/a/26902803/3453616
        //     using expander = int[];
        //     expander { 0, f(std::get<Indices>(tuple), 0)... };
        // }
        // 
        // template <typename ...TupleTypes, typename FunctionType>
        // void tuple_for_each(
        //     const std::tuple<TupleType...>& tuple,
        //     const FunctionType& f,
        // )
        // {
        //     tuple_for_each(tuple, f, std::make_index_sequence<sizeof...(TupleTypes)>());
        // }

       ////////////////////////template <size_t ...Indices>
       ////////////////////////void lock(std::index_sequence<Indices...>)
       ////////////////////////{
       ////////////////////////    // std::get<Indices...>(mEntityPools).lock();
       ////////////////////////}
       ////////////////////////
       ////////////////////////template <size_t ...IndexSequence>
       ////////////////////////void update(
       ////////////////////////    const dst::Clock& clock,
       ////////////////////////    const dst::Input& input,
       ////////////////////////    const dst::Vector2& playField,
       ////////////////////////    std::index_sequence<IndexSequence...>
       ////////////////////////)
       ////////////////////////{
       ////////////////////////    auto& enabledEntites = std::get<IndexSequence>(mEnabledEntities);
       ////////////////////////    for (auto& entity : enabledEntites) {
       ////////////////////////        entity->update(clock, input, playField);
       ////////////////////////    }
       ////////////////////////}
       ////////////////////////
       ////////////////////////template <size_t ...Indices>
       ////////////////////////void enable_spawned_entities(std::index_sequence<Indices...>)
       ////////////////////////{
       ////////////////////////    auto& enabledEntities = std::get<Indices>(mEnabledEntities);
       ////////////////////////    auto& spawningEntities = std::get<Indices>(mSpawningEntities);
       ////////////////////////    for (auto& entity : spawningEntities) {
       ////////////////////////        enabledEntities.push_back(entity);
       ////////////////////////    }
       ////////////////////////
       ////////////////////////    spawningEntities.clear();
       ////////////////////////}
       ////////////////////////
       ////////////////////////template <size_t ...Indices>
       ////////////////////////void remove_disabled_entities(std::index_sequence<Indices...>)
       ////////////////////////{
       ////////////////////////    auto& entityPool = std::get<Indices>(mEntityPools);
       ////////////////////////    auto& enabledEntities = std::get<Indices>(mEnabledEntities);
       ////////////////////////    enabledEntities.erase(
       ////////////////////////        std::remove_if(
       ////////////////////////            enabledEntities.begin(),
       ////////////////////////            enabledEntities.end(),
       ////////////////////////            [&](auto entity)
       ////////////////////////            {
       ////////////////////////                bool enabled = entity->enabled();
       ////////////////////////                if (!enabled) {
       ////////////////////////                    entityPool.check_in(entity);
       ////////////////////////                }
       ////////////////////////
       ////////////////////////                return enabled;
       ////////////////////////            }
       ////////////////////////        ),
       ////////////////////////        enabledEntities.end()
       ////////////////////////    );
       ////////////////////////}
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
