
/*
==========================================
  Copyright (c) 2017-2020 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "dynamic_static/core/defines.hpp"
#include "dynamic_static/system/defines.hpp"

#define DYNAMIC_STATIC_GRAPHICS_VERSION_MAJOR 2
#define DYNAMIC_STATIC_GRAPHICS_VERSION_MINOR 0
#define DYNAMIC_STATIC_GRAPHICS_VERSION_PATCH 0

namespace dst {
namespace gfx {

static constexpr int VersionMajor { DYNAMIC_STATIC_GRAPHICS_VERSION_MAJOR }; //!< dynamic_static.graphics major version
static constexpr int VersionMinor { DYNAMIC_STATIC_GRAPHICS_VERSION_MINOR }; //!< dynamic_static.graphics minor version
static constexpr int VersionPatch { DYNAMIC_STATIC_GRAPHICS_VERSION_PATCH }; //!< dynamic_static.graphics patch version

} // namespace gfx
} // namespace dst
