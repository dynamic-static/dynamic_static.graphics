
/*
==========================================
  Copyright (c) 2017-2020 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "dynamic_static/graphics/application.hpp"
#include "dynamic_static/graphics/vulkan/defines.hpp"
#include "dynamic_static/graphics/vulkan/managed-handles/managed-buffer.hpp"

#include <string>
#include <vector>

namespace dst {
namespace vk {

/**
TODO : Documentation
*/
class Application
    : public gfx::Application
{
public:
    /**
    TODO : Documentation
    */
    struct Info
        : public VkApplicationInfo
    {
    public:
        std::vector<const char*> instanceLayers;
        std::vector<const char*> instanceExtensions {
            VK_KHR_SURFACE_EXTENSION_NAME,
            #ifdef VK_USE_PLATFORM_WIN32_KHR
            VK_KHR_WIN32_SURFACE_EXTENSION_NAME,
            #elif VK_USE_PLATFORM_XLIB_KHR
            VK_KHR_XLIB_SURFACE_EXTENSION_NAME,
            #endif
        };
        std::vector<std::string> deviceExtensions;
    };

    /**
    TODO : Documentation
    */
    Application(const sys::Window::Info& windowInfo, const Info& applicationInfo);

protected:
    /**
    TODO : Documentation
    */
    virtual void setup() override;

    /**
    TODO : Documentation
    */
    virtual void teardown() override;

    /**
    TODO : Documentation
    */
    virtual void pre_update(const dst::Clock& clock, const dst::sys::Input& input) override;

    /**
    TODO : Documentation
    */
    virtual void update(const dst::Clock& clock, const dst::sys::Input& input) override;

    /**
    TODO : Documentation
    */
    virtual void post_update(const dst::Clock& clock, const dst::sys::Input& input) override;

    /**
    TODO : Documentation
    */
    virtual void pre_render(const dst::Clock& clock) override;

    /**
    TODO : Documentation
    */
    virtual void render(const dst::Clock& clock) override;

    /**
    TODO : Documentation
    */
    virtual void post_render(const dst::Clock& clock) override;

    Managed<VkInstance> mInstance; //!< TODO : Documentation
    Managed<VkDevice> mDevice;     //!< TODO : Documentation
};

} // namespace vk
} // namespace dst
