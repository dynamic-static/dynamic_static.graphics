
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

#include "Dynamic_Static/Core/Math.hpp"
#include "Dynamic_Static/Graphics/Vulkan.hpp"

namespace ShapeBlaster_ex {

    class Sprite final
    {
    public:
        class Pipeline;
        class Pool;

    private:
        struct UniformBuffer final
        {
            dst::Matrix4x4 wvp;
            dst::Color color;
        };

    public:
        dst::Vector2 position;
        float rotation { 0 };
        float scale { 0 };
        dst::Color color;
    };

} // namespace ShapeBlaster_ex
