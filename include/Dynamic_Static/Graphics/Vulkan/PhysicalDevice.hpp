
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

#include "Dynamic_Static/Core/SharedObjectFactory.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Defines.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Object.hpp"

#include "gsl/span"

#include <memory>
#include <string>
#include <vector>

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    /**
     * Provides high level control over a Vulkan PhysicalDevice.
     */
    class PhysicalDevice final
        : public Object<VkPhysicalDevice>
        , public SharedObjectFactory<Device, SurfaceKHR>
    {
        friend class Instance;

    private:
        VkPhysicalDeviceFeatures mFeatures { };
        VkPhysicalDeviceProperties mProperties { };
        VkPhysicalDeviceMemoryProperties mMemoryProperties { };
        std::vector<VkQueueFamilyProperties> mQueueFamilyProperties;
        Instance* mInstance { nullptr };

    private:
        PhysicalDevice(Instance& instance, VkPhysicalDevice handle);

    public:
        /**
         * Gets this PhysicalDevice's Instance.
         * @return This PhysicalDevice's Instance
         */
        Instance& instance();

        /**
         * Gets this PhysicalDevice's Instance.
         * @return This PhysicalDevice's Instance
         */
        const Instance& instance() const;

        /**
         * Gets this PhysicalDevice's VkPhysicalDeviceFeatures.
         * @return This PhysicalDevice's VkPhysicalDeviceFeatures
         */
        const VkPhysicalDeviceFeatures& features() const;

        /**
         * Gets this PhysicalDevice's VkPhysicalDeviceProperties.
         * @return This PhysicalDevice's VkPhysicalDeviceProperties
         */
        const VkPhysicalDeviceProperties& properties() const;

        /**
         * Gets this PhysicalDevice's VkPhysicalDeviceMemoryProperties.
         * @return This PhysicalDevice's VkPhysicalDeviceMemoryProperties
         */
        const VkPhysicalDeviceMemoryProperties& memory_properties() const;

        /**
         * TODO : Documentation.
         */
        uint32_t find_memory_type_index(
            uint32_t memoryTypeFilter,
            VkMemoryPropertyFlags memoryPropertyFlags
        ) const;

        /**
         * TODO : Documentation.
         */
        std::vector<size_t> find_queue_families(VkQueueFlags queueFlags) const;

        /**
         * TODO : Documentation.
         */
        VkFormat find_supported_format(
            const gsl::span<VkFormat>& candidates,
            VkImageTiling tiling,
            VkFormatFeatureFlags features
        );

        /**
         * TODO : Documentation.
         */
        template <typename ObjectType, typename ...Args>
        std::shared_ptr<ObjectType> create(Args&&... args)
        {
            auto object = new ObjectType(*this, args...);
            return make_shared<ObjectType>(object);
        }
    };

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static

namespace Dynamic_Static {
    /**
     * TODO : Documentation.
     */
    std::string to_string(VkPhysicalDeviceType physicalDeviceType);
} // namespace Dynamic_Static
