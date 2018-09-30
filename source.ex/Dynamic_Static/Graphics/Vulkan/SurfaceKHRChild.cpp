
/*
==========================================
  Copyright (c) 2016-2018 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "Dynamic_Static/Graphics/Vulkan/SurfaceKHRChild.hpp"

namespace dst {
namespace gfx {
namespace vk {

    SurfaceKHRChild::SurfaceKHRChild(const std::shared_ptr<SurfaceKHR>& surface)
        : mSurface { surface }
    {
    }

    SurfaceKHRChild::~SurfaceKHRChild()
    {
    }

    SurfaceKHR& SurfaceKHRChild::get_surface()
    {
        assert(mSurface);
        return *mSurface;
    }

    const SurfaceKHR& SurfaceKHRChild::get_surface() const
    {
        assert(mSurface);
        return *mSurface;
    }

} // namespace vk
} // namespace gfx
} // namespace dst
