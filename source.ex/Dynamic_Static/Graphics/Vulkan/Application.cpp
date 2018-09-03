
/*
==========================================
  Copyright (c) 2016-2018 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "Dynamic_Static/Graphics/Vulkan/Application.hpp"
#include "Dynamic_Static/Graphics/Vulkan/CommandBuffer.hpp"
#include "Dynamic_Static/Graphics/Vulkan/CommandPool.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Device.hpp"
#include "Dynamic_Static/Graphics/Vulkan/DeviceMemory.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Fence.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Framebuffer.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Image.hpp"
#include "Dynamic_Static/Graphics/Vulkan/ImageView.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Instance.hpp"
#include "Dynamic_Static/Graphics/Vulkan/PhysicalDevice.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Queue.hpp"
#include "Dynamic_Static/Graphics/Vulkan/RenderPass.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Semaphore.hpp"
#include "Dynamic_Static/Graphics/Vulkan/SurfaceKHR.hpp"
#include "Dynamic_Static/Graphics/Vulkan/SwapchainKHR.hpp"

#include <array>
#include <stdexcept>

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    Application::Application()
    {
    }

    Application::~Application()
    {
    }

    void Application::start()
    {
        std::vector<const char*> layers;
        std::vector<const char*> instanceExtensions {
            VK_KHR_SURFACE_EXTENSION_NAME,
            #ifdef DYNAMIC_STATIC_WINDOWS
            VK_KHR_WIN32_SURFACE_EXTENSION_NAME,
            #endif
        };
        std::vector<const char*> deviceExtensions {
            VK_KHR_SWAPCHAIN_EXTENSION_NAME,
        };
        create_instance(layers, instanceExtensions);
        create_window();
        create_surface();
        create_device(deviceExtensions);
        create_swapchain();
        create_swapchain_render_pass();
        create_swapchain_command_buffers();
        create_swapchain_semaphores();
        create_swapchain_fences();
        create_resources();
        mDevice->wait_idle();
        mRunning = true;
        mWindow->on_close = [&](const auto&) { mRunning = false; };
        while (mRunning) {
            mClock.update();
            sys::Window::poll_events();
            update(mClock, mWindow->get_input());
            validate_swapchain(mClock);
            update_graphics(mClock);
            update_swapchain_command_buffers(mClock);
            present_swapchain(mClock);
        }
        mDevice->wait_idle();
        destroy_resources();
        mDevice->wait_idle();
    }

    void Application::stop()
    {
        mRunning = false;
    }

    void Application::create_instance(
        std::vector<const char*>& layers,
        std::vector<const char*>& extensions,
        VkDebugReportFlagsEXT debugReportFlags
    )
    {
        Instance::CreateInfo instanceCreateInfo { };
        instanceCreateInfo.pApplicationInfo = &mInfo;
        instanceCreateInfo.enabledLayerCount = static_cast<uint32_t>(layers.size());
        instanceCreateInfo.ppEnabledLayerNames = layers.data();
        instanceCreateInfo.enabledExtensionCount = static_cast<uint32_t>(extensions.size());
        instanceCreateInfo.ppEnabledExtensionNames = extensions.data();
        mInstance = create<Instance>(instanceCreateInfo, debugReportFlags);
    }

    void Application::create_window()
    {
        sys::Window::Info windowInfo { };
        windowInfo.name = mInfo.pApplicationName;
        mWindow = std::make_shared<sys::Window>(windowInfo);
    }

    void Application::create_surface()
    {
        auto& physicalDevice = mInstance->get_physical_devices()[0];
        mSurface = physicalDevice.create<SurfaceKHR>(mWindow);
    }

    void Application::create_device(std::vector<const char*> extensions)
    {
        auto& physicalDevice = mInstance->get_physical_devices()[0];
        auto queueFamilyIndices = physicalDevice.get_supported_queue_family_indices(VK_QUEUE_GRAPHICS_BIT);
        float priority = 0;
        Queue::CreateInfo queueCreateInfo { };
        queueCreateInfo.queueCount = 1;
        queueCreateInfo.pQueuePriorities = &priority;
        queueCreateInfo.queueFamilyIndex = queueFamilyIndices[0];
        Device::CreateInfo deviceCreateInfo { };
        deviceCreateInfo.enabledExtensionCount = static_cast<uint32_t>(extensions.size());
        deviceCreateInfo.ppEnabledExtensionNames = extensions.data();
        deviceCreateInfo.queueCreateInfoCount = 1;
        deviceCreateInfo.pQueueCreateInfos = &queueCreateInfo;
        deviceCreateInfo.pEnabledFeatures = &physicalDevice.get_features();
        mDevice = physicalDevice.create<Device>(deviceCreateInfo);
    }

    void Application::create_swapchain()
    {
        auto& physicalDevice = mInstance->get_physical_devices()[0];
        auto queueFamilyIndex = mDevice->get_queue_families()[0].get_index();
        VkBool32 presentationSupported = VK_FALSE;
        dst_vk(vkGetPhysicalDeviceSurfaceSupportKHR(physicalDevice, queueFamilyIndex, *mSurface, &presentationSupported));
        if (!presentationSupported) {
            throw std::runtime_error("\"" + mSurface->get_name() + "\" doesn't support presentation");
        }
        mSwapchain = mDevice->create<SwapchainKHR>(mSurface);
    }

    void Application::create_swapchain_render_pass()
    {
        VkAttachmentDescription colorAttachmentDescription { };
        colorAttachmentDescription.format = mSwapchain->get_format();
        colorAttachmentDescription.samples = VK_SAMPLE_COUNT_1_BIT;
        colorAttachmentDescription.loadOp = VK_ATTACHMENT_LOAD_OP_CLEAR;
        colorAttachmentDescription.storeOp = VK_ATTACHMENT_STORE_OP_STORE;
        colorAttachmentDescription.initialLayout = VK_IMAGE_LAYOUT_UNDEFINED;
        colorAttachmentDescription.finalLayout = VK_IMAGE_LAYOUT_PRESENT_SRC_KHR;
        VkAttachmentReference colorAttachmentReference { };
        colorAttachmentReference.attachment = 0;
        colorAttachmentReference.layout = VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL;

        if (mSwapchainDepthFormat) {
            std::array<VkFormat, 4> depthFormats {
                mSwapchainDepthFormat,
                VK_FORMAT_D32_SFLOAT,
                VK_FORMAT_D32_SFLOAT_S8_UINT,
                VK_FORMAT_D24_UNORM_S8_UINT,
            };
            mSwapchainDepthFormat = VK_FORMAT_UNDEFINED;
            for (auto format : depthFormats) {
                if (mInstance->get_physical_devices()[0].get_image_format_support(
                        format,
                        VK_IMAGE_TILING_OPTIMAL,
                        VK_FORMAT_FEATURE_DEPTH_STENCIL_ATTACHMENT_BIT
                    )) {
                    mSwapchainDepthFormat = format;
                    break;
                }
            }
            assert(mSwapchainDepthFormat);
        }

        VkAttachmentDescription depthAttachmentDescription { };
        depthAttachmentDescription.format = mSwapchainDepthFormat;
        depthAttachmentDescription.samples = VK_SAMPLE_COUNT_1_BIT;
        depthAttachmentDescription.loadOp = VK_ATTACHMENT_LOAD_OP_CLEAR;
        depthAttachmentDescription.storeOp = VK_ATTACHMENT_STORE_OP_DONT_CARE;
        depthAttachmentDescription.initialLayout = VK_IMAGE_LAYOUT_UNDEFINED;
        depthAttachmentDescription.finalLayout = VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL;
        VkAttachmentReference depthAttachmentReference { };
        depthAttachmentReference.attachment = 1;
        depthAttachmentReference.layout = VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL;

        std::array<VkAttachmentDescription, 2> attachmentDescriptions {
            colorAttachmentDescription,
            depthAttachmentDescription,
        };

        VkSubpassDescription subpassDescription { };
        subpassDescription.pipelineBindPoint = VK_PIPELINE_BIND_POINT_GRAPHICS;
        subpassDescription.colorAttachmentCount = 1;
        subpassDescription.pColorAttachments = &colorAttachmentReference;
        subpassDescription.pDepthStencilAttachment = mSwapchainDepthFormat ? &depthAttachmentReference : nullptr;

        RenderPass::CreateInfo renderPassCreateInfo { };
        renderPassCreateInfo.attachmentCount = mSwapchainDepthFormat ? (uint32_t)attachmentDescriptions.size() : 1;
        renderPassCreateInfo.pAttachments = attachmentDescriptions.data();
        renderPassCreateInfo.subpassCount = 1;
        renderPassCreateInfo.pSubpasses = &subpassDescription;
        mSwapchainRenderPass = mDevice->create<RenderPass>(renderPassCreateInfo);
    }

    void Application::create_swapchain_command_buffers()
    {
        CommandPool::CreateInfo commandPoolCreateInfo { };
        commandPoolCreateInfo.flags = VK_COMMAND_POOL_CREATE_RESET_COMMAND_BUFFER_BIT;
        commandPoolCreateInfo.queueFamilyIndex = mDevice->get_queue_families()[0].get_index();
        auto commandPool = mDevice->create<CommandPool>(commandPoolCreateInfo);
        auto imageCount = mSwapchain->get_images().size();
        mSwapchainCommandBuffers.reserve(imageCount);
        for (int i = 0; i < imageCount; ++i) {
            auto commandBuffer = commandPool->allocate<CommandBuffer>();
            mSwapchainCommandBuffers.push_back(commandBuffer);
        }
    }

    void Application::create_swapchain_semaphores()
    {
        mSwapchainImageAcquiredSemaphore = mDevice->create<Semaphore>();
        mSwapchainRenderCompleteSemphore = mDevice->create<Semaphore>();
    }

    void Application::create_swapchain_fences()
    {
        Fence::CreateInfo fenceCreateInfo { };
        fenceCreateInfo.flags = VK_FENCE_CREATE_SIGNALED_BIT;
        for (int i = 0; i < mSwapchain->get_images().size(); ++i) {
            mSwapchainFences.push_back(mDevice->create<Fence>(fenceCreateInfo));
        }
    }

    void Application::create_resources()
    {
    }

    void Application::update(
        const Clock& clock,
        const sys::Input& input
    )
    {
    }

    void Application::validate_swapchain(const Clock& clock)
    {
        // TODO : Testing for validation, then doing validation is kind of an
        //  annoying little dance, but Framebuffer recreation needs to be
        //  triggered somehow...there's an Event for resize...probably move
        //  Framebuffer recreation there.
        if (!mSwapchain->is_valid() || mSwapchainFramebuffers.empty()) {
            mDevice->get_queue_families()[0].get_queues()[0].wait_idle();
            mSwapchain->validate();
            if (mSwapchain->is_valid()) {
                if (mSwapchainDepthFormat) {
                    Image::CreateInfo depthImageCreateInfo { };
                    depthImageCreateInfo.imageType = VK_IMAGE_TYPE_2D;
                    depthImageCreateInfo.extent.width = mSwapchain->get_extent().width;
                    depthImageCreateInfo.extent.height = mSwapchain->get_extent().height;
                    depthImageCreateInfo.format = mSwapchainDepthFormat;
                    depthImageCreateInfo.initialLayout = VK_IMAGE_LAYOUT_UNDEFINED;
                    depthImageCreateInfo.usage = VK_IMAGE_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT;
                    mSwapchainDepthImage = mDevice->create<Image>(depthImageCreateInfo);
                    DeviceMemory::allocate_resource_memory(mSwapchainDepthImage.get(), VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT);
                }
                mSwapchainFramebuffers.clear();
                mSwapchainFramebuffers.reserve(mSwapchain->get_images().size());
                for (auto& image : mSwapchain->get_images()) {
                    std::array<VkImageView, 2> attachments { };
                    attachments[0] = image.get_view();
                    if (mSwapchainDepthImage) {
                        attachments[1] = mSwapchainDepthImage->get_view();
                    }
                    Framebuffer::CreateInfo framebufferCreateInfo { };
                    framebufferCreateInfo.renderPass = *mSwapchainRenderPass;
                    framebufferCreateInfo.attachmentCount = mSwapchainDepthImage ? (uint32_t)attachments.size() : 1;
                    framebufferCreateInfo.pAttachments = attachments.data();
                    framebufferCreateInfo.width = image.get_extent().width;
                    framebufferCreateInfo.height = image.get_extent().height;
                    framebufferCreateInfo.layers = 1;
                    mSwapchainFramebuffers.push_back(mDevice->create<Framebuffer>(framebufferCreateInfo));
                }
            }
        }
    }

    void Application::update_graphics(const Clock& clock)
    {
    }

    void Application::update_swapchain_command_buffers(const Clock& clock)
    {
        if (mSwapchain->is_valid()) {
            auto result = mSwapchain->acquire_next_image(UINT64_MAX, *mSwapchainImageAcquiredSemaphore);
            if (result == VK_SUCCESS || result == VK_SUBOPTIMAL_KHR) {
                auto imageIndex = mSwapchain->get_current_image_index();
                const auto& fence = mSwapchainFences[imageIndex];
                dst_vk(vkWaitForFences(*mDevice, 1, &fence->get_handle(), VK_TRUE, UINT64_MAX));
                dst_vk(vkResetFences(*mDevice, 1, &fence->get_handle()));
                const auto& commandBuffer = *mSwapchainCommandBuffers[imageIndex];
                record_swapchain_command_buffer(clock, commandBuffer);
                submit_swapchain_command_buffer(clock, commandBuffer);
            }
        }
    }

    void Application::record_swapchain_command_buffer(
        const Clock& clock,
        const CommandBuffer& commandBuffer
    )
    {
        const auto& extent = mSwapchain->get_extent();
        CommandBuffer::BeginInfo commandBufferBeginInfo { };
        commandBufferBeginInfo.flags = VK_COMMAND_BUFFER_USAGE_SIMULTANEOUS_USE_BIT;
        dst_vk(vkBeginCommandBuffer(commandBuffer, &commandBufferBeginInfo));

        std::array<VkClearValue, 2> clearValues { };
        memcpy(&clearValues[0].color, &mClearColor, sizeof(VkClearColorValue));
        clearValues[1].depthStencil = { 1, 0 };
        RenderPass::BeginInfo renderPassBeginInfo { };
        renderPassBeginInfo.renderPass = *mSwapchainRenderPass;
        renderPassBeginInfo.framebuffer = *mSwapchainFramebuffers[mSwapchain->get_current_image_index()];
        renderPassBeginInfo.renderArea.extent = extent;
        renderPassBeginInfo.clearValueCount = mSwapchainDepthFormat ? (uint32_t)clearValues.size() : 1;
        renderPassBeginInfo.pClearValues = clearValues.data();
        vkCmdBeginRenderPass(commandBuffer, &renderPassBeginInfo, VK_SUBPASS_CONTENTS_INLINE);

        VkViewport viewport { };
        viewport.width = (float)extent.width;
        viewport.height = (float)extent.height;
        viewport.minDepth = 0;
        viewport.maxDepth = 1;
        VkRect2D scissor { };
        scissor.extent = extent;
        vkCmdSetViewport(commandBuffer, 0, 1, &viewport);
        vkCmdSetScissor(commandBuffer, 0, 1, &scissor);
        record_swapchain_render_pass(clock, commandBuffer);
        vkCmdEndRenderPass(commandBuffer);
        dst_vk(vkEndCommandBuffer(commandBuffer));
    }

    void Application::record_swapchain_render_pass(
        const Clock& clock,
        const CommandBuffer& commandBuffer
    )
    {
    }

    void Application::submit_swapchain_command_buffer(
        const Clock& clock,
        const CommandBuffer& commandBuffer
    )
    {
        VkPipelineStageFlags waitStages[] { VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT };
        Queue::SubmitInfo submitInfo { };
        submitInfo.waitSemaphoreCount = 1;
        submitInfo.pWaitSemaphores = &mSwapchainImageAcquiredSemaphore->get_handle();
        submitInfo.pWaitDstStageMask = waitStages;
        submitInfo.commandBufferCount = 1;
        submitInfo.pCommandBuffers = &commandBuffer.get_handle();
        submitInfo.signalSemaphoreCount = 1;
        submitInfo.pSignalSemaphores = &mSwapchainRenderCompleteSemphore->get_handle();
        const auto& queue = mDevice->get_queue_families()[0].get_queues()[0];
        dst_vk(vkQueueSubmit(queue, 1, &submitInfo, *mSwapchainFences[mSwapchain->get_current_image_index()]));
    }

    void Application::present_swapchain(const Clock& clock)
    {
        if (mSwapchain->is_valid()) {
            auto imageIndex = mSwapchain->get_current_image_index();
            Queue::PresentInfoKHR presentInfo { };
            presentInfo.waitSemaphoreCount = 1;
            presentInfo.pWaitSemaphores = &mSwapchainRenderCompleteSemphore->get_handle();
            presentInfo.swapchainCount = 1;
            presentInfo.pSwapchains = &mSwapchain->get_handle();
            presentInfo.pImageIndices = &imageIndex;
            const auto& queue = mDevice->get_queue_families()[0].get_queues()[0];
            dst_vk(vkQueuePresentKHR(queue, &presentInfo));
        }
    }

    void Application::destroy_resources()
    {
    }

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
