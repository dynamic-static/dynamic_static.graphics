
/*
==========================================
    Licensed under the MIT license
    Copyright (c) 2017 Dynamic_Static
        Patrick Purcell
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "Dynamic_Static/Graphics/Vulkan.hpp"

#include <array>
#include <memory>

namespace ComputeFluid2D {

    class ComputeSurface final
    {
    public:
        std::array<std::shared_ptr<dst::vlkn::Image>, 2> images;

    public:
        void swap()
        {

        }
    };

} // namespace ComputeFluid2D
