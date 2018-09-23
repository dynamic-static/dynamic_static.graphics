
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

#include "ShapeBlaster/BlackHole.hpp"
#include "ShapeBlaster/Bullet.hpp"
#include "ShapeBlaster/Entity.hpp"
#include "ShapeBlaster/Entity.Pool.hpp"
#include "ShapeBlaster/Player.hpp"
#include "ShapeBlaster/Pool.hpp"
#include "ShapeBlaster/Seeker.hpp"
#include "ShapeBlaster/Sprite.Pool.hpp"
#include "ShapeBlaster/Wanderer.hpp"

#include "Dynamic_Static.Graphics.hpp"

#include <functional>
#include <tuple>

namespace ShapeBlaster {

    class Entity::Manager final
        : dst::NonCopyable
    {
    private:
        static constexpr float EnemySpawnProbabilityMax { 0 };
        static constexpr float EnemySpawnProbabilityDefault { 0.1f };
        static constexpr float EnemySpawnProbabilityIncreaseRate { 0 };
        static constexpr float BlackHoleSpawnProbabilityMax { 0 };
        static constexpr float BlackHoleSpawnProbabilityDefault { 0.1f };
        static constexpr float BlackHoleSpawnProbabilityIncreaseRate { 0 };

        enum class EntityType
        {
            // BlackHole,
            Bullet,
            Wanderer,
            Seeker,
            Player,
            Pointer,
            Count,
        };

        float mEnemySpawnProbability { EnemySpawnProbabilityDefault };
        float mBlackHoleSpawnProbability { BlackHoleSpawnProbabilityDefault };
        std::unique_ptr<Sprite::Pool> mSpritePool;
        dst::Component::Pool<Wanderer> mWandererPool;
        std::vector<Bullet> mBullets;
        std::vector<dst::Entity> mEntities;
        Player mPlayer;

    public:
        inline Manager(
            const std::string& resourcePath,
            const std::shared_ptr<dst::vk::Device>& device,
            const std::shared_ptr<dst::vk::RenderPass>& renderPass
        )
            : mWandererPool(32)
        {
            std::string artResourcesPath = resourcePath + "/Art/";
            std::array<Sprite::CreateInfo, (int)EntityType::Count> spriteCreateInfos { };
            spriteCreateInfos[(int)EntityType::Bullet]   = { 64, artResourcesPath + "/Bullet.png" };
            spriteCreateInfos[(int)EntityType::Wanderer] = { 32, artResourcesPath + "/Wanderer.png" };
            spriteCreateInfos[(int)EntityType::Seeker]   = { 32, artResourcesPath + "/Seeker.png" };
            spriteCreateInfos[(int)EntityType::Player]   = { 1,  artResourcesPath + "/Player.png" };
            spriteCreateInfos[(int)EntityType::Pointer]  = { 1,  artResourcesPath + "/Pointer.png" };
            mSpritePool = std::make_unique<Sprite::Pool>(device, renderPass, spriteCreateInfos);
            mPlayer = Player(
                mSpritePool->check_out((int)EntityType::Player),
                mSpritePool->check_out((int)EntityType::Pointer)
            );
            using namespace std::placeholders;
            // mPlayer.on_fire_bullet = std::bind(&Entity::Manager::on_player_fire_bullet, this, _1, _2);
        }

    public:
        inline void add(Bullet&& bullet)
        {
            mBullets.push_back(std::move(bullet));
        }

        inline void update(
            const dst::Clock& clock,
            const dst::sys::Input& input,
            const glm::vec2& playAreaExtent,
            dst::RandomNumberGenerator& rng
        )
        {
            for (auto& entity : mEntities) {
                auto wanderer = entity.get_component<Wanderer>();
                if (wanderer) {
                    wanderer->update(clock, input, playAreaExtent, rng);
                }
            }

            mPlayer.update(clock, input, playAreaExtent, rng);
            for (auto& bullet : mBullets) {
                bullet.update(clock, input, playAreaExtent, rng);
            }
            for (auto itr = mBullets.rbegin(); itr != mBullets.rend();) {
                if (!itr->is_alive()) {
                    itr = decltype(itr)(mBullets.erase(std::next(itr).base()));
                } else {
                    ++itr;
                }
            }
            mSpritePool->update(playAreaExtent);
            spawn_enemies(clock, playAreaExtent, rng);
        }

        inline void record_draw_cmds(const dst::vk::CommandBuffer& commandBuffer)
        {
            mSpritePool->record_draw_cmds(commandBuffer);
        }

    private:
        inline void spawn_enemies(
            const dst::Clock& clock,
            const glm::vec2& playAreaExtent,
            dst::RandomNumberGenerator& rng
        )
        {
            auto spawnEnemy =
            [&](auto& enemyPool, int spriteId)
            {
                if (rng.probability(mEnemySpawnProbability)) {
                    if (!enemyPool.empty()) {
                        auto sprite = mSpritePool->check_out(spriteId);
                        if (sprite) {
                            dst::Entity entity;
                            auto enemy = entity.add_component(enemyPool, std::move(sprite));
                            glm::vec2 spawnPosition;
                            auto w = playAreaExtent.x * 0.5f;
                            auto h = playAreaExtent.y * 0.5f;
                            spawnPosition.x = rng.range(-w, w);
                            spawnPosition.y = rng.range(-h, h);
                            enemy->spawn(spawnPosition, rng);
                            mEntities.push_back(std::move(entity));
                        }
                    }
                }
            };
            spawnEnemy(mWandererPool, (int)EntityType::Wanderer);
        }

        inline void on_player_fire_bullet(
            const glm::vec2& position,
            const glm::vec2& direction
        )
        {
            auto sprite = mSpritePool->check_out((int)EntityType::Bullet);
            if (sprite) {
                Bullet bullet(std::move(sprite));
                bullet.spawn(position, direction);
                mBullets.push_back(std::move(bullet));
            }
        }
    };

} // namespace ShapeBlaster
