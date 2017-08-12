
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

#include "Entity.hpp"
#include "Resources.hpp"

#include "Dynamic_Static/Core/Input.hpp"
#include "Dynamic_Static/Core/Time.hpp"
#include "Dynamic_Static/Graphics/Vulkan.hpp"

#include <vector>

namespace ShapeBlaster {

    class Entity::Manager final
    {
    private:
        std::vector<Entity*> mEntites;
        bool mUpdating { false };

    public:
        void add(Entity* entity)
        {
            mEntites.push_back(entity);
        }

        void udpate(
            const dst::Input& input,
            const dst::Clock& clock,
            const VkExtent2D& playField
        )
        {
            mUpdating = true;
            for (size_t i = mEntites.size(); i-- > 0;) {
                mEntites[i]->update(input, clock, playField);
            }

            mUpdating = false;
        }

        void update_uniforms(
            dst::vlkn::Device& device,
            const dst::Matrix4x4& view,
            const dst::Matrix4x4& projection
        )
        {
            for (size_t i = mEntites.size(); i-- > 0;) {
                mEntites[i]->update_uniforms(device, view, projection);
            }
        }

        void render(dst::vlkn::Command::Buffer& commandBuffer)
        {
            for (size_t i = mEntites.size(); i-- > 0;) {
                mEntites[i]->render(commandBuffer);
            }
        }
    };

} // namespace ShapeBlaster
