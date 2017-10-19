
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
#include <utility>
#include <vector>

namespace Dynamic_Static {

    // TODO : Move into dst::Core.

    template <typename FunctionType, size_t TypeIndex = 0, typename ...TupleTypes>
    inline typename std::enable_if<TypeIndex == sizeof...(TupleTypes)>::type
    for_each_tuple(std::tuple<TupleTypes...>&, const FunctionType&)
    {
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
    class Entity::Manager final
    {
    private:
        template <typename EntityType>
        struct Collection final
        {
            Pool<EntityType> pool;
            std::vector<EntityType*> spawning;
            std::vector<EntityType*> enabled;
            static size_t type_id()
            {
                return Entity::type_id<EntityType>();
            }
        };

        std::tuple<Collection<EntityTypes>...> mEntities;
        std::vector<std::pair<Entity*, size_t>> mCollidables;
        bool mUpdating { false };

    public:
        size_t enabled_count() const
        {
            size_t count = 0;
            dst::for_each_tuple(
                mEntities,
                [&](auto& entities)
                {
                    count += entities.enabled.size();
                }
            );

            return count;
        }

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
                [&](auto& entities)
                {
                    entities.pool.lock();
                }
            );
        }

        template <typename EntityType, typename ...Args>
        EntityType* spawn(Args&&... args)
        {
            constexpr size_t index = dst::type_index<EntityType, EntityTypes...>();
            auto entity = std::get<index>(mEntities).pool.check_out();
            if (entity) {
                entity->spawn(std::forward<Args>(args)...);
                if (mUpdating) {
                    entity->mEnabled = true;
                    entity->mSprite->enabled = true;
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
            mUpdating = true;
            handle_collisions();
            update_enabled_entities(clock, input, playField);
            mUpdating = false;
            enable_spawned_entities();
            remove_disabled_entites();
        }

        void handle_collisions()
        {
            std::cout << type_id<Bullet>() << std::endl;

            mCollidables.clear();
            dst::for_each_tuple(
                mEntities,
                [&](auto& entities)
                {
                    for (auto& entity : entities.enabled) {
                        mCollidables.push_back(std::make_pair(entity, entities.type_id()));
                    }
                }
            );

            dst::for_each_tuple(
                mEntities,
                [&](auto& entities)
                {
                    for (auto& entity : entities.enabled) {
                        for (auto& collidable : mCollidables) {
                            auto collidableEntity = collidable.first;
                            auto collidableTypeId = collidable.second;



                            if (colliding(*entity, *collidableEntity)) {

                                if (collidableTypeId == type_id<Bullet>()) {
                                    int breaker = 0;
                                }


                                entity->on_collision(*collidableEntity, collidableTypeId);
                            }
                        }
                    }
                }
            );
        }

        void update_enabled_entities(
            const dst::Clock& clock,
            const dst::Input& input,
            const dst::Vector2& playField
        )
        {
            dst::for_each_tuple(
                mEntities,
                [&](auto& entities)
                {
                    for (auto& entity : entities.enabled) {
                        entity->update(clock, input, playField);
                    }
                }
            );
        }

        void enable_spawned_entities()
        {
            dst::for_each_tuple(
                mEntities,
                [&](auto& entities)
                {
                    for (auto& entity : entities.spawning) {
                        entity->mEnabled = true;
                        entity->mSprite->enabled = true;
                        entities.enabled.push_back(entity);
                    }

                    entities.spawning.clear();
                }
            );
        }

        void remove_disabled_entites()
        {
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
                                bool enabled = entity->mEnabled;
                                if (!enabled) {
                                    entity->mSprite->enabled = false;
                                    entities.pool.check_in(entity);
                                    int breaker = 0;
                                }

                                return !enabled;
                            }
                        ),
                        entities.enabled.end()
                    );
                }
            );
        }
    };

} // namespace ShapeBlaster_ex
