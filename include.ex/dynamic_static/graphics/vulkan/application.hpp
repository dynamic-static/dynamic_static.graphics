
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

    /**
    TODO : Documentation
    */
    const Managed<VkInstance>& get_instance() const;

    /**
    TODO : Documentation
    */
    const std::vector<Managed<VkPhysicalDevice>>& get_physical_devices() const;

    /**
    TODO : Documentation
    */
    const Managed<VkPhysicalDevice>& get_physical_device() const;

    /**
    TODO : Documentation
    */
    const std::vector<Managed<VkDevice>>& get_devices() const;

    /**
    TODO : Documentation
    */
    const Managed<VkDevice>& get_device() const;

    /**
    TODO : Documentation
    */
    const Managed<VkQueue>& get_general_queue() const;

    /**
    TODO : Documentation
    */
    const Managed<VkQueue>& get_compute_queue() const;

    /**
    TODO : Documentation
    */
    const Managed<VkQueue>& get_graphics_queue() const;

    /**
    TODO : Documentation
    */
    const Managed<VkQueue>& get_transfer_queue() const;

    /**
    TODO : Documentation
    */
    const Managed<VkSurfaceKHR>& get_surface() const;

    /**
    TODO : Documentation
    */
    virtual VkSurfaceFormatKHR get_surface_format() const;

    /**
    TODO : Documentation
    */
    virtual VkPresentModeKHR get_surface_present_mode() const;

    /**
    TODO : Documentation
    */
    const Managed<VkSwapchainKHR>& get_swapchain() const;

    /**
    TODO : Documentation
    */
    virtual VkFormat get_swapchain_depth_format() const;

    /**
    TODO : Documentation
    */
    const Managed<VkRenderPass>& get_swapchain_render_pass() const;

    /**
    TODO : Documentation
    */
    const std::vector<Managed<VkFramebuffer>>& get_swapchain_framebuffers() const;

    /**
    TODO : Documentation
    */
    const std::vector<Managed<VkCommandBuffer>>& get_swapchain_command_buffers() const;

    /**
    TODO : Documentation
    */
    const Managed<VkSemaphore>& get_swapchain_image_acquired_semaphore() const;

    /**
    TODO : Documentation
    */
    const Managed<VkSemaphore>& get_swapchain_image_rendered_semaphore() const;

protected:
    /**
    TODO : Documentation
    */
    virtual bool setup() override;

    /**
    TODO : Documentation
    */
    virtual Managed<VkInstance> setup_instance(Info applicationInfo) const;

    /**
    TODO : Documentation
    */
    virtual VkDebugUtilsMessengerEXT setup_debug_utils_messenger() const;

    /**
    TODO : Documentation
    */
    virtual std::vector<Managed<VkPhysicalDevice>> setup_physical_devices() const;

    /**
    TODO : Documentation
    */
    virtual std::vector<Managed<VkDevice>> setup_devices(Info applicationInfo) const;

    /**
    TODO : Documentation
    */
    virtual Managed<VkSurfaceKHR> setup_surface() const;

    /**
    TODO : Documentation
    */
    virtual Managed<VkSwapchainKHR> setup_swapchain() const;

    /**
    TODO : Documentation
    */
    virtual Managed<VkRenderPass> setup_swapchain_render_pass() const;

    /**
    TODO : Documentation
    */
    virtual std::vector<Managed<VkFramebuffer>> setup_swapchain_framebuffers() const;

    /**
    TODO : Documentation
    */
    virtual std::vector<Managed<VkCommandBuffer>> setup_swapchain_command_buffers() const;

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

private:
    Managed<VkInstance> mInstance;
    VkDebugUtilsMessengerEXT mVkDebugUtilsMessenger { VK_NULL_HANDLE };
    std::vector<Managed<VkPhysicalDevice>> mPhysicalDevices;
    std::vector<Managed<VkDevice>> mDevices;
    Managed<VkQueue> mGeneralQueue;
    Managed<VkQueue> mComputeQueue;
    Managed<VkQueue> mGraphicsQueue;
    Managed<VkQueue> mTransferQueue;
    Managed<VkSurfaceKHR> mSurface;
    Managed<VkSwapchainKHR> mSwapchain;
    Managed<VkRenderPass> mSwapchainRenderPass;
    std::vector<Managed<VkFramebuffer>> mSwapchainFramebuffers;
    std::vector<Managed<VkCommandBuffer>> mSwapchainCommandBuffers;
    Managed<VkSemaphore> mSwapchainImageAcquiredSemaphore;
    Managed<VkSemaphore> mSwapchainImageRenderedSemaphore;

    sys::Window::Info mWindowInfo;
    Info mApplicationInfo;

    #if 0
    Managed<VkDevice> mDevice;
    Managed<VkRenderPass> mRenderPass;
    std::vector<RenderTarget> mRenderTargets;
    std::vector<Managed<VkCommandBuffer>> mCommandBuffers;
    Managed<VkSemaphore> mImageAcquiredSemaphore;
    Managed<VkSemaphore> mImageRenderedSemaphore;
    #endif
};

} // namespace vk
} // namespace dst
