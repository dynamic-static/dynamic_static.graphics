
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

namespace ShapeBlaster {

    class Entity::Manager final
        : dst::NonCopyable
    {
    private:
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

        template <typename T>
        class Resource final
        {
        public:
            EntityType type;
            std::string resourcePath;

        };

        std::unique_ptr<Sprite::Pool> mSpritePool;
        std::vector<Bullet> mBullets;
        Player mPlayer;

    public:
        inline Manager(
            const std::string& resourcePath,
            const std::shared_ptr<dst::vk::Device>& device,
            const std::shared_ptr<dst::vk::RenderPass>& renderPass
        )
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
            mPlayer.on_fire_bullet = std::bind(&Entity::Manager::on_player_fire_bullet, this, _1, _2);
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
        }

        inline void record_draw_cmds(const dst::vk::CommandBuffer& commandBuffer)
        {
            mSpritePool->record_draw_cmds(commandBuffer);
        }

    private:
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
