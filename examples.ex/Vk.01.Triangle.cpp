
/*
==========================================
  Copyright (c) 2016-2018 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "Dynamic_Static.Graphics.hpp"

#include <memory>

class ExampleTriangle final
    : public dst::vk::Application
{
private:
    std::shared_ptr<dst::vk::Pipeline> mPipeline;

public:
    ExampleTriangle()
    {
        mInfo.pApplicationName = "Dynamic_Static Vk.01.Triangle";
    }

private:
    void create_instance(
        std::vector<const char*>& layers,
        std::vector<const char*>& extensions,
        VkDebugReportFlagsEXT debugReportFlags
    ) override
    {
        debugReportFlags =
            0
            // | VK_DEBUG_REPORT_INFORMATION_BIT_EXT
            // | VK_DEBUG_REPORT_DEBUG_BIT_EXT
            | VK_DEBUG_REPORT_PERFORMANCE_WARNING_BIT_EXT
            | VK_DEBUG_REPORT_WARNING_BIT_EXT
            | VK_DEBUG_REPORT_ERROR_BIT_EXT
            ;
        dst::vk::Application::create_instance(layers, extensions, debugReportFlags);
    }

    void create_resources() override
    {

    }

    void update(
        const dst::Clock& clock,
        const dst::sys::Input& input
    ) override
    {
        using namespace dst::sys;
        if (input.keyboard.down(Keyboard::Key::Escape)) {
            stop();
        }
    }

    void record_swapchain_render_pass(
        const dst::Clock& clock,
        const dst::vk::CommandBuffer& commandBuffer
    ) override
    {
        // vkCmdBindPipeline(commandBuffer, VK_PIPELINE_BIND_POINT_GRAPHICS, VK_NULL_HANDLE);
        // vkCmdDraw(commandBuffer, 3, 1, 0, 0);
    }
};

int main()
{
    ExampleTriangle app;
    app.start();
    return 0;
}
