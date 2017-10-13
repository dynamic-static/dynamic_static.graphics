
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
#include "Sprite_ex.Pool.hpp"

#include "Dynamic_Static/Core/NonCopyable.hpp"

#include <vector>

namespace ShapeBlaster_ex {

    // template <typename EntityType>
    // class Entity::Pool final
    //     : dst::NonCopyable
    // {
    // private:
    //     Sprite::Pool* mSpritePool { nullptr};
    //     std::vector<EntityType> mEntities;
    //     std::vector<Entity*> mAvailableEntities;
    // 
    // public:
    //     Pool() = default;
    //     Pool(Sprite::Pool& spritePool)
    //         : mSpritePool { &spritePool }
    //     {
    //         assert(mSpritePool);
    //         mEntities.reserve(mSpritePool->total_count());
    //         while (mSpritePool->available_count()) {
    //             mEntities.push_back(EntityType(mSpritePool->check_out()));
    //         }
    // 
    //         mAvailableEntities.reserve(mEntites.size());
    //     }
    // 
    // public:
    //     size_t total_count() const
    //     {
    //         return mEntites.size();
    //     }
    // 
    //     size_t available_count() const
    //     {
    //         return mAvailableEntities.size();
    //     }
    // 
    //     size_t in_use_count() const
    //     {
    //         return total_count() - available_count();
    //     }
    // 
    //     Entity* check_out()
    //     {
    //         Entity* entity = nullptr;
    //         if (!mAvailableEntities.empty()) {
    //             entity = mAvailableEntities.back();
    //             mAvailableEntities.pop_back();
    //         }
    // 
    //         return entity;
    //     }
    // 
    //     void check_in(Entity* entity)
    //     {
    //         if (entity) {
    //             assert(
    //                 mEntities.data() <= entity && entity < mEntites.data() + mEntites.size() &&
    //                 "Attempted to check in Entity that doesn't belong to this Entity::Pool"
    //             );
    // 
    //             mAvailableEntities.push_back(entity);
    //         }
    //     }
    // };

} // namespace ShapeBlaster_ex
