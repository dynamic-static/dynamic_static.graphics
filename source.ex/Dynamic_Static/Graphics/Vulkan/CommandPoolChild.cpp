
/*
==========================================
  Copyright (c) 2016-2018 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "Dynamic_Static/Graphics/Vulkan/CommandPoolChild.hpp"

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    CommandPoolChild::CommandPoolChild(CommandPool* commandPool)
        : mCommandPool { commandPool }
    {
    }

    CommandPoolChild::~CommandPoolChild()
    {
    }

    CommandPool& CommandPoolChild::get_command_pool()
    {
        assert(mCommandPool);
        return *mCommandPool;
    }

    const CommandPool& CommandPoolChild::get_command_pool() const
    {
        assert(mCommandPool);
        return *mCommandPool;
    }

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
