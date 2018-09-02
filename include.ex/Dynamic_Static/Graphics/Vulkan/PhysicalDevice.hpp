
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
#include "Dynamic_Static/Graphics/Vulkan/InstanceChild.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Object.hpp"

#include <vector>

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    /*!
    Provides high level control over a Vulkan PhysicalDevice.
    */
    class PhysicalDevice final
        : public Object<VkPhysicalDevice>
        , public InstanceChild
    {
    private:
        VkPhysicalDeviceFeatures mFeatures { };
        VkPhysicalDeviceProperties mProperties { };
        VkPhysicalDeviceMemoryProperties mMemoryProperties { };
        std::vector<VkQueueFamilyProperties> mQueueFamilyProperties;

    private:
        /*!
        Constructs an instance of PhysicalDevice.
        @param [in] instance This PhysicalDevice's Instance
        @param [in] handle This PhysicalDevice's handle
        */
        PhysicalDevice(
            Instance* instance,
            VkPhysicalDevice handle
        );

    public:
        /*!
        Gets this PhysicalDevice's VkPhysicalDeviceFeatures.
        @return This PhysicalDevice's VkPhysicalDeviceFeatures
        */
        const VkPhysicalDeviceFeatures& get_features() const;

        /*!
        Gets this PhysicalDevice's VkPhysicalDeviceProperties.
        @return This PhysicalDevice's VkPhysicalDeviceProperties
        */
        const VkPhysicalDeviceProperties& get_properties() const;

        /*!
        Gets this PhysicalDevice's VkPhysicalDeviceMemoryProperties.
        @return This PhysicalDevice's VkPhysicalDeviceMemoryProperties
        */
        const VkPhysicalDeviceMemoryProperties& get_memory_properties() const;

        /*!
        Gets the indices of all of this PhysicalDevice's queue families that support the given VkQueueFlags.
        @param [in] queueFlags The VkQueueFlags to test for support
        @return The indices of all of this PhysicalDevice's queue families that support the given VkQueueFlags
        */
        std::vector<uint32_t> get_supported_queue_family_indices(VkQueueFlags queueFlags) const;

        /*!
        Gets a value indicating whether or not this PhysicalDevice supports a given VkFormat, VkImageTiling, and VkFormatFeatureFlags.
        @param [in] format The VkFormat to test for support
        @param [in] imageTiling The VkImageTiling to test for support
        @param [in] foramtFeatureFlags The VkFormatFeatureFlags to test for support
        @return Whether or not this PhysicalDevice supports the given VkFormat, VkImageTiling, and VkFormatFeatureFlags.
        */
        bool get_image_format_support(
            VkFormat format,
            VkImageTiling imageTiling,
            VkFormatFeatureFlags formatFeatureFlags
        ) const;

        /*!
        Gets all of this PhysicalDevice's VkFormat that support the given VkImageTiling and VkFormatFeatureFlags.
        @param [in] imageTiling The VkImageTiling to test for support
        @param [in] formatFeatureFlags The VkFormatFeatureFlags to test for support
        @return All of this PhysicalDevice's VkFormats that support the given VkImageTiling and VkFormatFeatureFlags
        */
        std::vector<VkFormat> get_supported_image_formats(
            VkImageTiling imageTiling,
            VkFormatFeatureFlags formatFeatureFlags
        ) const;

        /*!
        Gets the index of a VkMemoryType that fulfils given VkMemoryPropertyFlags.
        @param [in] memoryTypeBits A bitmask with one bit set for each supported memory type index
        @param [in] memoryPropertyFlags The VkMemoryPropertyFlags required for requested the memory type index
        @param [out] pMemoryTypeIndex The index of the first memory type that fulfils the given VkMemoryPropertyFlags
        @return Whether or not a VkMemoryType was found that fulfils the given VkMemoryPropertyFlags
        */
        bool get_memory_type_index(
            uint32_t memoryTypeBits,
            VkMemoryPropertyFlags memoryPropertyFlags,
            uint32_t* pMemoryTypeIndex
        ) const;

        /*!
        Creates a new object of a given type.
        @param <ObjectType> The type of object to create
        @param <Args> The construction arguments for the object to create
        @return The newly created object
        */
        template <typename ObjectType, typename ...Args>
        inline std::shared_ptr<ObjectType> create(Args&&... args)
        {
            return std::shared_ptr<ObjectType>(
                new ObjectType(this, std::forward<Args>(args)...)
            );
        }

    private:
        friend class Instance;
    };

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
