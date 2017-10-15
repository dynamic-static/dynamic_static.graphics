
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

#include "Dynamic_Static/Core/Callback.hpp"
#include "Dynamic_Static/Core/Random.hpp"

namespace ShapeBlaster_ex {

    class Player final
        : public Entity
    {
    private:
        static constexpr float Speed { 480 }; // Pixels / second
        static constexpr float RateofFire { 10 }; // Rounds / second
        static constexpr float BulletSpread { -0.04f }; // Pixels
        static constexpr float BulletOffsetHorizontal { 35 }; // Pixels
        static constexpr float BulletOffsetVertical { 8 }; // Pixels
        float mShotTimer { 0 };

    public:
        dst::Callback<Player, const dst::Vector2&, const dst::Vector2&> on_bullet_fired;

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

            mShotTimer -= clock.elapsed<dst::Second<float>>();
            if (input.mouse().down(dst::Mouse::Button::Left)) {
                auto pointerPosition = input.mouse().position();
                pointerPosition.y = playField.y - pointerPosition.y;
                auto aimDirection = pointerPosition - mPosition;
                if (aimDirection != dst::Vector2::Zero && mShotTimer <= 0) {
                    aimDirection.normalize();
                    fire_bullet(aimDirection, { BulletOffsetHorizontal,  BulletOffsetVertical });
                    fire_bullet(aimDirection, { BulletOffsetHorizontal, -BulletOffsetVertical });
                    mShotTimer = 1.0f / RateofFire;
                }
            }
        }

        void on_collision(Entity& other)
        {
        }

    private:
        void fire_bullet(const dst::Vector2& aimDirection, dst::Vector2 offset)
        {
            float spread =
                dst::Random.range<float>(-BulletSpread, BulletSpread) +
                dst::Random.range<float>(-BulletSpread, BulletSpread);
            float angle = aimDirection.to_angle();
            auto direction = polar_to_cartesian(angle + spread, 1.0f);
            auto translation = dst::Matrix4x4::create_translation(offset);
            auto rotation = dst::Matrix4x4::create_rotation(angle, dst::Vector3::UnitZ);
            offset = (rotation * translation) * dst::Vector4(offset.x, offset.y, 0, 1);
            on_bullet_fired(mPosition + offset, direction);
        }
    };

} // namespace ShapeBlaster_ex
