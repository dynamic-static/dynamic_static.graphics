
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

#include "Sprite_ex.Manager.hpp"

#include "Dynamic_Static/Graphics/Vulkan.hpp"

#include <stdexcept>

namespace ShapeBlaster_ex {

    class Game final
        : public dst::vlkn::Application
    {
    private:
        std::string mGameInfo;
        Sprite::Manager mSpriteManager;
        Sprite* mPlayerSprite { nullptr };
        Sprite* mWanderer0 { nullptr };
        Sprite* mWanderer1 { nullptr };

    public:
        Game()
        {
            name("Dynamic_Static VK.07.ShapeBlaster");
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

            mSpriteManager = Sprite::Manager(*mDevice, *mRenderPass, *mGraphicsQueue);
            mPlayerSprite = mSpriteManager.check_out("Player.png");
            mWanderer0 = mSpriteManager.check_out("Wanderer.png");
            mWanderer1 = mSpriteManager.check_out("Wanderer.png");
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
            mWanderer0->position = mPlayerSprite->position + dst::Vector2::One * 4;
            mWanderer1->position = mWanderer0->position + dst::Vector2::One * 4;

            mSpriteManager.update();
        }

        void record_command_buffer(dst::vlkn::Command::Buffer& commandBuffer, const dst::Clock& clock) override final
        {
            mSpriteManager.draw(commandBuffer);
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
