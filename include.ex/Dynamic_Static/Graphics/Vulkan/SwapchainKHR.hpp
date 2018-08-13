
/*
==========================================
  Copyright (c) 2016-2018 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "Dynamic_Static/Graphics/Vulkan/Defines.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Object.hpp"
#include "Dynamic_Static/Graphics/Vulkan/DeviceChild.hpp"
#include "Dynamic_Static/Graphics/Vulkan/SurfaceKHRChild.hpp"

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    /*
    * Provides high level control over a Vulkan swapchain.
    */
    class SwapchainKHR final
        : public Object<VkSwapchainKHR>
        , public SharedObject<SwapchainKHR>
        , public DeviceChild
        , public SurfaceKHRChild
    {
    public:
        /*
        * Configuration parameters for SwapchainKHR construction.
        */
        struct CreateInfo final
            : public VkSwapchainCreateInfoKHR
        {
            /*
            * Constructs an instance of SwapchainKHR::CreateInfo.
            */
            CreateInfo()
            {
                sType = VK_STRUCTURE_TYPE_SWAPCHAIN_CREATE_INFO_KHR;
                pNext = nullptr;
                flags = 0;
                surface = VK_NULL_HANDLE;
                minImageCount = 0;
                imageFormat = VK_FORMAT_UNDEFINED;
                imageColorSpace = VK_COLOR_SPACE_SRGB_NONLINEAR_KHR;
                imageExtent.width = 1;
                imageExtent.height = 1;
                imageArrayLayers = 1;
                imageUsage = VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT;
                imageSharingMode = VK_SHARING_MODE_EXCLUSIVE;
                queueFamilyIndexCount = 0;
                pQueueFamilyIndices = nullptr;
                preTransform = VK_SURFACE_TRANSFORM_IDENTITY_BIT_KHR;
                compositeAlpha = VK_COMPOSITE_ALPHA_OPAQUE_BIT_KHR;
                presentMode = VK_PRESENT_MODE_MAILBOX_KHR;
                clipped = VK_TRUE;
                oldSwapchain = VK_NULL_HANDLE;
            }
        };

    private:
        /*
        * Constructs an instance of SwapchainKHR.
        * @param [in] device This SwapchainKHR's Device
        * @param [in] surface This SwapchainKHR's SurfaceKHR
        * @param [in] createInfo This SwapchainKHR's SwapchainKHR::CreateInfo
        */
        SwapchainKHR(
            const std::shared_ptr<Device>& device,
            const std::shared_ptr<SurfaceKHR>& surface,
            CreateInfo createInfo
        );
    };

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
