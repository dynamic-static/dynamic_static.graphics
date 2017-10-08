
/*
==========================================
    Copyright (c) 2017 Dynamic_Static
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

// Based on "Make a Neon Vector Shooter in XNA"
// https://gamedevelopment.tutsplus.com/series/cross-platform-vector-shooter-xna--gamedev-10559

#pragma once

#include "Sprite_ex.hpp"

#include "Dynamic_Static/Graphics/Vulkan.hpp"

#include <string>

namespace ShapeBlaster_ex {

    class Sprite::Pool final
    {
    private:


    public:
        Pool(
            dst::vlkn::Device& device,
            const std::string& filePath,
            size_t count
        )
        {

        }
    };

} // namespace ShapeBlaster_ex
