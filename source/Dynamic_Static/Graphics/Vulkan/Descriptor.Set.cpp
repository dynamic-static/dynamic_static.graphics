
/*
==========================================
    Copyright (c) 2017 Dynamic_Static
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "Dynamic_Static/Graphics/Vulkan/Descriptor.Set.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Descriptor.Pool.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Device.hpp"

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    Descriptor::Set::Set(Descriptor::Pool& pool, const VkDescriptorSetAllocateInfo& info)
        : mPool { &pool }
    {
        validate(vkAllocateDescriptorSets(pool.device(), &info, &mHandle));
        name("Descriptor::Set");
    }

    Descriptor::Pool& Descriptor::Set::pool()
    {
        assert(mPool);
        return *mPool;
    }

    const Descriptor::Pool& Descriptor::Set::pool() const
    {
        assert(mPool);
        return *mPool;
    }

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
