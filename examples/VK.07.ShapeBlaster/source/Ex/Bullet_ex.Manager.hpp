
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

#include "Bullet_ex.hpp"
#include "Sprite_ex.Manager.hpp"

#include <gsl/gsl>

namespace ShapeBlaster_ex {

    class Bullet::Manager final
    {
    private:
        static constexpr float Count { 64 };

    private:
        std::vector<Bullet> mBullets;
        std::vector<Bullet*> mInactiveBullets;
        std::vector<Bullet*> mActiveBullets;

    public:
        Manager() = default;
        Manager(Sprite::Manager& spriteManager)
        {
            mBullets.reserve(Count);
            mInactiveBullets.reserve(Count);
            spriteManager.create_pool("Bullet.png", Count);
            for (size_t i = 0; i < Count; ++i) {
                mBullets.push_back(Bullet(spriteManager.check_out("Bullet.png")));
                mInactiveBullets.push_back(&mBullets.back());
            }
        }

        Bullet* check_out()
        {
            Bullet* bullet = nullptr;
            if (!mInactiveBullets.empty()) {
                bullet = mInactiveBullets.back();
                bullet->mEnabled = false;
                mInactiveBullets.pop_back();
            }

            return bullet;
        }

        void check_in(Bullet* bullet)
        {
            if (bullet) {
                bullet->mEnabled = false;
                mInactiveBullets.push_back(bullet);
            }
        }
    };

} // namespace ShapeBlaster_ex
