
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

#include "Bullet_ex.Manager.hpp"
#include "Entity_ex.Manager.hpp"
#include "Player_ex.hpp"
#include "Sprite_ex.Manager.hpp"

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
        std::string mGameInfo;
        Entity::Manager_ex<
            Player,
            Bullet
        > mEntityManager_ex;
        //Entity::Manager mEntityManager;
        Sprite::Pipeline mSpritePipeline;
        std::unique_ptr<Sprite::Pool> mPointerSpritePool;
        std::unique_ptr<Sprite::Pool> mPlayerSpritePool;
        std::unique_ptr<Sprite::Pool> mBulletSpritePool;

        //std::unordered_map<std::string, Sprite::Pool> mSpritePools;

        //Entity::Pool<Bullet> mBulletPool;

        Sprite* mPointerSprite { nullptr };
        Player mPlayer;

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
        void setup() override
        {
            dst::vlkn::Application::setup();
            mWindow->cursor_mode(dst::gfx::Window::CursorMode::Hidden);

            mSpritePipeline = Sprite::Pipeline(*mDevice, *mRenderPass);

            std::string resourcePath = "../../../examples/resources/ShapeBlaster_AllParts/ShapeBlaster_Part5/ShapeBlaster_Part5Content/Art/";
            auto pointerSpriteFilePath = dst::Path::combine(resourcePath, "Pointer.png");
            auto playerSpriteFilePath = dst::Path::combine(resourcePath, "Player.png");
            auto bulletSpriteFilePath = dst::Path::combine(resourcePath, "Bullet.png");
            mPointerSpritePool = std::make_unique<Sprite::Pool>(*mGraphicsQueue, mSpritePipeline, pointerSpriteFilePath, 1);
            mPlayerSpritePool = std::make_unique<Sprite::Pool>(*mGraphicsQueue, mSpritePipeline, playerSpriteFilePath, 1);
            mBulletSpritePool = std::make_unique<Sprite::Pool>(*mGraphicsQueue, mSpritePipeline, bulletSpriteFilePath, 64);

            // auto loadSpritePool =
            // [&](const std::string& fileName, size_t count)
            // {
            //     // std::string resourcePath = "../../../examples/resources/ShapeBlaster_AllParts/ShapeBlaster_Part5/ShapeBlaster_Part5Content/Art/";
            //     auto filePath = dst::Path::combine(resourcePath, fileName) + ".png";
            //     auto spritePool = std::move(Sprite::Pool(*mGraphicsQueue, mSpritePipeline, filePath, count));
            //     mSpritePools.insert(std::make_pair(fileName, std::move(spritePool)));
            // };

            // loadSpritePool("Pointer", 1);
            // loadSpritePool("Player", 1);
            // loadSpritePool("Bullet", 64);

            // mPointerSprite = mSpritePools.find("Pointer")->second.check_out();
            mPointerSprite = mPointerSpritePool->check_out();

            auto extent = mSwapchain->extent();
            auto playField = dst::Vector2(extent.width, extent.height);
            // mPlayer = Player(mSpritePools.find("Player")->second.check_out());
            mPlayer = Player(mPlayerSpritePool->check_out());
            mPlayer.spawn(playField * 0.5f);

            mPlayer.em = &mEntityManager_ex;
            // auto& bulletSpritePool = mSpritePools.find("Bullet")->second;
            auto& bulletSpritePool = *mBulletSpritePool;
            while (bulletSpritePool.available_count() > 0) {
                mEntityManager_ex.create<Bullet>(bulletSpritePool.check_out());
            }

            mEntityManager_ex.lock();
        }

        void update(const dst::Clock& clock, const dst::Input& input) override final
        {
            if (input.keyboard().down(dst::Keyboard::Key::Escape)) {
                stop();
            }

            mGameInfo = "Hi Score : 0";
            mWindow->name("Dynamic_Static VK.07.ShapeBlaster        " + mGameInfo);

            auto extent = mSwapchain->extent();
            auto playField = dst::Vector2(extent.width, extent.height);

            mPointerSprite->position = input.mouse().position();
            mPointerSprite->position.y = playField.y - mPointerSprite->position.y;

            mPlayer.update(clock, input, playField);
            mEntityManager_ex.update(clock, input, playField);

            // for (auto& spritePool : mSpritePools) {
            //     spritePool.second.update(playField);
            // }

            mPlayerSpritePool->update(playField);
            mPointerSpritePool->update(playField);
            mBulletSpritePool->update(playField);
        }

        void record_command_buffer(dst::vlkn::Command::Buffer& commandBuffer, const dst::Clock& clock) override final
        {
            // for (auto& spritePool : mSpritePools) {
            //     spritePool.second.draw(commandBuffer);
            // }

            mPlayerSpritePool->draw(commandBuffer);
            mPointerSpritePool->draw(commandBuffer);
            mBulletSpritePool->draw(commandBuffer);
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
