
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
#include "Dynamic_Static/Graphics/Vulkan/DeviceMemoryResource.hpp"
#include "Dynamic_Static/Graphics/Vulkan/ImageView.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Object.hpp"

#include <memory>

namespace dst {
namespace gfx {
namespace vk {

    /*!
    Provides high level control over a Vulkan image.
    */
    class Image
        : public Object<VkImage>
        , public SharedObject<Image>
        , public DeviceMemoryResource
    {
    public:
        /*!
        Configuration parameters for Image creation.
        */
        struct CreateInfo final
            : public VkImageCreateInfo
        {
            /*!
            Constructs an instance of Image::CreateInfo.
            */
            inline CreateInfo()
            {
                sType = VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO;
                pNext = nullptr;
                flags = 0;
                imageType = VK_IMAGE_TYPE_1D;
                format = VK_FORMAT_UNDEFINED;
                extent = { 1, 1, 1 };
                mipLevels = 1;
                arrayLayers = 1;
                samples = VK_SAMPLE_COUNT_1_BIT;
                tiling = VK_IMAGE_TILING_OPTIMAL;
                usage = 0;
                sharingMode = VK_SHARING_MODE_EXCLUSIVE;
                queueFamilyIndexCount = 0;
                pQueueFamilyIndices = nullptr;
                initialLayout = VK_IMAGE_LAYOUT_UNDEFINED;
                static_assert(
                    sizeof(Image::CreateInfo) == sizeof(VkImageCreateInfo),
                    "sizeof(Image::CreateInfo) != sizeof(VkImageCreateInfo)"
                );
            }
        };

        /*!
        Configuration parameters for an Image memory barrier.
        */
        struct Barrier final
            : public VkImageMemoryBarrier
        {
            /*!
            Constructs an instance of Image::Barrier.
            */
            inline Barrier()
            {
                sType = VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER;
                pNext = nullptr;
                srcAccessMask = 0;
                dstAccessMask = 0;
                oldLayout = VK_IMAGE_LAYOUT_UNDEFINED;
                newLayout = VK_IMAGE_LAYOUT_UNDEFINED;
                srcQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
                dstQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
                image = VK_NULL_HANDLE;
                subresourceRange.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
                subresourceRange.layerCount = 1;
                subresourceRange.baseArrayLayer = 0;
                subresourceRange.levelCount = 1;
                subresourceRange.baseMipLevel = 0;
                static_assert(
                    sizeof(Image::Barrier) == sizeof(VkImageMemoryBarrier),
                    "sizeof(Image::Barrier) != sizeof(VkImageMemoryBarrier)"
                );
            }
        };

    private:
        CreateInfo mCreateInfo { };
        std::vector<ImageView> mImageViews;

    private:
        /*!
        Constructs an instance of Image.
        @param [in] device This Image's Device
        @param [in] createInfo This Image's Image::CreateInfo
        */
        Image(
            const std::shared_ptr<Device>& device,
            Image::CreateInfo createInfo
        );

        /*!
        Constructs an instance of Image.
        @param [in] device This Image's Device
        @param [in] createInfo This Image's Image::CreateInfo
        @param [in] handle This Image's handle
        */
        Image(
            const std::shared_ptr<Device>& device,
            Image::CreateInfo createInfo,
            VkImage handle
        );

        /*!
        Constructs an instance of Image.
        @param [in] device This Image's Device
        @param [in] image The System::Image to create this Image from
        */
        Image(
            const std::shared_ptr<Device>& device,
            const sys::Image& image,
            VkFormat format = VK_FORMAT_R8G8B8A8_UNORM
        );

    public:
        /*!
        Moves an instance of Image.
        @param [in] other The Image to move from
        */
        Image(Image&& other);

        /*!
        Destroys this instance of Image.
        */
        ~Image();

        /*!
        Moves an instance of Image.
        @param [in] other The Image to move from
        @return This Image
        */
        Image& operator=(Image&& other);

    public:
        /*!
        Gets this Image's VkImageCreateFlags.
        @return This Image's VkImageCreateFlags
        */
        VkImageCreateFlags get_create_flags() const;

        /*!
        Gets this Image's VkImageType.
        @return This Image's VkImageType
        */
        VkImageType get_type() const;

        /*!
        Gets this Image's VkFormat.
        @return This Image's VkFormat
        */
        VkFormat get_format() const;

        /*!
        Gets this Image's VkExtent3D.
        @return This Image's VkExtent3D.
        */
        const VkExtent3D& get_extent() const;

        /*!
        Gets this Image's mip level count.
        @return This Image's mip level count
        */
        uint32_t get_mip_level_count() const;

        /*!
        Gets this Image's array layer count.
        @return This Image's array layer count
        */
        uint32_t get_array_layer_count() const;

        /*!
        Gets this Image's VkSampleCountFlagBits.
        @return This Image's VkSampleCountFlagBits
        */
        VkSampleCountFlagBits get_sample_count_flag() const;

        /*!
        Gets this Image's VkImageTiling.
        @return This Image's VkImageTiling
        */
        VkImageTiling get_tiling() const;

        /*!
        Gets this Image's VkImageUsageFlags.
        @return This Image's VkImageUsageFlags
        */
        VkImageUsageFlags get_usage_flags() const;

        /*!
        Gets this Image's VkSharingMode.
        @return This Image's VkSharingMode
        */
        VkSharingMode get_sharing_mode() const;

        /*!
        Gets this Image's VkImageAspectFlags.
        @return This Image's VkImageAspectFlags
        */
        VkImageAspectFlags get_aspect_mask() const;

        /*!
        Gets this Image's first ImageView.
        \n NOTE : If no ImageViews are available this method will create one
        @return This Image's first ImageView
        */
        ImageView& get_view();

        /*!
        Gets this Image's ImageViews.
        @return This Image's ImageViews
        */
        Span<ImageView> get_views();

        /*!
        Gets this Image's ImageViews.
        @return This Image's ImageViews
        */
        Span<const ImageView> get_views() const;

        /*!
        Gets this Image's VkMemoryRequirements.
        @return This Image's VkMemoryRequirements
        */
        VkMemoryRequirements get_memory_requirements() const override;

        /*!
        Binds this Image to a given DeviceMemory allocation.
        @param [in] memory The DeviceMemory allocation to bind this Image to
        @param [in] memoryOffset The offset in bytes from the start of the given DeviceMemory allocation at which to bind this Image (optional = 0)
        */
        void bind_memory(
            const std::shared_ptr<DeviceMemory>& memory,
            VkDeviceSize memoryOffset = 0
        ) override;

        /*!
        TODO : Documentation.
        */
        void write_ex(dst::Span<uint8_t> data);

        /*!
        TODO : Documentation.
        */
        void write_ex(dst::Span<const uint8_t> data);

        /*!
        Creates a new object of a given type.
        @param <ObjectType> The type of object to create
        @param <Args> The construction arguments for the object to create
        @return The newly created object
        */
        template <typename ObjectType, typename ...Args>
        inline ObjectType& create(Args&&... args)
        {
            mImageViews.push_back(ObjectType(this, std::forward<Args>(args)...));
            return mImageViews.back();
        }

        /*!
        Destroys an object of a given type.
        @param <ObjectType> The type of object to destroy
        @param [in] object The object to destroy
        */
        template <typename ObjectType>
        inline void destroy(const ObjectType& object)
        {
            for (auto itr = mImageViews.begin(); itr != mImageViews.end(); ++itr) {
                if (itr->get_handle() == object.get_handle()) {
                    mImageViews.erase(itr);
                    break;
                }
            }
        }

    private:
        friend class Device;
        friend class SwapchainKHR;
    };

} // namespace vk
} // namespace gfx
} // namespace dst
