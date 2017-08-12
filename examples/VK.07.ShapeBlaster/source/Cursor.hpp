
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

#include "Entity.hpp"
#include "Resources.hpp"

namespace ShapeBlaster {

    class Cursor final
        : public Entity
    {
    public:
        Cursor(Resources& resources)
        {
            mSprite = resources.mPointerPackage.mSprite;
        }

    public:
        void update(const dst::Input& input, const dst::Clock& clock, const VkExtent2D& playField) override final
        {
            mPosition = input.mouse().position();
            mPosition.y = playField.height - mPosition.y;
        }
    };

} // namespace ShapeBlaster
