
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

#include <string>
#include <unordered_map>

namespace ShapeBlaster {

    struct BloomSettings final
    {
        static const std::unordered_map<std::string, BloomSettings> Presets;

        float threshold { 0.25f };
        float amount { 4 };
        float bloomIntensity { 1.25f };
        float baseIntensity { 1 };
        float bloomSaturation { 1 };
        float baseSaturation { 1 };
    };

    const std::unordered_map<std::string, BloomSettings> BloomSettings::Presets {
        { "Default",     { } },
        { "Soft",        { 0,       3,       1,       1,       1,       1 } },
        { "Desaturated", { 0.5f,    8,       2,       1,       0,       1 } },
        { "Saturated",   { 0.25f,   4,       2,       1,       2,       0 } },
        { "Blurry",      { 0,       2,       1,       0.1f,    1,       1 } },
        { "Subtle",      { 0.5f,    2,       1,       1,       1,       1 } },
    };

} // namespace ShapeBlaster
