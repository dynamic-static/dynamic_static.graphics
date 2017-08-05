
/*
================================================================================

  MIT License

  Copyright (c) 2016 Dynamic_Static

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
         * Provides high level control over a Vulkan Image View.
         */
        class View final
            : public Object<VkImageView>
        {
            friend Image;

        public:
            /**
             * Configuration paramaters for Image::View construction.
             */
            struct Info final
                : public VkImageViewCreateInfo
            {
                /**
                 * Constructs an instance of Image::View::Info with default paramaters.
                 */
                Info()
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
                }
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

        /**
         * Configuration paramaters for Image construction.
         */
        struct Info final
            : public VkImageCreateInfo
        {
            /**
             * Constructs an instance of Image::Info with default paramaters.
             */
            Info()
            {
                sType = VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO;
                pNext = nullptr;
                flags = 0;
                imageType = VK_IMAGE_TYPE_1D;
                format = VK_FORMAT_UNDEFINED;
                extent.width = 1;
                extent.height = 1;
                extent.depth = 1;
                mipLevels = 1;
                arrayLayers = 1;
                samples = VK_SAMPLE_COUNT_1_BIT;
                tiling = VK_IMAGE_TILING_OPTIMAL;
                usage = VK_IMAGE_USAGE_INPUT_ATTACHMENT_BIT;
                sharingMode = VK_SHARING_MODE_EXCLUSIVE;
                queueFamilyIndexCount = 0;
                pQueueFamilyIndices = nullptr;
                initialLayout = VK_IMAGE_LAYOUT_UNDEFINED;
            }
        };

    private:
        VkFormat mFormat { VK_FORMAT_UNDEFINED };
        VkImageUsageFlags mUsage { VK_IMAGE_USAGE_STORAGE_BIT };
        std::vector<std::unique_ptr<View>> mViews;
        SwapchainKHR* mSwapchain { nullptr };
        std::shared_ptr<Device> mDevice;
        std::shared_ptr<Memory> mMemory;

    private:
        Image(const std::shared_ptr<Device>& device, const Info& info);
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
         * Gets this Image's Views.
         * @return This Image's Views
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
    };

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
