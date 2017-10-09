
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

#include "Sprite_ex.Pipeline.hpp"
#include "Sprite_ex.Pool.hpp"

#include "Dynamic_Static/Core/FileSystem.hpp"
#include "Dynamic_Static/Graphics/Vulkan.hpp"

#include <stdexcept>

namespace ShapeBlaster_ex {

    class Game final
        : public dst::vlkn::Application
    {
    private:
        std::string mGameInfo;

        Sprite::Pipeline mSpritePipeline;
        Sprite::Pool mPlayerSpritePool;
        Sprite::Pool mBulletSpritePool;
        Sprite::Pool mSeekerSpritePool;
        Sprite::Pool mWandererSpritePool;
        Sprite::Pool mPointerSpritePool;
        Sprite::Pool mBlackHoleSpritePool;

        Sprite* mPlayerSprite { nullptr };

    public:
        Game()
        {
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

            mSpritePipeline = Sprite::Pipeline(*mDevice, *mRenderPass);
            std::string resourcePath = "../../../examples/resources/ShapeBlaster_AllParts/ShapeBlaster_Part5/ShapeBlaster_Part5Content/Art/";
            auto playerFilePath = dst::Path::combine(resourcePath, "Player.png");
            auto bulletFilePath = dst::Path::combine(resourcePath, "Bullet.png");
            auto seekerFilePath = dst::Path::combine(resourcePath, "Seeker.png");
            auto wandererFilePath = dst::Path::combine(resourcePath, "Wanderer.png");
            auto pointerFilePath = dst::Path::combine(resourcePath, "Pointer.png");
            auto blackHoleFilePath = dst::Path::combine(resourcePath, "Black Hole.png");
            mPlayerSpritePool = Sprite::Pool(*mGraphicsQueue, mSpritePipeline, playerFilePath, 1);
            mBulletSpritePool = Sprite::Pool(*mGraphicsQueue, mSpritePipeline, bulletFilePath, 1);
            mSeekerSpritePool = Sprite::Pool(*mGraphicsQueue, mSpritePipeline, seekerFilePath, 1);
            mWandererSpritePool = Sprite::Pool(*mGraphicsQueue, mSpritePipeline, wandererFilePath, 1);
            mPointerSpritePool = Sprite::Pool(*mGraphicsQueue, mSpritePipeline, pointerFilePath, 1);
            mBlackHoleSpritePool = Sprite::Pool(*mGraphicsQueue, mSpritePipeline, blackHoleFilePath, 1);

            mPlayerSprite = mPlayerSpritePool.check_out();
        }

        void update(const dst::Clock& clock, const dst::Input& input) override final
        {
            if (input.keyboard().down(dst::Keyboard::Key::Escape)) {
                stop();
            }

            mGameInfo = "Hi Score : 0";
            mWindow->name("Dynamic_Static VK.07.ShapeBlaster " + mGameInfo);
            auto move = dst::Vector2::Zero;
            if (input.keyboard().down(dst::Keyboard::Key::RightArrow)) {
                move.x += 0.5f;
                move.y += 0.5f;
            }
            mPlayerSprite->position += move;

            mPlayerSpritePool.update();
            mBulletSpritePool.update();
            mSeekerSpritePool.update();
            mWandererSpritePool.update();
            mPointerSpritePool.update();
            mBlackHoleSpritePool.update();
        }

        void record_command_buffer(dst::vlkn::Command::Buffer& commandBuffer, const dst::Clock& clock) override final
        {
            mPlayerSpritePool.draw(commandBuffer);
            mBulletSpritePool.draw(commandBuffer);
            mSeekerSpritePool.draw(commandBuffer);
            mWandererSpritePool.draw(commandBuffer);
            mPointerSpritePool.draw(commandBuffer);
            mBlackHoleSpritePool.draw(commandBuffer);
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
