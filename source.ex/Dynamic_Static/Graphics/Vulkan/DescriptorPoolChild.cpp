
/*
==========================================
  Copyright (c) 2016-2018 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "Dynamic_Static/Graphics/Vulkan/DescriptorPoolChild.hpp"

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

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

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
