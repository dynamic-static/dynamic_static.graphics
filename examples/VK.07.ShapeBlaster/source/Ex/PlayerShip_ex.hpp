
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

#include "Entity_ex.hpp"

namespace ShapeBlaster_ex {

    class PlayerShip final
        : public Entity
    {
    private:

    public:
        void update(
            const dst::Clock& clock,
            const dst::Input& input,
            const dst::Vector2& playField
        ) override final
        {

        }
    };

} // namespace ShapeBlaster_ex
