
/*
==========================================
  Copyright (c) 2016-2018 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "Dynamic_Static/Graphics/Vulkan/Application.hpp"

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
        create_resources();
        mRunning = true;
        while (mRunning) {
            mClock.update();
            sys::Window::poll_events();
            update(mClock, mWindow->get_input());
            draw(mClock);
        }
        destroy_resources();
    }

    void Application::stop()
    {
        mRunning = false;
    }

    void Application::create_instance(
        std::vector<const char*> layers,
        std::vector<const char*> extensions
    )
    {
        Instance::CreateInfo instanceCreateInfo { };
        instanceCreateInfo.pApplicationInfo = &mInfo;
        instanceCreateInfo.enabledLayerCount = static_cast<uint32_t>(layers.size());
        instanceCreateInfo.ppEnabledLayerNames = layers.data();
        instanceCreateInfo.enabledExtensionCount = static_cast<uint32_t>(extensions.size());
        instanceCreateInfo.ppEnabledExtensionNames = extensions.data();
        mInstance = create<Instance>(instanceCreateInfo, mDebugReportFlags);
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
            VK_FORMAT_D24_UNORM_S8_UINT,
        };
        auto depthFormat = VK_FORMAT_UNDEFINED;
        for (auto format : depthFormats) {
            if (mInstance->get_physical_devices()[0].get_image_format_support(
                format,
                VK_IMAGE_TILING_OPTIMAL,
                VK_FORMAT_FEATURE_DEPTH_STENCIL_ATTACHMENT_BIT)) {
                depthFormat = format;
                break;
            }
        }
        VkAttachmentDescription depthAttachmentDescription { };
        depthAttachmentDescription.format = depthFormat;
        depthAttachmentDescription.samples = VK_SAMPLE_COUNT_1_BIT;
        depthAttachmentDescription.loadOp = VK_ATTACHMENT_LOAD_OP_DONT_CARE;
        depthAttachmentDescription.storeOp = VK_ATTACHMENT_STORE_OP_DONT_CARE;
        depthAttachmentDescription.stencilLoadOp = VK_ATTACHMENT_LOAD_OP_CLEAR;
        depthAttachmentDescription.stencilStoreOp = VK_ATTACHMENT_STORE_OP_DONT_CARE;
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
        subpassDescription.pDepthStencilAttachment = &depthAttachmentReference;

        RenderPass::CreateInfo renderPassCreateInfo { };
        renderPassCreateInfo.attachmentCount = static_cast<uint32_t>(attachmentDescriptions.size());
        renderPassCreateInfo.pAttachments = attachmentDescriptions.data();
        renderPassCreateInfo.subpassCount = 1;
        renderPassCreateInfo.pSubpasses = &subpassDescription;
        mSwapchainRenderPass = mDevice->create<RenderPass>(renderPassCreateInfo);
    }

    void Application::create_swapchain_command_buffers()
    {
        auto commandPool = mDevice->create<CommandPool>();
        auto imageCount = mSwapchain->get_images().size();
        mSwapchainCommandBuffers.reserve(imageCount);
        for (int i = 0; i < imageCount; ++i) {
            auto commandBuffer = commandPool->allocate<CommandBuffer>();
            mSwapchainCommandBuffers.push_back(commandBuffer);
        }
    }

    void Application::create_swapchain_semaphores()
    {
        mDrawCompleteSemphore = mDevice->create<Semaphore>();
        mPresentCompleteSemaphore = mDevice->create<Semaphore>();
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

    void Application::draw(const Clock& clock)
    {
    }

    void Application::destroy_resources()
    {
    }

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
