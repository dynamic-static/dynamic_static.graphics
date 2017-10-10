
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

#include "Dynamic_Static/Core/Input.hpp"
#include "Dynamic_Static/Core/Math.hpp"
#include "Dynamic_Static/Core/Time.hpp"

#include <vector>

namespace ShapeBlaster_ex {

    class Entity::Manager final
    {
    private:
        std::vector<Entity*> mEntities;
        std::vector<Entity*> mAddedEntites;
        bool mUpdating { false };

    public:
        void add(Entity* entity)
        {
            if (entity) {
                if (mUpdating) {
                    mAddedEntites.push_back(entity);
                } else {
                    mEntities.push_back(entity);
                }
            }
        }

        void update(
            const dst::Clock& clock,
            const dst::Input& input,
            const dst::Vector2& playField
        )
        {
            mUpdating = true;

            for (auto& entity : mEntities) {
                entity->update(clock, input, playField);
            }

            mUpdating = false;

            for (auto& entity : mAddedEntites) {
                mEntities.push_back(entity);
            }

            mAddedEntites.clear();

            // remove any expired entities...
            // entities = entities.Where(x => !x.IsExpired).ToList();
        }
    };

} // namespace ShapeBlaster_ex
