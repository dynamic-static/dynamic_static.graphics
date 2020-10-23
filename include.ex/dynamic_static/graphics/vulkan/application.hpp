
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
#include "dynamic_static/graphics/vulkan/default.hpp"
#include "dynamic_static/graphics/vulkan/defines.hpp"
#include "dynamic_static/graphics/vulkan/managed.hpp"

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
    Application(
        const sys::Window::Info& windowInfo,
        const VkApplicationInfo& applicationInfo = get_default<VkApplicationInfo>(),
        const std::vector<const char*>& layers = { },
        const std::vector<const char*>& instanceExtensions = {
            VK_KHR_SURFACE_EXTENSION_NAME,
            #ifdef VK_USE_PLATFORM_WIN32_KHR
            VK_KHR_WIN32_SURFACE_EXTENSION_NAME,
            #elif VK_USE_PLATFORM_XLIB_KHR
            VK_KHR_XLIB_SURFACE_EXTENSION_NAME,
            #endif
        },
        const std::vector<const char*>& deviceExtensions = {
            VK_KHR_SWAPCHAIN_EXTENSION_NAME,
        }
    );

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
    virtual Managed<VkInstance> setup_instance(
        const VkApplicationInfo& applicationInfo,
        std::vector<const char*>& layers,
        std::vector<const char*>& extensions
    ) const;

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
    virtual std::vector<Managed<VkDevice>> setup_devices(std::vector<const char*>& extensions) const;

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

    /**
    TODO : Documentation
    */
    template <typename FunctionType>
    inline void process_immediately(FunctionType function)
    {
        // TODO : This function's no good...it would be much nicer to have a mechanism
        //  in place that would provide a "utility" VkCommandBuffer from a VkCommandPool
        //  associated with the calling thread...this isn't really the right place for
        //  something like that...this'll do for now...
        if (!mImmediateCommandBuffer) {
            auto commandPoolCreateInfo = get_default<VkCommandPoolCreateInfo>();
            commandPoolCreateInfo.flags = VK_COMMAND_POOL_CREATE_RESET_COMMAND_BUFFER_BIT | VK_COMMAND_POOL_CREATE_TRANSIENT_BIT;
            commandPoolCreateInfo.queueFamilyIndex = mGeneralQueue.get<Managed<VkDeviceQueueCreateInfo>>()->queueFamilyIndex;
            Managed<VkCommandPool> commandPool;
            dst_vk(create<Managed<VkCommandPool>>(get_device(), &commandPoolCreateInfo, nullptr, &commandPool));
            auto commandBufferAllocateInfo = get_default<VkCommandBufferAllocateInfo>();
            commandBufferAllocateInfo.commandPool = commandPool;
            commandBufferAllocateInfo.commandBufferCount = 1;
            dst_vk(allocate<Managed<VkCommandBuffer>>(get_device(), &commandBufferAllocateInfo, &mImmediateCommandBuffer));
        }
        auto commandBufferBeginInfo = get_default<VkCommandBufferBeginInfo>();
        commandBufferBeginInfo.flags = VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT;
        dst_vk(vkBeginCommandBuffer(mImmediateCommandBuffer, &commandBufferBeginInfo));
        function(mImmediateCommandBuffer);
        dst_vk(vkEndCommandBuffer(mImmediateCommandBuffer));
        auto submitInfo = get_default<VkSubmitInfo>();
        submitInfo.commandBufferCount = 1;
        submitInfo.pCommandBuffers = &*mImmediateCommandBuffer;
        dst_vk(vkQueueSubmit(mGeneralQueue, 1, &submitInfo, VK_NULL_HANDLE));
        dst_vk(vkQueueWaitIdle(mGeneralQueue));
    }

private:
    Managed<VkApplicationInfo> mApplicationInfo { get_default<VkApplicationInfo>() };
    std::vector<const char*> mLayers;
    std::vector<const char*> mInstanceExtensions;
    std::vector<const char*> mDeviceExtensions;
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
    Managed<VkCommandBuffer> mImmediateCommandBuffer;
};

} // namespace vk
} // namespace dst
