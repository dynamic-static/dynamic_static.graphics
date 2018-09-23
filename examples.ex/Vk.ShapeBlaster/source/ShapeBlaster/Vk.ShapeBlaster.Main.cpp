
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

#include "ShapeBlaster/Entity.Manager.hpp"

#include "Dynamic_Static.Graphics.hpp"

#include <memory>

namespace ShapeBlaster {

    class Application final
        : public dst::vk::Application
    {
    private:
        dst::RandomNumberGenerator mRng;
        std::unique_ptr<Entity::Manager> mEntityManager;

    public:
        Application()
        {
            std::cout
                << std::endl
                << "[Esc]        - Quit"              << std::endl
                << "[`]          - Options"           << std::endl
                << "   [W]"                           << std::endl
                << "[A][S][D]    - Move ship"         << std::endl
                << "[Left Mouse] - Enable mouse look" << std::endl
                << std::endl;

            mInfo.pApplicationName = "Vk.ShapeBlaster";
            mClearColor = dst::Color::Black;
        }

    private:
        void create_window(dst::sys::Window::Info& windowInfo) override final
        {
            windowInfo.resolution.x = 1920;
            windowInfo.resolution.y = 1080;
            dst::vk::Application::create_window(windowInfo);
        }

        void create_instance(
            std::vector<const char*>& layers,
            std::vector<const char*>& extensions,
            VkDebugReportFlagsEXT debugReportFlags
        ) override final
        {
            dst::vk::Application::create_instance(
                layers,
                extensions,
                debugReportFlags
                // | VK_DEBUG_REPORT_INFORMATION_BIT_EXT
                // | VK_DEBUG_REPORT_DEBUG_BIT_EXT
                | VK_DEBUG_REPORT_PERFORMANCE_WARNING_BIT_EXT
                | VK_DEBUG_REPORT_WARNING_BIT_EXT
                | VK_DEBUG_REPORT_ERROR_BIT_EXT
            );
        }

        void create_resources() override final
        {
            std::string resourcePath = "../../../examples/resources/ShapeBlaster_AllParts/ShapeBlaster_Part5/ShapeBlaster_Part5Content/";
            mEntityManager = std::make_unique<Entity::Manager>(resourcePath, mDevice, mSwapchainRenderPass);
        }

        void update(
            const dst::Clock& clock,
            const dst::sys::Input& input
        ) override final
        {
            std::this_thread::sleep_for(dst::Millisecond<>(16));
            using namespace dst::sys;
            if (input.keyboard.down(Keyboard::Key::Escape)) {
                stop();
            }
            mWindow->set_cursor_mode(Window::CursorMode::Hidden);
            glm::vec2 playAreaExtent;
            playAreaExtent.x = (float)mSwapchain->get_extent().width;
            playAreaExtent.y = (float)mSwapchain->get_extent().height;
            mEntityManager->update(clock, input, playAreaExtent, mRng);
        }

        void record_swapchain_render_pass(
            const dst::Clock& clock,
            const dst::vk::CommandBuffer& commandBuffer
        ) override final
        {
            mEntityManager->record_draw_cmds(commandBuffer);
        }
    };

} // namespace ShapeBlaster

int main()
{
    ShapeBlaster::Application().start();
    return 0;
}
