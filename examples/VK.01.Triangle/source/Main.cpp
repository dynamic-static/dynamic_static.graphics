
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

#include "Dynamic_Static/Graphics/Vulkan.hpp"
#include "Dynamic_Static/Graphics/Window.hpp"

#include <memory>
#include <iostream>

int main()
{
    {
        std::vector<std::string> instanceLayers;
        std::vector<std::string> instanceExtensions {
            VK_KHR_SURFACE_EXTENSION_NAME,
            #if defined(DYNAMIC_STATIC_WINDOWS)
            VK_KHR_WIN32_SURFACE_EXTENSION_NAME,
            #elif defined(DYNAMIC_STATIC_LINUX)
            
            #endif
        };

        // NOTE : Uncomment any combination of these flags for debug output.
        VkDebugReportFlagsEXT debugFlags =
            0
            | VK_DEBUG_REPORT_INFORMATION_BIT_EXT
            | VK_DEBUG_REPORT_DEBUG_BIT_EXT
            | VK_DEBUG_REPORT_PERFORMANCE_WARNING_BIT_EXT
            | VK_DEBUG_REPORT_WARNING_BIT_EXT
            | VK_DEBUG_REPORT_ERROR_BIT_EXT
            ;

        // Create Instance and PhysicalDevices
        auto instance = dst::vlkn::Instance::create(instanceLayers, instanceExtensions, debugFlags);
        // NOTE : We're just assuming that the first PhysicalDevice is the one we want.
        //        This won't always be the case, we should check for necessary features.
        auto& physicalDevice = *instance->physical_devices()[0];
        auto apiVersion = physicalDevice.properties().apiVersion;

        // Create Window and Surface
        dst::gfx::Window::Configuration configuration;
        configuration.api = dst::gfx::API::Vulkan;
        configuration.apiVersion.major = VK_VERSION_MAJOR(apiVersion);
        configuration.apiVersion.minor = VK_VERSION_MAJOR(apiVersion);
        configuration.apiVersion.patch = VK_VERSION_MAJOR(apiVersion);
        auto window = std::make_shared<dst::gfx::Window>(configuration);
        auto surface = physicalDevice.create<dst::vlkn::SurfaceKHR>(window);

        // Create logical Device and Queues
        std::vector<std::string> deviceLayers;
        std::vector<std::string> deviceExtensions {
            VK_KHR_SWAPCHAIN_EXTENSION_NAME,
        };

        auto queueFamilyFlags = VK_QUEUE_GRAPHICS_BIT;
        auto queueFamilyIndices = physicalDevice.find_queue_families(queueFamilyFlags);
        dst::vlkn::Queue::Info queueInfo { };
        std::array<float, 1> queuePriorities { };
        queueInfo.pQueuePriorities = queuePriorities.data();
        // NOTE : We're assuming that we got at least one Queue capabale of
        //        graphics, in anything but a toy we want to validate that.
        queueInfo.queueFamilyIndex = static_cast<uint32_t>(queueFamilyIndices[0]);
        auto device = physicalDevice.create<dst::vlkn::Device>(deviceLayers, deviceExtensions, queueInfo);
        // NOTE : We're assuming that the Queue we're choosing for graphics
        //        is capable of presenting, this may not always be the case.
        auto& graphicsQueue = *device->queues()[0][0];
        auto& presentQueue = graphicsQueue;

        // Create SwapChain
        if (surface->presentation_supported(presentQueue.family_index())) {
            auto swapchain = device->create<dst::vlkn::SwapchainKHR>(surface);
        } else {
            throw std::runtime_error("Surface doesn't support presentation");
        }

        // Create RenderPass


        // Create Framebuffers


        // Create CommandPool


        // Create and record CommandBuffers


        // Create Sempahores

        auto quitKey = dst::Keyboard::Key::Escape;
        bool running = true;
        while (running) {
            dst::gfx::Window::update();
            if (window->input().keyboard().down(quitKey)) {
                running = false;
            }

            window->swap_buffers();
        }
    }

    return 0;
}
