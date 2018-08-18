
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
        mDebugReportFlags =
            0
            // | VK_DEBUG_REPORT_INFORMATION_BIT_EXT
            // | VK_DEBUG_REPORT_DEBUG_BIT_EXT
            | VK_DEBUG_REPORT_PERFORMANCE_WARNING_BIT_EXT
            | VK_DEBUG_REPORT_WARNING_BIT_EXT
            | VK_DEBUG_REPORT_ERROR_BIT_EXT
            ;
    }

private:
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

    void draw(const dst::Clock& clock) override
    {

    }
};

int main()
{
    ExampleTriangle app;
    app.start();
    return 0;
}
