
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

#include "Game.Status.hpp"
#include "Enemy.Spawner.hpp"
#include "Entity.Manager.hpp"
#include "Resources.hpp"

#include "Dynamic_Static/Core/Input.hpp"
#include "Dynamic_Static/Core/Math.hpp"
#include "Dynamic_Static/Core/Time.hpp"
#include "Dynamic_Static/Core/ToString.hpp"
#include "Dynamic_Static/Graphics/Vulkan.hpp"
#include "Dynamic_Static/Graphics/Window.hpp"

#include <string>

namespace ShapeBlaster {

    class Game final
    {
    private:
        // Resources resources;
        PlayerStatus mGameStatus;
        // Enemy::Spawner mEnemySpawner;
        Entity::Manager mEntityManager;
        dst::Clock mClock;

    public:
        Game(Resources& resources)
            : mEntityManager(resources, mGameStatus)
        {

        }

    public:
        bool over() const
        {
            // mStatus.lives() == 0;
        }

        void update(
            dst::vlkn::Device& device,
            const dst::Input& input,
            const dst::Clock& clock,
            const VkExtent2D& playField
        )
        {
            // clock update
            // input update

            // if (input was pressed back or escape)
            //  exit

            mEntityManager.udpate(input, clock, playField);
            // mEnemySpawner.update(clock);
            mGameStatus.update(clock);

            auto view = dst::Matrix4x4::create_view(
                { 0, 0, 1 }, dst::Vector3::Zero, dst::Vector3::UnitY
            );

            float w = static_cast<float>(playField.width);
            float h = static_cast<float>(playField.height);
            auto projection = dst::Matrix4x4::create_orhtographic(
                0, w, 0, h, 0.01f, 10.0f
            );

            mEntityManager.update_uniforms(device, view, projection);
        }

        void render(dst::vlkn::Command::Buffer& commandBuffer)
        {
            mEntityManager.render(commandBuffer);
        }

        std::string label() const
        {
            return
                "[Lives : "      + dst::to_string(mGameStatus.lives())      + "]    " +
                "[Bombs : "      + dst::to_string(0)                        + "]    " +
                "[Multiplier : " + dst::to_string(mGameStatus.multiplier()) + "]    " +
                "[Score : "      + dst::to_string(mGameStatus.score())      + "]    " +
                "[HiScore : "    + dst::to_string(0)                        + "]";
        }

        void exit()
        {

        }
    };

} // namespace ShapeBlaster
