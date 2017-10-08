
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

#include "Dynamic_Static/Graphics/Vulkan.hpp"

#include <stdexcept>

namespace ShapeBlaster_ex {

    class Game final
        : public dst::vlkn::Application
    {
    private:
        std::string mGameInfo;

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
        }

        void update(const dst::Clock& clock, const dst::Input& input) override final
        {
            if (input.keyboard().down(dst::Keyboard::Key::Escape)) {
                stop();
            }

            mGameInfo = "Hi Score : 0";
            mWindow->name("Dynamic_Static VK.07.ShapeBlaster " + mGameInfo);
        }

        void render(const dst::Clock& clock) override final
        {

        }

        void record_command_buffer(dst::vlkn::Command::Buffer& commandBuffer, const dst::Clock& clock) override final
        {

        }

        void submit_command_buffer() override final
        {
            dst::vlkn::Application::submit_command_buffer();
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
