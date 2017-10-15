
/*
==========================================
    Copyright (c) 2017 Dynamic_Static
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

// Renders an action arcade game
// Based on "Make a Neon Vector Shooter in XNA"
// https://gamedevelopment.tutsplus.com/series/cross-platform-vector-shooter-xna--gamedev-10559s

#pragma once

#include "BlackHole_ex.hpp"
#include "Bullet_ex.hpp"
#include "Entity_ex.Manager.hpp"
#include "Entity_ex.Spawner.hpp"
#include "Player_ex.hpp"
#include "Seeker_ex.hpp"
#include "Sprite_ex.hpp"
#include "Sprite_ex.Pipeline.hpp"
#include "Sprite_ex.Pool.hpp"
#include "Wanderer_ex.hpp"

#include "Dynamic_Static/Core/FileSystem.hpp"
#include "Dynamic_Static/Graphics/Vulkan.hpp"

#include <memory>
#include <stdexcept>
#include <string>
#include <utility>
#include <unordered_map>

namespace ShapeBlaster_ex {

    class Game final
        : public dst::vlkn::Application
    {
    private:
        std::string mGameStatusMessage;
        Sprite* mPointerSprite { nullptr };
        Sprite::Pipeline mSpritePipeline;
        std::unordered_map<std::string, std::unique_ptr<Sprite::Pool>> mSpritePools;
        Entity::Spawner mEntitySpawner;
        Entity::Manager<
            Player,
            Bullet,
            Seeker,
            Wanderer,
            BlackHole
        > mEntityManager;

    public:
        Game()
        {
            name("Dynamic_Static VK.07.ShapeBlaster");
            mClearColor = dst::Color::Black;
            mDebugFlags =
                0
                #if defined(DYNAMIC_STATIC_WINDOWS)
                // | VK_DEBUG_REPORT_INFORMATION_BIT_EXT
                // | VK_DEBUG_REPORT_DEBUG_BIT_EXT
                // | VK_DEBUG_REPORT_PERFORMANCE_WARNING_BIT_EXT
                // | VK_DEBUG_REPORT_WARNING_BIT_EXT
                // | VK_DEBUG_REPORT_ERROR_BIT_EXT
                #endif
                ;
        }

    private:
        Sprite::Pool* create_sprite_pool(const std::string& fileName, size_t count)
        {
            std::string resourcePath = "../../../examples/resources/ShapeBlaster_AllParts/ShapeBlaster_Part5/ShapeBlaster_Part5Content/Art/";
            auto filePath = dst::Path::combine(resourcePath, fileName) + ".png";
            auto spritePool = std::make_unique<Sprite::Pool>(*mGraphicsQueue, mSpritePipeline, filePath, count);
            auto result = mSpritePools.insert(std::make_pair(fileName, std::move(spritePool)));
            assert(result.second);
            assert(result.first->second.get());
            return result.first->second.get();
        }

        template <typename EntityType>
        void create_entities(const std::string& fileName, size_t count)
        {
            auto spritePool = create_sprite_pool(fileName, count);
            while (spritePool->available_count() > 0) {
                mEntityManager.create<EntityType>(spritePool->check_out());
            }
        }

        void setup() override
        {
            dst::vlkn::Application::setup();
            mWindow->cursor_mode(dst::gfx::Window::CursorMode::Hidden);

            mSpritePipeline = Sprite::Pipeline(*mDevice, *mRenderPass);
            mPointerSprite = create_sprite_pool("Pointer", 1)->check_out();
            create_entities<Player>("Player", 1);
            create_entities<Bullet>("Bullet", 64);
            create_entities<Seeker>("Seeker", 8);
            create_entities<Wanderer>("Wanderer", 8);
            create_entities<BlackHole>("Black Hole", 4);
            mEntityManager.lock();

            // auto extent = mSwapchain->extent();
            // auto playArea = dst::Vector2(extent.width, extent.height);
            // auto player = mEntityManager.spawn<Player>(playArea * 0.5f);
            // assert(player);
            // using namespace std::placeholders;
            // player->on_bullet_fired =
            // [&](const dst::Vector2& position, const dst::Vector2& direction)
            // {
            //     mEntityManager.spawn<Bullet>(position, direction);
            // };
        }

        void update(const dst::Clock& clock, const dst::Input& input) override final
        {
            if (input.keyboard().down(dst::Keyboard::Key::Escape)) {
                stop();
            }

            mGameStatusMessage = "Hi Score : 0";
            mWindow->name("Dynamic_Static VK.07.ShapeBlaster        " + mGameStatusMessage);
            auto extent = mSwapchain->extent();
            auto playArea = dst::Vector2(extent.width, extent.height);
            mPointerSprite->position = input.mouse().position();
            mPointerSprite->position.y = playArea.y - mPointerSprite->position.y;
            mEntityManager.update(clock, input, playArea);
            mEntitySpawner.update(clock, playArea, mEntityManager);
            for (auto& spritePool : mSpritePools) {
                spritePool.second->update(playArea);
            }
        }

        void record_command_buffer(dst::vlkn::Command::Buffer& commandBuffer, const dst::Clock& clock) override final
        {
            for (auto& spritePool : mSpritePools) {
                spritePool.second->draw(commandBuffer);
            }
        }
    };

} // namespace ShapeBlaster_ex

int main_ex()
{
    try {
        ShapeBlaster_ex::Game game;
        game.start();
    } catch (const std::exception& e) {
        std::cerr << std::endl << "==========================================" << std::endl;
        std::cerr << e.what() << std::endl;
        std::cerr << std::endl << "==========================================" << std::endl;
    }

    return 0;
}
