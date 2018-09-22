
/*
==========================================
  Copyright (c) 2017-2018 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

// NOTE : Based on "Cross-Platform Vector Shooter: XNA" by Michael Hoffman...
//  https://gamedevelopment.tutsplus.com/series/cross-platform-vector-shooter-xna--gamedev-10559

#pragma once

#include "ShapeBlaster/Entity.hpp"

#include "Dynamic_Static.Graphics.hpp"

namespace ShapeBlaster {

    class Enemy final
        : public Entity
    {
    public:
        class Spawner;
    };

} // namespace ShapeBlaster