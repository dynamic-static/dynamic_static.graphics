
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

#include "Bullet_ex.Manager.hpp"
#include "Entity_ex.hpp"
#include "Entity_ex.Pool.hpp"
#include "Sprite_ex.Manager.hpp"

#include "Entity_ex.Manager.hpp"

#include "Dynamic_Static/Core/Random.hpp"

namespace ShapeBlaster_ex {

    class Player final
        : public Entity
    {
    public:
        Entity::Manager_ex<Player, Bullet>* em { nullptr };

    private:
        static constexpr float Speed { 480 }; // Pixels / second
        static constexpr float RateofFire { 10 }; // Rounds / second
        static constexpr float BulletSpread { 1 }; // Pixels
        Bullet::Manager* mBulletPool;
        // Entity::Pool<Bullet> mBullets;
        float mShotTimer { 0 };

        

    public:
        Player() = default;
        Player(Sprite* sprite)
            : Entity(sprite)
        {
            mRadius = 10;
        }

    public:
        void spawn(const dst::Vector2& position)
        {
            mPosition = position;
        }

        void on_update(
            const dst::Clock& clock,
            const dst::Input& input,
            const dst::Vector2& playField
        ) override final
        {
            auto moveDirection = dst::Vector2::Zero;
            if (input.keyboard().down(dst::Keyboard::Key::W)) {
                ++moveDirection.y;
            }

            if (input.keyboard().down(dst::Keyboard::Key::S)) {
                --moveDirection.y;
            }

            if (input.keyboard().down(dst::Keyboard::Key::A)) {
                --moveDirection.x;
            }

            if (input.keyboard().down(dst::Keyboard::Key::D)) {
                ++moveDirection.x;
            }

            if (moveDirection != dst::Vector2::Zero) {
                moveDirection.normalize();
                mRotation = moveDirection.to_angle();
            }

            mVelocity = moveDirection * Speed;

            mShotTimer -= clock.elapsed<dst::Second<>>();
            if (input.mouse().down(dst::Mouse::Button::Left)) {
                auto pointerPosition = input.mouse().position();
                pointerPosition.y = playField.y - pointerPosition.y;
                auto aimDirection = pointerPosition - mPosition;
                if (aimDirection != dst::Vector2::Zero && mShotTimer <= 0) {
                    aimDirection.normalize();
                    fire_bullet(aimDirection, { 24,  7 });
                    fire_bullet(aimDirection, { 24, -7 });
                    mShotTimer = 1.0f / RateofFire;
                }
            }
        }

    private:
        void fire_bullet(const dst::Vector2& aimDirection, const dst::Vector2& offset)
        {
            //auto bullet = nullptr; // find_bullet();
            //if (bullet) {
                float angle = aimDirection.to_angle();
                float spread =
                    dst::Random.range<float>(-BulletSpread, BulletSpread) +
                    dst::Random.range<float>(-BulletSpread, BulletSpread);
                auto direction = polar_to_cartesian(angle + spread, 1.0f);
                auto translation = dst::Matrix4x4::create_translation(offset);
                auto rotation = dst::Matrix4x4::create_rotation(angle, dst::Vector3::UnitZ);
                auto m = rotation * translation;
                auto o = m * dst::Vector4(offset.x, offset.y, 0, 1);
                // bullet->spawn(mSprite->position + dst::Vector2(o), direction);
                if (em) {
                    em->spawn<Bullet>(mPosition + dst::Vector2(o), direction);
                }
            //}
        }
    };

} // namespace ShapeBlaster_ex
