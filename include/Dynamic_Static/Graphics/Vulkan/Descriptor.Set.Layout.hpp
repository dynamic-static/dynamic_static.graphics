
/*
==========================================
    Licensed under the MIT license
    Copyright (c) 2017 Dynamic_Static
        Patrick Purcell
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "Dynamic_Static/Graphics/Vulkan/Descriptor.Set.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Defines.hpp"
#include "Dynamic_Static/Graphics/Vulkan/DeviceChild.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Object.hpp"

#include "gsl/span"

#include <vector>

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    /**
     * Provides high level control over a Vulkan Descriptor Set Layout.
     */
    class Descriptor::Set::Layout final
        : public Object<VkDescriptorSetLayout>
        , public detail::DeviceChild
    {
        friend class Device;

    public:
        /**
         * Specifies Descriptor::Set::Layout creation parameters.
         */
        struct CreateInfo final
            : public VkDescriptorSetLayoutCreateInfo
        {
            /**
             * Constructs an instance of Descriptor::Set::Layout::CreateInfo.
             */
            CreateInfo()
                : VkDescriptorSetLayoutCreateInfo {
                    /* sType        */ VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO,
                    /* pNext        */ nullptr,
                    /* flags        */ 0,
                    /* bindingCount */ 0,
                    /* pBindings    */ nullptr,
                }
            {
            }
        };

        static_assert(
            sizeof(Descriptor::Set::Layout::CreateInfo) == sizeof(VkDescriptorSetLayoutCreateInfo),
            "sizeof(Descriptor::Set::Layout::CreateInfo) != sizeof(VkDescriptorSetLayoutCreateInfo)"
        );

    private:
        std::vector<VkDescriptorSetLayoutBinding> mBindings;

    private:
        Layout(
            const std::shared_ptr<Device>& device,
            const dst::vlkn::ShaderModule& shaderModule
        );

        Layout(
            const std::shared_ptr<Device>& device,
            const VkDescriptorSetLayoutCreateInfo& info
        );

    public:
        /**
         * Destroys this instance of Descriptor::Set::Layout.
         */
        ~Layout();

    public:
        /**
         * Gets this Descriptor::Set::Layout's VkDescriptorSetLayoutBindings.
         * @return This Descriptor::Set::Layout's VkDescriptorSetLayoutBindings
         */
        gsl::span<const VkDescriptorSetLayoutBinding> get_bindings() const;
    };

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
