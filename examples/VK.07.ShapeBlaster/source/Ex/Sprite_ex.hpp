
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

    struct Sprite final
    {
    public:
        struct UniformBuffer;
        class Pipeline;
        class Pool;
        class Manager;

    public:
        bool enabled { true };
        dst::Vector2 position;
        float rotation { 0 };
        dst::Vector2 scale { dst::Vector2::One };
        dst::Color color { dst::Color::White };
        dst::vlkn::Image* image { nullptr };
    };

} // namespace ShapeBlaster_ex
