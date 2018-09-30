
/*
==========================================
  Copyright (c) 2016-2018 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "Dynamic_Static/Graphics/Vulkan/DescriptorPoolChild.hpp"

namespace dst {
namespace gfx {
namespace vk {

    DescriptorPoolChild::DescriptorPoolChild(const std::shared_ptr<DescriptorPool>& descriptorPool)
        : mDescriptorPool { descriptorPool }
    {
    }

    DescriptorPoolChild::~DescriptorPoolChild()
    {
    }

    DescriptorPool& DescriptorPoolChild::get_descriptor_pool()
    {
        assert(mDescriptorPool);
        return *mDescriptorPool;
    }

    const DescriptorPool& DescriptorPoolChild::get_descriptor_pool() const
    {
        assert(mDescriptorPool);
        return *mDescriptorPool;
    }

} // namespace vk
} // namespace gfx
} // namespace dst
