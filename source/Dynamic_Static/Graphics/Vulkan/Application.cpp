
/*
==========================================
    Copyright (c) 2017 Dynamic_Static 
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "Dynamic_Static/Graphics/Vulkan/Application.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Defines.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Device.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Instance.hpp"
#include "Dynamic_Static/Graphics/Vulkan/PhysicalDevice.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Queue.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Semaphore.hpp"
#include "Dynamic_Static/Graphics/Vulkan/SurfaceKHR.hpp"
#include "Dynamic_Static/Graphics/Vulkan/SwapchainKHR.hpp"

#include <vector>

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

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

        // auto instance = dst::vlkn::Instance::create(instanceLayers, instanceExtensions, debugFlags);
        auto instance = create<Instance>(instanceLayers, instanceExtensions, debugFlags);
        // NOTE : We're just assuming that the first PhysicalDevice is the one we want.
        //        This won't always be the case, we should check for necessary features.
        mPhysicalDevice = instance->physical_devices()[0].get();
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
        std::vector<std::string> deviceLayers;
        std::vector<std::string> deviceExtensions {
            VK_KHR_SWAPCHAIN_EXTENSION_NAME,
        };

        auto queueFamilyFlags = VK_QUEUE_GRAPHICS_BIT;
        auto queueFamilyIndices = mPhysicalDevice->find_queue_families(queueFamilyFlags);
        Queue::Info queueInfo { };
        std::array<float, 1> queuePriorities { };
        queueInfo.pQueuePriorities = queuePriorities.data();
        // NOTE : We're assuming that we got at least one Queue capabale of
        //        graphics, in anything but a toy we want to validate that.
        queueInfo.queueFamilyIndex = static_cast<uint32_t>(queueFamilyIndices[0]);
        std::array<dst::vlkn::Queue::Info, 1> queueInfos { queueInfo };
        mDevice = mPhysicalDevice->create<dst::vlkn::Device>(deviceLayers, deviceExtensions, queueInfos);
        // NOTE : We're assuming that the Queue we're choosing for graphics
        //        is capable of presenting, this may not always be the case.
        mGraphicsQueue = mDevice->queues()[0][0].get();
        mPresentQueue = mGraphicsQueue;

        ////////////////////////////////////////////////////////////////
        // Create SwapChain
        std::vector<std::shared_ptr<dst::vlkn::Framebuffer>> framebuffers;
        if (mSurface->presentation_supported(mPresentQueue->family_index())) {
            mSwapchain = mDevice->create<SwapchainKHR>(mSurface);
            framebuffers.reserve(mSwapchain->images().size());
        } else {
            throw std::runtime_error("Surface doesn't support presentation");
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
    }

    void Application::render(const dst::Clock& clock)
    {
    }

    void Application::post_render(const dst::Clock& clock)
    {
    }

    void Application::shutdown()
    {
    }

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
