
/*
==========================================
  Copyright (c) 2016-2018 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "Dynamic_Static.Core.hpp"
#include "Dynamic_Static.System.hpp"

#define DYNAMIC_STATIC_GRAPHICS_VERSION_MAJOR 1
#define DYNAMIC_STATIC_GRAPHICS_VERSION_MINOR 0
#define DYNAMIC_STATIC_GRAPHICS_VERSION_PATCH 0

namespace Dynamic_Static {
namespace Graphics {

    static constexpr int VersionMajor { DYNAMIC_STATIC_GRAPHICS_VERSION_MAJOR }; /*!< Dynamic_Static.Graphics major version */
    static constexpr int VersionMinor { DYNAMIC_STATIC_GRAPHICS_VERSION_MINOR }; /*!< Dynamic_Static.Graphics minor version */
    static constexpr int VersionPatch { DYNAMIC_STATIC_GRAPHICS_VERSION_PATCH }; /*!< Dynamic_Static.Graphics patch version */

    using Api = sys::GraphicsApi;

} // namespace Graphics
namespace gfx = Graphics;
} // namespace Dynamic_Static
