
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

#include "Game.Status.hpp"
#include "Enemy.Spawner.hpp"
#include "Entity.Manager.hpp"

#include "Dynamic_Static/Core/Time.hpp"
#include "Dynamic_Static/Core/ToString.hpp"

#include <string>

namespace ShapeBlaster {

    class Game final
    {
    private:
        PlayerStatus mStatus;
        Enemy::Spawner mSpawner;
        Entity::Manager mManager;

    public:
        bool over() const
        {
            mStatus.lives() == 0;
        }

        void update()
        {
            // clock update
            // input update

            // if (input was pressed back or escape)
            //  exit

            // entityManager.upate();
            // enemySpawner.update();
            // status.update();
        }

        std::string label() const
        {
            return "label";
        }
    };

} // namespace ShapeBlaster
