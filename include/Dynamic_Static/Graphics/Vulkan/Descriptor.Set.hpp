
#if 0
/*
==========================================
    Copyright (c) 2017 Dynamic_Static
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "Dynamic_Static/Graphics/Vulkan/Descriptor.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Defines.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Object.hpp"

#include <memory>

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    /**
     * Provides high level control over a Vulkan Descriptor Set.
     */
    class Descriptor::Set final
        : public Object<VkDescriptorSet>
    {
        friend Descriptor::Pool;

    public:
        class Layout;

        /**
         * Default Descriptor::Set allocation parameters.
         */
        static constexpr VkDescriptorSetAllocateInfo AllocateInfo {
            /* sType              */ VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO,
            /* pNext              */ nullptr,
            /* descriptorPool     */ VK_NULL_HANDLE,
            /* descriptorSetCount */ 0,
            /* pSetLayouts        */ nullptr,
        };

    private:
        Descriptor::Pool* mPool { nullptr };

    private:
        Set(Descriptor::Pool& pool, const VkDescriptorSetAllocateInfo& info);

    public:
        /**
         * Gets this Descriptor::Set's Descriptor::Pool.
         * @return This Descriptor::Set's Descriptor::Pool
         */
        Descriptor::Pool& pool();

        /**
         * Gets this Descriptor::Set's Descriptor::Pool.
         * @return This Descriptor::Set's Descriptor::Pool
         */
        const Descriptor::Pool& pool() const;
    };

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
#endif
