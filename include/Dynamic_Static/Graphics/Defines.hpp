
/*
==========================================
    Copyright (c) 2017 Dynamic_Static
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "Dynamic_Static/Core/Defines.hpp"

#define DYNAMIC_STATIC_GRAPHICS_VERSION_MAJOR (0)
#define DYNAMIC_STATIC_GRAPHICS_VERSION_MINOR (0)
#define DYNAMIC_STATIC_GRAPHICS_VERSION_PATCH (1)

namespace Dynamic_Static {
namespace Graphics {

    enum class API
    {
        Unknown,
        OpenGL,
        Vulkan,
    };

} // namespace Graphics
namespace gfx = Graphics;
} // namespace Dynamic_Static
