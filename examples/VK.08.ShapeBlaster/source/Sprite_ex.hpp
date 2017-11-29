
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

    public:
        bool enabled { true };
        glm::vec2 position { };
        float rotation { };
        glm::vec2 scale { 1 };
        glm::vec4 color { dst::Color::White };
        dst::vlkn::Image* image { nullptr };
    };

} // namespace ShapeBlaster_ex
