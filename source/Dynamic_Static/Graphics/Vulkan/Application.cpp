
/*
==========================================
    Copyright (c) 2017 Dynamic_Static
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "Dynamic_Static/Graphics/Vulkan/Application.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Command.Buffer.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Command.Pool.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Defines.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Device.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Framebuffer.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Image.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Image.View.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Instance.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Memory.hpp"
#include "Dynamic_Static/Graphics/Vulkan/PhysicalDevice.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Queue.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Semaphore.hpp"
#include "Dynamic_Static/Graphics/Vulkan/SurfaceKHR.hpp"
#include "Dynamic_Static/Graphics/Vulkan/SwapchainKHR.hpp"

#include <array>

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    // TODO : This whole object needs a massive overhaul...

    void Application::setup()
    {
        ////////////////////////////////////////////////////////////////
        // Create Instance and PhysicalDevice
        std::vector<std::string> instanceLayers;
        std::vector<std::string> instanceExtensions {
            VK_KHR_SURFACE_EXTENSION_NAME,
            #if defined(DYNAMIC_STATIC_WINDOWS)
            VK_KHR_WIN32_SURFACE_EXTENSION_NAME,
            #elif defined(DYNAMIC_STATIC_LINUX)
            VK_KHR_XLIB_SURFACE_EXTENSION_NAME,
            #endif
        };

        mInstance = create<Instance>(instanceLayers, instanceExtensions, mDebugFlags);
        // NOTE : We're just assuming that the first PhysicalDevice is the one we want.
        //        This won't always be the case, we should check for necessary features.
        mPhysicalDevice = mInstance->physical_devices()[0].get();
        auto apiVersion = mPhysicalDevice->properties().apiVersion;

        ////////////////////////////////////////////////////////////////
        // Create Window and Surface
        Window::Configuration windowConfiguration;
        windowConfiguration.api = API::Vulkan;
        windowConfiguration.apiVersion.major = VK_VERSION_MAJOR(apiVersion);
        windowConfiguration.apiVersion.minor = VK_VERSION_MAJOR(apiVersion);
        windowConfiguration.apiVersion.patch = VK_VERSION_MAJOR(apiVersion);
        windowConfiguration.name = name();
        mWindow = std::make_shared<Window>(windowConfiguration);
        mSurface = mPhysicalDevice->create<SurfaceKHR>(mWindow);

        ////////////////////////////////////////////////////////////////
        // Create Device and Queues
        create_device();
        // std::vector<std::string> deviceLayers;
        // std::vector<std::string> deviceExtensions {
        //     VK_KHR_SWAPCHAIN_EXTENSION_NAME,
        // };
        // 
        // auto queueFamilyFlags = VK_QUEUE_GRAPHICS_BIT;
        // auto queueFamilyIndices = mPhysicalDevice->find_queue_families(queueFamilyFlags);
        // auto queueInfo = Queue::CreateInfo;
        // std::array<float, 1> queuePriorities { };
        // queueInfo.pQueuePriorities = queuePriorities.data();
        // // NOTE : We're assuming that we got at least one Queue capabale of
        // //        graphics, in anything but a toy we want to validate that.
        // queueInfo.queueFamilyIndex = static_cast<uint32_t>(queueFamilyIndices[0]);
        // std::array<VkDeviceQueueCreateInfo, 1> queueInfos { queueInfo };
        // mDevice = mPhysicalDevice->create<dst::vlkn::Device>(deviceLayers, deviceExtensions, queueInfos);
        // // NOTE : We're assuming that the Queue we're choosing for graphics
        // //        is capable of presenting, this may not always be the case.
        // mGraphicsQueue = mDevice->queues()[0][0].get();
        // mPresentQueue = mGraphicsQueue;

        ////////////////////////////////////////////////////////////////
        // Create SwapChain
        std::vector<std::shared_ptr<dst::vlkn::Framebuffer>> framebuffers;
        if (mSurface->presentation_supported(mPresentQueue->family_index())) {
            mSwapchain = mDevice->create<SwapchainKHR>(mSurface);
            framebuffers.reserve(mSwapchain->images().size());
        } else {
            throw std::runtime_error("Surface doesn't support presentation");
        }

        using namespace std::placeholders;
        mSwapchain->on_resized = std::bind(&Application::on_swapchain_resized, this, _1);

        ////////////////////////////////////////////////////////////////
        // Create RenderPass
        VkAttachmentDescription colorAttachmentDescription { };
        colorAttachmentDescription.format = mSwapchain->format();
        colorAttachmentDescription.samples = VK_SAMPLE_COUNT_1_BIT;
        colorAttachmentDescription.loadOp = VK_ATTACHMENT_LOAD_OP_CLEAR;
        colorAttachmentDescription.storeOp = VK_ATTACHMENT_STORE_OP_STORE;
        colorAttachmentDescription.stencilLoadOp = VK_ATTACHMENT_LOAD_OP_DONT_CARE;
        colorAttachmentDescription.stencilStoreOp = VK_ATTACHMENT_STORE_OP_DONT_CARE;
        colorAttachmentDescription.initialLayout = VK_IMAGE_LAYOUT_UNDEFINED;
        colorAttachmentDescription.finalLayout = VK_IMAGE_LAYOUT_PRESENT_SRC_KHR;
        VkAttachmentReference colorAttachmentReference { };
        colorAttachmentReference.attachment = 0;
        colorAttachmentReference.layout = VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL;

        std::array<VkFormat, 3> depthFormats {
            VK_FORMAT_D32_SFLOAT,
            VK_FORMAT_D32_SFLOAT_S8_UINT,
            VK_FORMAT_D24_UNORM_S8_UINT
        };

        mDepthFormat = mPhysicalDevice->find_supported_format(
            depthFormats,
            VK_IMAGE_TILING_OPTIMAL,
            VK_FORMAT_FEATURE_DEPTH_STENCIL_ATTACHMENT_BIT
        );

        VkAttachmentDescription depthAttachmentDescription { };
        depthAttachmentDescription.format = mDepthFormat;
        depthAttachmentDescription.samples = VK_SAMPLE_COUNT_1_BIT;
        depthAttachmentDescription.loadOp = VK_ATTACHMENT_LOAD_OP_CLEAR;
        depthAttachmentDescription.storeOp = VK_ATTACHMENT_STORE_OP_DONT_CARE;
        depthAttachmentDescription.stencilLoadOp = VK_ATTACHMENT_LOAD_OP_DONT_CARE;
        depthAttachmentDescription.stencilStoreOp = VK_ATTACHMENT_STORE_OP_DONT_CARE;
        depthAttachmentDescription.initialLayout = VK_IMAGE_LAYOUT_UNDEFINED;
        depthAttachmentDescription.finalLayout = VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL;
        VkAttachmentReference depthAttachmentReference { };
        depthAttachmentReference.attachment = 1;
        depthAttachmentReference.layout = VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL;

        std::array<VkAttachmentDescription, 2> attachments {
            colorAttachmentDescription,
            depthAttachmentDescription,
        };

        VkSubpassDescription subpassDescription { };
        subpassDescription.pipelineBindPoint = VK_PIPELINE_BIND_POINT_GRAPHICS;
        subpassDescription.colorAttachmentCount = 1;
        subpassDescription.pColorAttachments = &colorAttachmentReference;
        subpassDescription.pDepthStencilAttachment = mDepthEnabled ? &depthAttachmentReference : nullptr;

        auto renderPassInfo = RenderPass::CreateInfo;
        renderPassInfo.attachmentCount = mDepthEnabled ? static_cast<uint32_t>(attachments.size()) : 1;
        renderPassInfo.pAttachments = attachments.data();
        renderPassInfo.subpassCount = 1;
        renderPassInfo.pSubpasses = &subpassDescription;
        mRenderPass = mDevice->create<RenderPass>(renderPassInfo);

        ////////////////////////////////////////////////////////////////
        // Create Command::Pool
        auto commandPoolInfo = Command::Pool::CreateInfo;
        commandPoolInfo.flags = VK_COMMAND_POOL_CREATE_RESET_COMMAND_BUFFER_BIT;
        commandPoolInfo.queueFamilyIndex = static_cast<uint32_t>(mGraphicsQueue->family_index());
        mCommandPool = mDevice->create<Command::Pool>(commandPoolInfo);
        for (size_t i = 0; i < mSwapchain->images().size(); ++i) {
            mCommandPool->allocate<Command::Buffer>();
        }

        ////////////////////////////////////////////////////////////////
        // Create Sempahores
        mImageSemaphore = mDevice->create<Semaphore>();
        mRenderSemaphore = mDevice->create<Semaphore>();
    }

    void Application::pre_update(const dst::Clock& clock, const dst::Input& input)
    {
    }

    void Application::update(const dst::Clock& clock, const dst::Input& input)
    {
    }

    void Application::post_update(const dst::Clock& clock, const dst::Input& input)
    {
    }

    void Application::pre_render(const dst::Clock& clock)
    {
        mPresentQueue->wait_idle();
        mSwapchain->update();
        mImageIndex = static_cast<uint32_t>(mSwapchain->next_image(*mImageSemaphore));
        if (mSwapchain->valid()) {
            if (mCreateFramebuffers) {
                mCreateFramebuffers = false;
                mRecordCommandBuffers = true;

                if (mDepthEnabled && mDepthFormat) {
                    auto depthBufferInfo = Image::CreateInfo;
                    depthBufferInfo.imageType = VK_IMAGE_TYPE_2D;
                    depthBufferInfo.extent.width = mSwapchain->extent().width;
                    depthBufferInfo.extent.height = mSwapchain->extent().height;
                    depthBufferInfo.format = mDepthFormat;
                    depthBufferInfo.initialLayout = VK_IMAGE_LAYOUT_PREINITIALIZED;
                    depthBufferInfo.usage = VK_IMAGE_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT;
                    mDepthBuffer = mDevice->create<Image>(depthBufferInfo);

                    auto depthBufferMemoryInfo = Memory::AllocateInfo;
                    auto depthBufferMemoryRequirements = mDepthBuffer->memory_requirements();
                    depthBufferMemoryInfo.allocationSize = depthBufferMemoryRequirements.size;
                    depthBufferMemoryInfo.memoryTypeIndex = mPhysicalDevice->find_memory_type_index(
                        depthBufferMemoryRequirements.memoryTypeBits,
                        VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT
                    );

                    mDepthBuffer->bind_memory(mDevice->allocate<Memory>(depthBufferMemoryInfo));
                    mDepthBuffer->create<Image::View>();
                }

                mFramebuffers.clear();
                mFramebuffers.reserve(mSwapchain->images().size());
                for (const auto& image : mSwapchain->images()) {
                    std::array<VkImageView, 2> attachemts {
                        *image->view(),
                        mDepthBuffer ? mDepthBuffer->view()->handle() : VK_NULL_HANDLE
                    };

                    auto framebufferInfo = Framebuffer::CreateInfo;
                    framebufferInfo.renderPass = *mRenderPass;
                    framebufferInfo.attachmentCount = mDepthBuffer ? static_cast<uint32_t>(attachemts.size()) : 1;
                    framebufferInfo.pAttachments = attachemts.data();
                    framebufferInfo.width = mSwapchain->extent().width;
                    framebufferInfo.height = mSwapchain->extent().height;
                    framebufferInfo.layers = 1;
                    mFramebuffers.push_back(mDevice->create<Framebuffer>(framebufferInfo));
                }
            }
        }
    }

    void Application::render(const dst::Clock& clock)
    {
    }

    void Application::post_render(const dst::Clock& clock)
    {
        if (mSwapchain->valid()) {
            if (mRecordCommandBuffers) {
                mRecordCommandBuffers = false;
                auto extent = mSwapchain->extent();
                for (size_t i = 0; i < mFramebuffers.size(); ++i) {
                    auto& commandBuffer = mCommandPool->buffers()[i];
                    auto beginInfo = Command::Buffer::BeginInfo;
                    beginInfo.flags = VK_COMMAND_BUFFER_USAGE_SIMULTANEOUS_USE_BIT;
                    commandBuffer->begin(beginInfo);

                    std::array<VkClearValue, 2> clearValues;
                    clearValues[0].color = { mClearColor.r, mClearColor.g, mClearColor.b, mClearColor.a };
                    clearValues[1].depthStencil = { 1, 0 };
                    auto renderPassBeginInfo = RenderPass::BeginInfo;
                    renderPassBeginInfo.renderPass = *mRenderPass;
                    renderPassBeginInfo.framebuffer = *mFramebuffers[i];
                    renderPassBeginInfo.renderArea.extent = extent;
                    renderPassBeginInfo.clearValueCount = mDepthEnabled ? static_cast<uint32_t>(clearValues.size()) : 1;
                    renderPassBeginInfo.pClearValues = clearValues.data();

                    create_barrier(*commandBuffer);

                    commandBuffer->begin_render_pass(renderPassBeginInfo);

                    VkRect2D scissor { };
                    VkViewport viewport { };
                    viewport.width = static_cast<float>(extent.width);
                    viewport.height = static_cast<float>(extent.height);
                    viewport.minDepth = 0;
                    viewport.maxDepth = 1;
                    scissor.extent = extent;
                    commandBuffer->set_viewport(viewport);
                    commandBuffer->set_scissor(scissor);

                    record_command_buffer(*commandBuffer, clock);

                    commandBuffer->end_render_pass();
                    commandBuffer->end();
                }
            }

            submit_command_buffer();
        }
    }

    void Application::shutdown()
    {
        mDevice->wait_idle();
    }

    void Application::force_record_command_buffers()
    {
        mRecordCommandBuffers = true;
    }

    void Application::create_device()
    {
        std::vector<std::string> deviceLayers;
        std::vector<std::string> deviceExtensions {
            VK_KHR_SWAPCHAIN_EXTENSION_NAME,
        };

        auto queueFamilyIndices = mPhysicalDevice->find_queue_families(VK_QUEUE_GRAPHICS_BIT);
        auto queueInfo = Queue::CreateInfo;
        std::array<float, 1> queuePriorities { };
        queueInfo.queueCount = 1;
        queueInfo.pQueuePriorities = queuePriorities.data();
        // NOTE : We're assuming that we got at least one Queue capabale of
        //        graphics, in anything but a toy we want to validate that.
        queueInfo.queueFamilyIndex = static_cast<uint32_t>(queueFamilyIndices[0]);
        std::array<VkDeviceQueueCreateInfo, 1> queueInfos { queueInfo };
        mDevice = mPhysicalDevice->create<Device>(deviceLayers, deviceExtensions, queueInfos);
        // NOTE : We're assuming that the Queue we're choosing for graphics
        //        is capable of presenting, this may not always be the case.
        mGraphicsQueue = mDevice->queues()[0][0].get();
        mPresentQueue = mGraphicsQueue;
    }

    void Application::create_barrier(Command::Buffer& commandBuffer)
    {
    }

    void Application::record_command_buffer(Command::Buffer& commandBuffer, const dst::Clock& clock)
    {
    }

    void Application::submit_command_buffer()
    {
        auto submitInfo = Queue::SubmitInfo;
        VkPipelineStageFlags waitStages[] { VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT };
        submitInfo.waitSemaphoreCount = 1;
        submitInfo.pWaitSemaphores = &mImageSemaphore->handle();
        submitInfo.pWaitDstStageMask = waitStages;
        submitInfo.commandBufferCount = 1;
        submitInfo.pCommandBuffers = &mCommandPool->buffers()[mImageIndex]->handle();
        submitInfo.signalSemaphoreCount = 1;
        submitInfo.pSignalSemaphores = &mRenderSemaphore->handle();
        mGraphicsQueue->submit(submitInfo);

        auto presentInfo = Queue::PresentInfoKHR;
        presentInfo.waitSemaphoreCount = 1;
        presentInfo.pWaitSemaphores = &mRenderSemaphore->handle();
        presentInfo.swapchainCount = 1;
        presentInfo.pSwapchains = &mSwapchain->handle();
        presentInfo.pImageIndices = &mImageIndex;
        mPresentQueue->present(presentInfo);
    }

    void Application::on_swapchain_resized(const SwapchainKHR& swapChain)
    {
        mCreateFramebuffers = true;
        mRecordCommandBuffers = true;
    }

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
