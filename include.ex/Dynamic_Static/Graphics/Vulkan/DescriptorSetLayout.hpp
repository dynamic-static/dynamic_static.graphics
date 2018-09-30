
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
#include "Dynamic_Static/Graphics/Vulkan/DeviceChild.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Object.hpp"

#include <memory>

namespace dst {
namespace gfx {
namespace vk {

    /*!
    Provides high level control over a Vulkan descriptor set layout.
    */
    class DescriptorSetLayout final
        : public Object<VkDescriptorSetLayout>
        , public SharedObject<DescriptorSetLayout>
        , public DeviceChild
    {
    public:
        /*!
        Configuration parameters for DescriptorSetLayout construction.
        */
        struct CreateInfo final
            : public VkDescriptorSetLayoutCreateInfo
        {
            /*!
            Constructs an instance of DescriptorSetLayout::CreateInfo.
            */
            inline CreateInfo()
            {
                sType = VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO;
                pNext = nullptr;
                flags = 0;
                bindingCount = 0;
                pBindings = nullptr;
                static_assert(
                    sizeof(DescriptorSetLayout::CreateInfo) == sizeof(VkDescriptorSetLayoutCreateInfo),
                    "sizeof(DescriptorSetLayout::CreateInfo) != sizeof(VkDescriptorSetLayoutCreateInfo)"
                );
            }
        };

    private:
        /*!
        Constructs an instance of DescriptorSetLayout.
        @param [in] device This DescriptorSetLayout's Device
        @param [in] createInfo This DescriptorSetLayout's DescriptorSetLayout::CreateInfo (optional = { })
        */
        DescriptorSetLayout(
            const std::shared_ptr<Device>& device,
            DescriptorSetLayout::CreateInfo createInfo = { }
        );

    public:
        /*!
        Destroys this instance of DescriptorSetLayout.
        */
        ~DescriptorSetLayout();

    private:
        friend class Device;
    };

} // namespace vk
} // namespace gfx
} // namespace dst
