
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

namespace ShapeBlaster {

    class Enemy
        : public Entity
    {
    private:
        float mSpawnTimer { 1 };
        bool mAcitve { false };

    public:
        Enemy()
        {

        }

    public:
         void update(const dst::Input& input, const dst::Clock& clock, VkExtent2D playField) override
        {
             if (false) {
                 // Enemy behavior logic goes here...
             } else {
                 mColor = dst::Color::White * (1 - 0 / 60.0f);
             }

             mVelocity *= 0.8f;
        }
    };

} // ShapeBlaster
