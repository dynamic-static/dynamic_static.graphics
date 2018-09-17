
/*
==========================================
  Copyright (c) 2017-2018 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "Bullet.hpp"
#include "Entity.hpp"
#include "Sprite.hpp"

#include "Dynamic_Static.Graphics.hpp"

namespace ShapeBlaster {

    class Entity::Manager final
    {
    private:
        std::vector<Bullet> mBullets;

    public:
        inline void add(Bullet&& bullet)
        {
            mBullets.push_back(std::move(bullet));
        }

        inline void update(
            const dst::Clock& clock,
            const dst::sys::Input& input,
            dst::RandomNumberGenerator& rng,
            const glm::vec2& playAreaExtent
        )
        {
            for (auto& bullet : mBullets) {
                bullet.update(clock, input, rng, playAreaExtent);
            }
            for (auto itr = mBullets.rbegin(); itr != mBullets.rend();) {
                if (!itr->is_alive()) {
                    itr = decltype(itr)(mBullets.erase(std::next(itr).base()));
                } else {
                    ++itr;
                }
            }
        }
    };

} // namespace ShapeBlaster
