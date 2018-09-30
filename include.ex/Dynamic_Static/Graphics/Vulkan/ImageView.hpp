
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
#include "Dynamic_Static/Graphics/Vulkan/ImageChild.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Object.hpp"

#include <memory>

namespace dst {
namespace gfx {
namespace vk {

    /*
    * Provides high level control over a Vulkan image view.
    */
    class ImageView final
        : public Object<VkImageView>
        , public ImageChild
    {
    public:
        /*
        * Configuration parameters for ImageView construction.
        */
        struct CreateInfo final
            : public VkImageViewCreateInfo
        {
            /*
            * Constructs an instance of ImageView::CreateInfo.
            */
            CreateInfo()
            {
                sType = VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO;
                pNext = nullptr;
                flags = 0;
                image = VK_NULL_HANDLE;
                viewType = VK_IMAGE_VIEW_TYPE_1D;
                format = VK_FORMAT_UNDEFINED;
                components.r = VK_COMPONENT_SWIZZLE_IDENTITY;
                components.g = VK_COMPONENT_SWIZZLE_IDENTITY;
                components.b = VK_COMPONENT_SWIZZLE_IDENTITY;
                components.a = VK_COMPONENT_SWIZZLE_IDENTITY;
                subresourceRange.aspectMask = 0;
                subresourceRange.baseMipLevel = 0;
                subresourceRange.levelCount = 1;
                subresourceRange.baseArrayLayer = 0;
                subresourceRange.layerCount = 1;
                static_assert(
                    sizeof(ImageView::CreateInfo) == sizeof(VkImageViewCreateInfo),
                    "sizeof(ImageView::CreateInfo) != sizeof(VkImageViewCreateInfo)"
                );
            }
        };

    private:
        ImageView::CreateInfo mCreateInfo;

    private:
        /*
        * Constructs an instance of ImageView.
        * @param [in] image This ImageView's Image
        */
        ImageView(Image* image);

        /*
        * Constructs an instance of ImageView.
        * @param [in] image This ImageView's Image
        * @param [in] createInfo This ImageView's ImageView::CreateInfo
        */
        ImageView(
            Image* image,
            const ImageView::CreateInfo& createInfo
        );

    public:
        /*
        * Moves an instance of ImageView.
        * @param [in] other The ImageView to move from
        */
        ImageView(ImageView&& other);

        /*
        * Destroys this instance of Semaphore.
        */
        ~ImageView();

        /*
        * Moves an instance of ImageView.
        * @param [in] other The ImageView to move from
        * @return This ImageView
        */
        ImageView& operator=(ImageView&& other);

    public:
        /*
        * Gets this ImageView's VkImageViewCreateFlags.
        * @return This ImageView's VkImageViewCreateFlags
        */
        VkImageViewCreateFlags get_create_flags() const;

        /*
        * Gets this ImageView's VkImageViewType.
        * @return This ImageView's VkImageViewType
        */
        VkImageViewType get_type() const;

        /*
        * Gets this ImageView's VkFormat.
        * @return This ImageView's VkFormat
        */
        VkFormat get_format() const;

        /*
        * Gets this ImageView's VkComponentMapping.
        * @return This ImageView's VkComponentMapping
        */
        VkComponentMapping get_component_mapping() const;

        /*
        * Gets this ImageView's VkImageSubresourceRange.
        * @return This ImageView's VkImageSubresourceRange
        */
        VkImageSubresourceRange get_subresource_range() const;

    private:
        friend class Image;
    };

} // namespace vk
} // namespace gfx
} // namespace dst
