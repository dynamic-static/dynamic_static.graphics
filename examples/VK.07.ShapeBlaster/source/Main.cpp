
/*
================================================================================

  MIT License

  Copyright (c) 2017 Dynamic_Static

  Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files (the "Software"), to deal
  in the Software without restriction, including without limitation the rights
  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
  copies of the Software, and to permit persons to whom the Software is
  furnished to do so, subject to the following conditions:

  The above copyright notice and this permission notice shall be included in all
  copies or substantial portions of the Software.

  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
  SOFTWARE.

================================================================================
*/

// Based on "Make a Neon Vector Shooter in XNA"
// https://gamedevelopment.tutsplus.com/series/cross-platform-vector-shooter-xna--gamedev-10559

#include "Resources.hpp"

#include "Dynamic_Static/Core/Math.hpp"
#include "Dynamic_Static/Core/Time.hpp"
#include "Dynamic_Static/Graphics/ImageCache.hpp"
#include "Dynamic_Static/Graphics/ImageReader.hpp"
#include "Dynamic_Static/Graphics/Vulkan.hpp"
#include "Dynamic_Static/Graphics/Window.hpp"

#include <algorithm>
#include <array>
#include <iostream>
#include <memory>

using namespace dst::gfx;
using namespace dst::gfx::vlkn;

int main()
{
    try {

    {
        ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        // Create Instance and PhysicalDevices
        std::vector<std::string> instanceLayers;
        std::vector<std::string> instanceExtensions {
            VK_KHR_SURFACE_EXTENSION_NAME,
            #if defined(DYNAMIC_STATIC_WINDOWS)
            VK_KHR_WIN32_SURFACE_EXTENSION_NAME,
            #elif defined(DYNAMIC_STATIC_LINUX)
            VK_KHR_XLIB_SURFACE_EXTENSION_NAME,
            #endif
        };

        VkDebugReportFlagsEXT debugFlags =
            0
            #if defined(DYNAMIC_STATIC_WINDOWS)
            | VK_DEBUG_REPORT_INFORMATION_BIT_EXT
            | VK_DEBUG_REPORT_DEBUG_BIT_EXT
            | VK_DEBUG_REPORT_PERFORMANCE_WARNING_BIT_EXT
            | VK_DEBUG_REPORT_WARNING_BIT_EXT
            | VK_DEBUG_REPORT_ERROR_BIT_EXT
            #endif
            ;

        auto instance = vlkn::create<Instance>(instanceLayers, instanceExtensions, debugFlags);
        // NOTE : We're just assuming that the first PhysicalDevice is the one we want.
        //        This won't always be the case, we should check for necessary features.
        auto& physicalDevice = *instance->physical_devices()[0];
        auto apiVersion = physicalDevice.properties().apiVersion;

        ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        // Create Window and Surface
        Window::Configuration configuration;
        configuration.api = dst::gfx::API::Vulkan;
        configuration.apiVersion.major = VK_VERSION_MAJOR(apiVersion);
        configuration.apiVersion.minor = VK_VERSION_MAJOR(apiVersion);
        configuration.apiVersion.patch = VK_VERSION_MAJOR(apiVersion);
        auto window = std::make_shared<Window>(configuration);
        auto surface = physicalDevice.create<SurfaceKHR>(window);

        ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        // Create logical Device and Queues
        std::vector<std::string> deviceLayers;
        std::vector<std::string> deviceExtensions {
            VK_KHR_SWAPCHAIN_EXTENSION_NAME,
        };

        auto queueFamilyFlags = VK_QUEUE_GRAPHICS_BIT;
        auto queueFamilyIndices = physicalDevice.find_queue_families(queueFamilyFlags);
        Queue::Info queueInfo { };
        std::array<float, 1> queuePriorities { };
        queueInfo.pQueuePriorities = queuePriorities.data();
        // NOTE : We're assuming that we got at least one Queue capabale of
        //        graphics, in anything but a toy we want to validate that.
        queueInfo.queueFamilyIndex = static_cast<uint32_t>(queueFamilyIndices[0]);
        std::array<Queue::Info, 1> queueInfos { queueInfo };
        auto device = physicalDevice.create<Device>(deviceLayers, deviceExtensions, queueInfos);
        // NOTE : We're assuming that the Queue we're choosing for graphics
        //        is capable of presenting, this may not always be the case.
        auto& graphicsQueue = *device->queues()[0][0];
        auto& presentQueue = graphicsQueue;

        ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        // Create SwapChain
        std::shared_ptr<SwapchainKHR> swapchain;
        if (surface->presentation_supported(presentQueue.family_index())) {
            swapchain = device->create<SwapchainKHR>(surface);
        } else {
            throw std::runtime_error("Surface doesn't support presentation");
        }

        ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        // Create Command::Pool
        Command::Pool::Info commandPoolInfo;
        commandPoolInfo.flags = VK_COMMAND_POOL_CREATE_RESET_COMMAND_BUFFER_BIT;
        commandPoolInfo.queueFamilyIndex = static_cast<uint32_t>(graphicsQueue.family_index());
        auto commandPool = device->create<Command::Pool>(commandPoolInfo);

        ShapeBlaster::Resources resources;
        resources.load(*device, *commandPool, graphicsQueue, swapchain->format());

        ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        // Create Command::Buffers
        for (size_t i = 0; i < swapchain->images().size(); ++i) {
            commandPool->allocate<Command::Buffer>();
        }

        ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        // Create Sempahores
        auto imageSemaphore = device->create<Semaphore>();
        auto renderSemaphore = device->create<Semaphore>();

        ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        // Render
        bool createFramebuffersAndDepthBuffer = true;
        bool recordCommandBuffers = true;
        swapchain->on_resized =
        [&](const SwapchainKHR&)
        {
            // NOTE : If our Window size changes, our Surface and Swapchain's Image
            //        sizes will also change.  When this occurs we need to recreate
            //        our Framebuffers and re-record our Command::Buffers.
            createFramebuffersAndDepthBuffer = true;
            recordCommandBuffers = true;
        };

        window->name("Dynamic_Static VK.07.ShapeBlaster");

        std::vector<std::shared_ptr<Framebuffer>> framebuffers;
        framebuffers.reserve(swapchain->images().size());

        std::shared_ptr<Image> depthBuffer;
        std::shared_ptr<Memory> depthBufferMemory;

        std::array<VkFormat, 3> depthFormats {
            VK_FORMAT_D32_SFLOAT, VK_FORMAT_D32_SFLOAT_S8_UINT, VK_FORMAT_D24_UNORM_S8_UINT
        };

        auto depthFormat = physicalDevice.find_supported_format(
            depthFormats,
            VK_IMAGE_TILING_OPTIMAL,
            VK_FORMAT_FEATURE_DEPTH_STENCIL_ATTACHMENT_BIT
        );

        dst::Clock clock;
        float angle = 0;
        bool running = true;
        while (running) {
            Window::update();
            auto quitKey = dst::Keyboard::Key::Escape;
            if (window->input().keyboard().down(quitKey)) {
                running = false;
            }

            clock.update();
            float dt = clock.elapsed<dst::Second<float>>();
            angle += 90.0f * clock.elapsed<dst::Second<float>>();

            ShapeBlaster::Sprite::UniformBuffer ubo;
            auto world = dst::Matrix4x4::create_rotation(
                dst::to_radians(angle),
                dst::Vector3::UnitZ
            );

            float cameraSpeed = 8;
            static float x = 0;
            static float y = 0;
            static float z = 64;
            // std::cout << z << std::endl;
            if (window->input().keyboard().down(dst::Keyboard::Key::W)) {
                z -= cameraSpeed * dt;
            }

            if (window->input().keyboard().down(dst::Keyboard::Key::S)) {
                z += cameraSpeed * dt;
            }

            if (window->input().keyboard().down(dst::Keyboard::Key::A)) {

            }

            if (window->input().keyboard().down(dst::Keyboard::Key::D)) {

            }

            if (window->input().keyboard().down(dst::Keyboard::Key::Q)) {

            }

            if (window->input().keyboard().down(dst::Keyboard::Key::E)) {

            }

            auto view = dst::Matrix4x4::create_view(
                { x, y, z },
                dst::Vector3::Zero,
                dst::Vector3::UnitY
            );

            float w = static_cast<float>(swapchain->extent().width);
            float h = static_cast<float>(swapchain->extent().height);
            auto projection = dst::Matrix4x4::create_perspective(
                dst::to_radians(30.0f),
                w / h,
                0.01f,
                100.0f
            );

            projection[1][1] *= -1;

            ubo.wvp = projection * view * world;
            ubo.color = dst::Color::White;

            // uniformBuffer->write<UniformBuffer>(std::array<UniformBuffer, 1> { ubo });
            resources.playerSprite.uniformBuffer->write<ShapeBlaster::Sprite::UniformBuffer>(
                std::array<ShapeBlaster::Sprite::UniformBuffer, 1> { ubo }
            );

            presentQueue.wait_idle();
            swapchain->update();
            if (swapchain->valid()) {
                auto imageIndex = static_cast<uint32_t>(swapchain->next_image(*imageSemaphore));

                if (createFramebuffersAndDepthBuffer) {
                    createFramebuffersAndDepthBuffer = false;
                    recordCommandBuffers = true;

                    auto extent = swapchain->extent();

                    Image::Info depthBufferInfo;
                    depthBufferInfo.imageType = VK_IMAGE_TYPE_2D;
                    depthBufferInfo.extent.width = extent.width;
                    depthBufferInfo.extent.height = extent.height;
                    depthBufferInfo.format = depthFormat;
                    depthBufferInfo.tiling = VK_IMAGE_TILING_OPTIMAL;
                    depthBufferInfo.initialLayout = VK_IMAGE_LAYOUT_PREINITIALIZED;
                    depthBufferInfo.usage = VK_IMAGE_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT;
                    depthBuffer = device->create<Image>(depthBufferInfo);

                    Memory::Info depthBufferMemoryInfo;
                    auto depthBufferMemoryRequirements = depthBuffer->memory_requirements();
                    depthBufferMemoryInfo.allocationSize = depthBufferMemoryRequirements.size;
                    depthBufferMemoryInfo.memoryTypeIndex = physicalDevice.find_memory_type_index(
                        depthBufferMemoryRequirements.memoryTypeBits,
                        VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT
                    );

                    depthBufferMemory = device->allocate<Memory>(depthBufferMemoryInfo);
                    depthBuffer->bind_memory(depthBufferMemory);
                    depthBuffer->create<Image::View>();

                    framebuffers.clear();
                    framebuffers.reserve(swapchain->images().size());
                    for (const auto& image : swapchain->images()) {
                        std::array<VkImageView, 2> attachments {
                            *image->views()[0],
                            *depthBuffer->views()[0]
                        };

                        Framebuffer::Info framebufferInfo;
                        framebufferInfo.renderPass = *resources.mRenderPass;
                        framebufferInfo.attachmentCount = static_cast<uint32_t>(attachments.size());
                        framebufferInfo.pAttachments = attachments.data();
                        framebufferInfo.width = extent.width;
                        framebufferInfo.height = extent.height;
                        framebufferInfo.layers = 1;
                        framebuffers.push_back(device->create<Framebuffer>(framebufferInfo));
                    }
                }

                if (recordCommandBuffers) {
                    recordCommandBuffers = false;
                    for (size_t i = 0; i < framebuffers.size(); ++i) {
                        auto& commandBuffer = commandPool->buffers()[i];

                        Command::Buffer::BeginInfo beginInfo;
                        beginInfo.flags = VK_COMMAND_BUFFER_USAGE_SIMULTANEOUS_USE_BIT;
                        commandBuffer->begin(beginInfo);

                        std::array<VkClearValue, 2> clearValues;
                        clearValues[0].color = { 0.2f, 0.2f, 0.2f, 1 };
                        clearValues[1].depthStencil = { 1, 0 };
                        RenderPass::BeginInfo renderPassBeginInfo;
                        renderPassBeginInfo.renderPass = *resources.mRenderPass; // *renderPass;
                        renderPassBeginInfo.framebuffer = *framebuffers[i];
                        renderPassBeginInfo.renderArea.extent = swapchain->extent();
                        renderPassBeginInfo.clearValueCount = static_cast<uint32_t>(clearValues.size());
                        renderPassBeginInfo.pClearValues = clearValues.data();
                        commandBuffer->begin_render_pass(renderPassBeginInfo);

                        // commandBuffer->bind_pipeline(VK_PIPELINE_BIND_POINT_GRAPHICS, *pipeline);
                        commandBuffer->bind_pipeline(VK_PIPELINE_BIND_POINT_GRAPHICS, *resources.mPipeline);

                        VkViewport viewport { };
                        viewport.width = static_cast<float>(swapchain->extent().width);
                        viewport.height = static_cast<float>(swapchain->extent().height);
                        viewport.minDepth = 0;
                        viewport.maxDepth = 1;
                        commandBuffer->set_viewport(viewport);

                        VkRect2D scissor { };
                        scissor.extent = swapchain->extent();
                        commandBuffer->set_scissor(scissor);
                        // commandBuffer->bind_descriptor_set(*descriptorSet, *pipelineLayout);
                        // commandBuffer->bind_descriptor_set(
                        //     *resources.playerSprite.descriptorSet,
                        //     *resources.mPipelineLayout
                        // );

                        // commandBuffer->bind_vertex_buffer(*vertexBuffer);
                        // commandBuffer->bind_index_buffer(*indexBuffer);
                        // commandBuffer->draw_indexed(indices.size());

                        resources.playerSprite.render(*commandBuffer);
                        // resources.pointerSprite.render(*commandBuffer);

                        commandBuffer->bind_vertex_buffer(*resources.quadVertexBuffer);
                        commandBuffer->bind_index_buffer(*resources.quadIndexBuffer);
                        commandBuffer->draw_indexed(ShapeBlaster::Resources::QuadIndexCount);

                        commandBuffer->end_render_pass();
                        commandBuffer->end();
                    }
                }

                Queue::SubmitInfo submitInfo;
                VkPipelineStageFlags waitStages[] { VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT };
                submitInfo.waitSemaphoreCount = 1;
                submitInfo.pWaitSemaphores = &imageSemaphore->handle();
                submitInfo.pWaitDstStageMask = waitStages;
                submitInfo.commandBufferCount = 1;
                submitInfo.pCommandBuffers = &commandPool->buffers()[imageIndex]->handle();
                submitInfo.signalSemaphoreCount = 1;
                submitInfo.pSignalSemaphores = &renderSemaphore->handle();
                graphicsQueue.submit(submitInfo);

                Queue::PresentInfoKHR presentInfo;
                presentInfo.waitSemaphoreCount = 1;
                presentInfo.pWaitSemaphores = &renderSemaphore->handle();
                presentInfo.swapchainCount = 1;
                presentInfo.pSwapchains = &swapchain->handle();
                presentInfo.pImageIndices = &imageIndex;
                presentQueue.present(presentInfo);
            }

            window->swap_buffers();
        }

        device->wait_idle();
    }

    }
    catch (const std::exception& e) {
        std::cout << std::endl << "========" << std::endl;
        std::cout << e.what() << std::endl;
        std::cout << std::endl << "========" << std::endl;
        int breaker = 0;
    }

    return 0;
}
