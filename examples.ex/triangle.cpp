
/*
==========================================
  Copyright (c) 2017-2020 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "dynamic_static/graphics/vulkan/application.hpp"
#include "dynamic_static/graphics/vulkan/managed.hpp"

class TriangleApplication final
    : public dst::vk::Application
{
public:
    inline TriangleApplication()
        : dst::vk::Application(
            []()
            {
                dst::sys::Window::Info windowInfo { };
                windowInfo.extent = { 1280, 720 };
                windowInfo.pName = "dst::vk::triangle";
                return windowInfo;
            }(),
            []()
            {
                dst::vk::Application::Info applicationInfo { };
                return applicationInfo;
            }()
        )
    {
    }
};

int main(int argc, const char* argv[])
{
    TriangleApplication().start();
    return 0;
}
