
/*
==========================================
  Copyright (c) 2016-2018 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "Dynamic_Static.Graphics.hpp"

class ExampleTriangle final
    : public dst::vk::Application
{
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
};

int main()
{
    ExampleTriangle app;
    app.start();
    return 0;
}
