
/*
==========================================
    Copyright 2011-2018 Dynamic_Static
        Patrick Purcell
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "Dynamic_Static/Core/Defines.hpp"
#include "Dynamic_Static/System/Defines.hpp"

#define DYNAMIC_STATIC_GRAPHICS_VERSION_MAJOR 1
#define DYNAMIC_STATIC_GRAPHICS_VERSION_MINOR 0
#define DYNAMIC_STATIC_GRAPHICS_VERSION_PATCH 0

namespace Dynamic_Static {
namespace Graphics {

    static constexpr int VersionMajor { DYNAMIC_STATIC_GRAPHICS_VERSION_MAJOR }; /*!< TODO : Documentation. */
    static constexpr int VersionMinor { DYNAMIC_STATIC_GRAPHICS_VERSION_MINOR }; /*!< TODO : Documentation. */
    static constexpr int VersionPatch { DYNAMIC_STATIC_GRAPHICS_VERSION_PATCH }; /*!< TODO : Documentation. */

    using Api = sys::GraphicsApi;

} // namespace Graphics
    namespace gfx = Graphics;
} // namespace Dynamic_Static
