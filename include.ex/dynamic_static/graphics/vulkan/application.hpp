
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
#include "dynamic_static/graphics/vulkan/managed.hpp"
#include "dynamic_static/graphics/vulkan/render-target.hpp"

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
        std::vector<const char*> deviceExtensions {
            VK_KHR_SWAPCHAIN_EXTENSION_NAME,
        };
    };

    /**
    TODO : Documentation
    */
    Application(const sys::Window::Info& windowInfo, Info applicationInfo);

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

    Managed<VkInstance> mInstance;                                      //!< TODO : Documentation
    std::vector<Managed<VkPhysicalDevice>> mPhysicalDevices;            //!< TODO : Documentation
    Managed<VkDevice> mDevice;                                          //!< TODO : Documentation
    Managed<VkQueue> mComputeQueue;                                     //!< TODO : Documentation
    Managed<VkQueue> mGraphicsQueue;                                    //!< TODO : Documentation
    Managed<VkQueue> mTransferQueue;                                    //!< TODO : Documentation
    Managed<VkSurfaceKHR> mSurface;                                     //!< TODO : Documentation
    Managed<VkSwapchainKHR> mSwapchain;                                 //!< TODO : Documentation
    Managed<VkRenderPass> mRenderPass;                                  //!< TODO : Documentation
    std::vector<RenderTarget> mRenderTargets;                           //!< TODO : Documentation
    Managed<VkCommandBuffer> mCommandBuffer;                            //!< TODO : Documentation
    Managed<VkSemaphore> mImageAcquiredSemaphore;                       //!< TODO : Documentation
    Managed<VkSemaphore> mImageRenderedSemaphore;                       //!< TODO : Documentation
    VkDebugUtilsMessengerEXT mVkDebugUtilsMessenger { VK_NULL_HANDLE }; //!< TODO : Documentation
};

} // namespace vk
} // namespace dst
