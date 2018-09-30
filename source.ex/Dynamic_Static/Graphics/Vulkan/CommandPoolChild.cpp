
/*
==========================================
  Copyright (c) 2016-2018 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "Dynamic_Static/Graphics/Vulkan/CommandPoolChild.hpp"

namespace dst {
namespace gfx {
namespace vk {

    CommandPoolChild::CommandPoolChild(const std::shared_ptr<CommandPool>& commandPool)
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

} // namespace vk
} // namespace gfx
} // namespace dst
