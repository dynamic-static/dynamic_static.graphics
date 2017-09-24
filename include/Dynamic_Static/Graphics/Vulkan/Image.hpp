
/*
==========================================
    Copyright (c) 2017 Dynamic_Static
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "Dynamic_Static/Graphics/Vulkan/Defines.hpp"
#include "Dynamic_Static/Graphics/Vulkan/DeviceChild.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Object.hpp"

#include <memory>
#include <type_traits>
#include <vector>

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    /**
     * Provides high level control over a Vulkan Image.
     */
    class Image final
        : public Object<VkImage>
        , public detail::DeviceChild
    {
        friend class Device;
        friend class SwapchainKHR;

    public:
        /**
         * TODO : Documentation.
         */
        struct LayoutTransition final
        {
            VkImageMemoryBarrier barrier { Barrier };
            VkPipelineStageFlags srcStage { VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT };
            VkPipelineStageFlags dstStage { VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT };
        };

        /**
         * Provides high level control over a Vulkan Image View.
         */
        class View final
            : public Object<VkImageView>
        {
            friend Image;

        public:
            /**
             * Default Image::View creation parameters.
             */
            static constexpr VkImageViewCreateInfo CreateInfo {
                /* sType                           */ VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO,
                /* pNext                           */ nullptr,
                /* flags                           */ 0,
                /* image                           */ VK_NULL_HANDLE,
                /* viewType                        */ VK_IMAGE_VIEW_TYPE_1D,
                /* format                          */ VK_FORMAT_UNDEFINED,
                /* components.r                    */ VK_COMPONENT_SWIZZLE_IDENTITY,
                /* components.g                    */ VK_COMPONENT_SWIZZLE_IDENTITY,
                /* components.b                    */ VK_COMPONENT_SWIZZLE_IDENTITY,
                /* components.a                    */ VK_COMPONENT_SWIZZLE_IDENTITY,
                /* subresourceRange.aspectMask     */ VK_IMAGE_ASPECT_COLOR_BIT,
                /* subresourceRange.baseMipLevel   */ 0,
                /* subresourceRange.levelCount     */ 1,
                /* subresourceRange.baseArrayLayer */ 0,
                /* subresourceRange.layerCount     */ 1,
            };

        private:
            Image* mImage { nullptr };

        private:
            View(Image& image);

        public:
            /**
             * Destroys this instance of Image::View.
             */
            ~View();

        public:
            /**
             * Gets this Image::View's Image.
             * @return This Image::View's Image
             */
            Image& image();

            /**
             * Gets this Image::View's Image.
             * @return This Image::View's Image
             */
            const Image& image() const;
        };

    public:
        /**
         * Default Image creation parameters.
         */
        static constexpr VkImageCreateInfo CreateInfo {
            /* sType                 */ VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO,
            /* pNext                 */ nullptr,
            /* flags                 */ 0,
            /* imageType             */ VK_IMAGE_TYPE_1D,
            /* format                */ VK_FORMAT_UNDEFINED,
            /* extent                */ { 1, 1, 1 },
            /* mipLevels             */ 1,
            /* arrayLayers           */ 1,
            /* samples               */ VK_SAMPLE_COUNT_1_BIT,
            /* tiling                */ VK_IMAGE_TILING_OPTIMAL,
            /* usage                 */ VK_IMAGE_USAGE_INPUT_ATTACHMENT_BIT,
            /* sharingMode           */ VK_SHARING_MODE_EXCLUSIVE,
            /* queueFamilyIndexCount */ 0,
            /* pQueueFamilyIndices   */ nullptr,
            /* initialLayout         */ VK_IMAGE_LAYOUT_UNDEFINED,
        };

        /**
         * TODO : Documentation.
         */
        static constexpr VkImageSubresourceRange SubresourceRange {
            /* aspectMask     */ VK_IMAGE_ASPECT_COLOR_BIT,
            /* baseMipLevel   */ 0,
            /* levelCount     */ 1,
            /* baseArrayLayer */ 0,
            /* layerCount     */ 1,
        };

        /**
         * TODO : Documentation.
         */
        static constexpr VkImageMemoryBarrier Barrier {
            /* sType               */ VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER,
            /* pNext               */ nullptr,
            /* srcAccessMask       */ 0,
            /* dstAccessMask       */ 0,
            /* oldLayout           */ VK_IMAGE_LAYOUT_UNDEFINED,
            /* newLayout           */ VK_IMAGE_LAYOUT_UNDEFINED,
            /* srcQueueFamilyIndex */ VK_QUEUE_FAMILY_IGNORED,
            /* dstQueueFamilyIndex */ VK_QUEUE_FAMILY_IGNORED,
            /* image               */ nullptr,
            /* subresourceRange    */ SubresourceRange,
        };

    private:
        VkExtent3D mExtent { };
        VkFormat mFormat { VK_FORMAT_UNDEFINED };
        VkImageUsageFlags mUsage { VK_IMAGE_USAGE_STORAGE_BIT };
        std::vector<std::unique_ptr<View>> mViews;
        SwapchainKHR* mSwapchain { nullptr };
        std::shared_ptr<Device> mDevice;
        std::shared_ptr<Memory> mMemory;

    private:
        Image(const std::shared_ptr<Device>& device, const VkImageCreateInfo& info);
        Image(SwapchainKHR& swapchain, VkImage handle);

    public:
        /**
         * Destroys this instance of Image.
         */
        ~Image();

    public:
        /**
         * Gets this Image's Memory.
         * @return This Image's Memory
         */
        std::shared_ptr<Memory>& memory();

        /**
         * Gets this Image's Memory.
         * @return This Image's Memory
         */
        const std::shared_ptr<Memory>& memory() const;

        /**
         * Gets this Image's extent.
         * @return This Image's extent
         */
        const VkExtent3D& extent() const;

        /**
         * Gets this Image's VkFormat.
         * @return This Image's VkFormat
         */
        VkFormat format() const;

        /**
         * Gets this Image's VkImageUsageFlags.
         * @return This Image's VkImageUsageFlags
         */
        VkImageUsageFlags usage() const;

        /**
         * Gets this Image's memory requirements.
         * @return This Image's memory requirements
         */
        VkMemoryRequirements memory_requirements() const;

        /**
         * Gets this Image's Image::View.
         * @return This Image's Image::View
         */
        const View* view() const;

        /**
         * Gets this Image's Image::Views.
         * @return This Image's Image::Views
         */
        const std::vector<std::unique_ptr<View>>& views() const;

        /**
         * TODO : Documentation.
         */
        void bind_memory(const std::shared_ptr<Memory>& memory);

        /**
         * TODO : Documentation.
         */
        template <typename ObjectType, typename ...Args>
        ObjectType* create(Args&&... args)
        {
            static_assert(
                std::is_same<ObjectType, View>::value,
                "Image can only create Image::View"
            );

            // TODO : UniqueObject factory...
            std::unique_ptr<View> image(new View(*this, args...));
            mViews.push_back(std::move(image));
            return mViews.back().get();
        }

        /**
         * TODO : Documentation.
         */
        static LayoutTransition create_layout_transition(
            Image& image,
            VkImageLayout oldLayout,
            VkImageLayout newLayout
        );
    };

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
