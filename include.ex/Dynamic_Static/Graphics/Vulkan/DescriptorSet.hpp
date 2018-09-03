
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
#include "Dynamic_Static/Graphics/Vulkan/DescriptorPoolChild.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Object.hpp"

#include <memory>

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    /*!
    Provides high level control over a Vulkan descriptor set.
    */
    class DescriptorSet final
        : public Object<VkDescriptorSet>
        , public SharedObject<DescriptorSet>
        , public DescriptorPoolChild
    {
    public:
        /*!
        Configuration parameters for DescriptorSet allocation.
        */
        struct AllocateInfo final
            : public VkDescriptorSetAllocateInfo
        {
            /*!
            Constructs an instance of DescriptorSet::AllocateInfo.
            */
            inline AllocateInfo()
            {
                sType = VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO;
                pNext = nullptr;
                descriptorPool = VK_NULL_HANDLE;
                descriptorSetCount = 0;
                pSetLayouts = nullptr;
                static_assert(
                    sizeof(DescriptorSet::AllocateInfo) == sizeof(VkDescriptorSetAllocateInfo),
                    "sizeof(DescriptorSet::AllocateInfo) != sizeof(VkDescriptorSetAllocateInfo)"
                );
            }
        };

    private:
        /*!
        Constructs an instance of DescriptorSet.
        @param [in] device This DescriptorSet's DescriptorPool
        @param [in] allocateInfo This DescriptorSet's DescriptorSet::AllocateInfo
        */
        DescriptorSet(
            const std::shared_ptr<DescriptorPool>& descriptorPool,
            DescriptorSet::AllocateInfo allocateInfo = { }
        );

    public:
        /*!
        Destroys this instance of DescriptorSet.
        */
        ~DescriptorSet();

    private:
        friend class DescriptorPool;
    };

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
