
/*
==========================================
  Copyright (c) 2016-2018 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "Dynamic_Static/Graphics/Vulkan/InstanceChild.hpp"

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    InstanceChild::InstanceChild(Instance* instance)
        : mInstance { instance }
    {
    }

    InstanceChild::~InstanceChild()
    {
    }

    Instance& InstanceChild::get_instance()
    {
        assert(mInstance);
        return *mInstance;
    }

    const Instance& InstanceChild::get_instance() const
    {
        assert(mInstance);
        return *mInstance;
    }

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
