
/*
==========================================
    Copyright (c) 2017 Dynamic_Static 
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

// Based on "Make a Neon Vector Shooter in XNA"
// https://gamedevelopment.tutsplus.com/series/cross-platform-vector-shooter-xna--gamedev-10559

#include "Resources.hpp"
#include "BlackHole.hpp"
#include "Entity.Manager.hpp"

#include "Dynamic_Static/Core/Algorithm.hpp"

namespace ShapeBlaster {

    // void BlackHole::update(const dst::Input& input, const dst::Clock& clock, const VkExtent2D& playField)
    // {
    //     // auto& enemies = mEntityManager->mActiveEnemies;
    //     // auto& bullets = mEntityManager->mActiveBullets;
    //     // auto& player = mEntityManager->mPlayerShips[0];
    //     // 
    //     // auto scale_to =
    //     // [&](const dst::Vector2& v, float length)
    //     // {
    //     //     return v * (length / v.length());
    //     // };
    //     // 
    //     // for (auto& bullet : bullets) {
    //     //     bullet->mVelocity += scale_to((bullet->position() - mPosition), 0.3f);
    //     // }
    //     // 
    //     // for (auto& enemy : enemies) {
    //     //     if (enemy->enabled()) {
    //     //         auto dPos = mPosition - enemy->position();
    //     //         auto length = dPos.length();
    //     //         enemy->mVelocity += scale_to(dPos, dst::lerp(2.0f, 0.0f, length / 250.0f));
    //     //     }
    //     // }
    //     // 
    //     // if (player.enabled()) {
    //     //     auto dPos = mPosition - player.position();
    //     //     auto length = dPos.length();
    //     //     player.mVelocity += scale_to(dPos, dst::lerp(2.0f, 0.0f, length / 250.0f));
    //     // }
    //     // 
    //     // mScale = 1 + 0.1f * std::sin(10.0f * clock.total<dst::Second<float>>());
    // }

} // namespace ShapeBlaster
