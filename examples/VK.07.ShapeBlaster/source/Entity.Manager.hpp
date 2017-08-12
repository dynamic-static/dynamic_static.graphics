
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
#include "Bullet.hpp"
#include "Cursor.hpp"
#include "PlayerShip.hpp"
#include "Seeker.hpp"
#include "Wanderer.hpp"
#include "Resources.hpp"

#include "Dynamic_Static/Core/Input.hpp"
#include "Dynamic_Static/Core/Random.hpp"
#include "Dynamic_Static/Core/Time.hpp"
#include "Dynamic_Static/Graphics/Vulkan.hpp"

#include <vector>

namespace ShapeBlaster {

    class Entity::Manager final
    {
    private:
        static constexpr size_t MaxEnemyCount { 200 };

    private:
        std::vector<PlayerShip> mPlayerShips;
        std::vector<Cursor> mCursors;
        std::vector<Bullet> mBullets;
        std::vector<Seeker> mSeekers;
        std::vector<Wanderer> mWanderers;
        std::vector<Entity*> mEntities;
        dst::vlkn::SwapchainKHR* mSwapChain { nullptr };
        float inverseSpawnChance { 60 };
        size_t mEnemyCount { 0 };
        bool mUpdating { false };

    public:
        Manager(dst::vlkn::SwapchainKHR& swapChain, Resources& resources)
            : mSwapChain { &swapChain }
        {
            mCursors.push_back(Cursor(resources));
            mEntities.push_back(&mCursors[0]);

            mBullets.reserve(128);
            for (size_t i = 0; i < 128; ++i) {
                mBullets.push_back(ShapeBlaster::Bullet(resources, i));
                mEntities.push_back(&mBullets[i]);
            }

            mWanderers.reserve(64);
            for (size_t i = 0; i < 64; ++i) {
                mWanderers.push_back(ShapeBlaster::Wanderer(resources, i));
                mEntities.push_back(&mWanderers[i]);
            }

            mSeekers.reserve(64);
            for (size_t i = 0; i < 64; ++i) {
                mSeekers.push_back(ShapeBlaster::Seeker(resources, i));
                mEntities.push_back(&mSeekers[i]);
            }

            auto extent = mSwapChain->extent();
            auto spawnPosition = dst::Vector2(extent.width, extent.height) * 0.5f;
            mPlayerShips.push_back(PlayerShip(resources, mCursors[0], mBullets, spawnPosition));
            mEntities.push_back(&mPlayerShips[0]);
        }

    public:
        void udpate(
            const dst::Input& input,
            const dst::Clock& clock,
            const VkExtent2D& playField
        )
        {
            if (true /*Player alive*/ && mEnemyCount < MaxEnemyCount) {
                static bool needSpawn = false;
                static size_t counter;
                if (counter++ >= 20) {
                    counter = 0;
                    needSpawn = true;
                }

                for (size_t i = mSeekers.size(); i-- > 0;) {
                    if (mSeekers[i].expired() && needSpawn) {
                        mSeekers[i].spawn(clock, spawn_position(playField), mPlayerShips[0]);
                        needSpawn = false;
                    }
                }

                static bool needSpawn_ex = false;
                static size_t counter_ex;
                if (counter_ex++ >= 20) {
                    counter_ex = 0;
                    needSpawn_ex = true;
                }

                for (size_t i = mWanderers.size(); i-- > 0;) {
                    if (mWanderers[i].expired() && needSpawn_ex) {
                        mWanderers[i].spawn(clock, spawn_position(playField), mPlayerShips[0]);
                        needSpawn_ex = false;
                    }
                }
            }

            if (inverseSpawnChance > 20) {
                inverseSpawnChance -= 0.005f * clock.elapsed<dst::Second<float>>();
            }

            mUpdating = true;
            for (size_t i = mEntities.size(); i-- > 0;) {
                mEntities[i]->update(input, clock, playField);
            }

            mUpdating = false;
        }

        void update_uniforms(
            dst::vlkn::Device& device,
            const dst::Matrix4x4& view,
            const dst::Matrix4x4& projection
        )
        {
            for (size_t i = mEntities.size(); i-- > 0;) {
                mEntities[i]->update_uniforms(device, view, projection);
            }
        }

        void render(dst::vlkn::Command::Buffer& commandBuffer)
        {
            for (size_t i = mEntities.size(); i-- > 0;) {
                mEntities[i]->render(commandBuffer);
            }
        }

    private:
        float distance_squard(const dst::Vector2& lhs, const dst::Vector2& rhs)
        {
            // TODO : Move into dst::Core...
            auto x = std::abs(lhs.x - rhs.x);
            auto y = std::abs(lhs.y - rhs.y);
            return x * x + y * y;
        }

        dst::Vector2 spawn_position(const VkExtent2D& playField)
        {
            dst::Vector2 spawnPosition;
            do {
                spawnPosition.x = dst::Random.range<float>(0, playField.width);
                spawnPosition.y = dst::Random.range<float>(0, playField.height);
            } while (distance_squard(spawnPosition, mPlayerShips[0].position()) < 250 * 250);

            return spawnPosition;
        }

        void reset()
        {

        }
    };

} // namespace ShapeBlaster
