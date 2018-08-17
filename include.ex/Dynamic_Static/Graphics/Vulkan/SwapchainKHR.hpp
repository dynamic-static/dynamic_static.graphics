
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
#include "Dynamic_Static/Graphics/Vulkan/Image.hpp"
#include "Dynamic_Static/Graphics/Vulkan/SurfaceKHRChild.hpp"

#include <vector>

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
            inline CreateInfo()
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
                clipped = VK_FALSE;
                oldSwapchain = VK_NULL_HANDLE;
                static_assert(
                    sizeof(SwapchainKHR::CreateInfo) == sizeof(VkSwapchainCreateInfoKHR),
                    "sizeof(SwapchainKHR::CreateInfo) != sizeof(VkSwapchainCreateInfoKHR)"
                );
            }
        };

    private:
        CreateInfo mCreateInfo { };
        std::vector<Image> mImages;
        bool mVsyncEnabled { false };

    public:
        /*
        * Callback executed when this SwapchainKHR is resized.
        * @param [in] This SwapchainKHR
        */
        Callback<SwapchainKHR, const SwapchainKHR&> on_resize;

    private:
        /*
        * Constructs an instance of SwapchainKHR.
        * @param [in] device This SwapchainKHR's Device
        * @param [in] surface This SwapchainKHR's SurfaceKHR
        * @param [in] createInfo This SwapchainKHR's SwapchainKHR::CreateInfo (optional = { })
        * @param [in] vsyncEnabled Whether or not to enable vsync (optional = false)
        */
        SwapchainKHR(
            const std::shared_ptr<Device>& device,
            const std::shared_ptr<SurfaceKHR>& surface,
            CreateInfo createInfo = { },
            bool vsyncEnabled = false
        );

    public:
        /*
        * Destroys this instance of SwapchainKHR.
        */
        ~SwapchainKHR();

    public:
        /*
        * Gets this SwapchainKHR's VkFormat.
        * @return This SwapchainKHR's VkFormat
        */
        VkFormat get_format() const;

        /*
        * Gets this SwapchainKHR's VkExtent2D.
        * @return This SwapchainKHR's VkExtent2D.
        */
        const VkExtent2D& get_extent() const;

        /*
        * Gets this SwapchainKHR's VkColorSpaceKHR.
        * @return This SwapchainKHR's VkColorSpaceKHR
        */
        VkColorSpaceKHR get_color_space() const;

        /*
        * Gets this SwapchainKHR's VkPresentModeKHR.
        * @return This SwapchainKHR's VkPresentModeKHR
        */
        VkPresentModeKHR get_present_mode() const;

        /*
        * Gets this SwapchainKHR's VkSurfaceTransformFlagBitsKHR.
        * @return This SwapchainKHR's VkSurfaceTransformFlagBitsKHR
        */
        VkSurfaceTransformFlagBitsKHR get_surface_transform_flag() const;

        /*
        * Gets this SwapchainKHR's VkCompositeAlphaFlagBitsKHR.
        * @return This SwapchainKHR's VkCompositeAlphaFlagBitsKHR
        */
        VkCompositeAlphaFlagBitsKHR get_composite_alpha_flag() const;

        /*
        * Gets this SwapchainKHR's VkImageUsageFlags.
        * @return This SwapchainKHR's VkImageUsageFlags
        */
        VkImageUsageFlags get_image_usage_flags() const;

        /*
        * Gets this SwapchainKHR's Images.
        * @return This SwapchainKHR's Images.
        */
        const std::vector<Image>& get_images() const;

        /*
        * Gets a value indicating whether or not this SwapchainKHR has vsync enabled.
        * @return A value indicating whether or not this SwapchainKHR has vsync enabled
        */
        bool vsync_enabled() const;

        /*
        * Sets a value indicating whether or not this SwapchainKHR has vsync enabled.
        * @param [in] vsyncEnabled Whether or not this SwapchainKHR has vsync enabled
        */
        void vsync_enabled(bool vsyncEnabled);

    private:
        void create_swapchain();
        void destroy_swapchain();
        void on_surface_resize(const SurfaceKHR& surface);
        friend class Device;
    };

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
