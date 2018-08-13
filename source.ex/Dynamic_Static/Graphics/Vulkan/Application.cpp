
/*
==========================================
  Copyright (c) 2016-2018 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "Dynamic_Static/Graphics/Vulkan/Application.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Device.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Instance.hpp"
#include "Dynamic_Static/Graphics/Vulkan/PhysicalDevice.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Queue.hpp"
#include "Dynamic_Static/Graphics/Vulkan/SurfaceKHR.hpp"

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
        create_render_pass();
        create_command_pool();
        create_semaphores();
        mRunning = true;
        while (mRunning) {
            mClock.update();
            sys::Window::poll_events();
            update(mClock, mWindow->get_input());
            draw(mClock);
        }
        shutdown();
    }

    void Application::create_instance(
        std::vector<const char*> layers,
        std::vector<const char*> extensions
    )
    {
        Instance::CreateInfo instanceCreateInfo;
        instanceCreateInfo.pApplicationInfo = &mInfo;
        instanceCreateInfo.enabledLayerCount = static_cast<uint32_t>(layers.size());
        instanceCreateInfo.ppEnabledLayerNames = layers.data();
        instanceCreateInfo.enabledExtensionCount = static_cast<uint32_t>(extensions.size());
        instanceCreateInfo.ppEnabledExtensionNames = extensions.data();
        mInstance = create<Instance>(instanceCreateInfo, mDebugReportFlags);
    }

    void Application::create_window()
    {
        sys::Window::Info windowInfo;
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
        auto queueFamilyIndices = physicalDevice.get_queue_families(VK_QUEUE_GRAPHICS_BIT);
        float priority = 0;
        Queue::CreateInfo queueCreateInfo;
        queueCreateInfo.queueCount = 1;
        queueCreateInfo.pQueuePriorities = &priority;
        queueCreateInfo.queueFamilyIndex = queueFamilyIndices[0];
        Device::CreateInfo deviceCreateInfo;
        deviceCreateInfo.enabledExtensionCount = static_cast<uint32_t>(extensions.size());
        deviceCreateInfo.ppEnabledExtensionNames = extensions.data();
        deviceCreateInfo.queueCreateInfoCount = 1;
        deviceCreateInfo.pQueueCreateInfos = &queueCreateInfo;
        deviceCreateInfo.pEnabledFeatures = &physicalDevice.get_features();
        mDevice = physicalDevice.create<Device>(deviceCreateInfo);
    }

    void Application::create_swapchain()
    {

    }

    void Application::create_render_pass()
    {

    }

    void Application::create_command_pool()
    {

    }

    void Application::create_semaphores()
    {

    }

    void Application::update(
        const Clock& clock,
        const sys::Input& input
    )
    {
    }

    void Application::draw(const Clock& clock)
    {
    }

    void Application::shutdown()
    {
    }

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
