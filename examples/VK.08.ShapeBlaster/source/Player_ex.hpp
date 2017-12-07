
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
#include "Seeker_ex.hpp"
#include "Wanderer_ex.hpp"

#include "Dynamic_Static/Core/Callback.hpp"
#include "Dynamic_Static/Core/Random.hpp"

namespace ShapeBlaster_ex {

    class Player final
        : public Entity
    {
    private:
        static constexpr float Speed { 480 }; // Pixels / second
        static constexpr float RateofFire { 10 }; // Rounds / second
        static constexpr float BulletSpread { -0.025f }; // Pixels
        static constexpr float BulletOffsetHorizontal { 24 }; // Pixels
        static constexpr float BulletOffsetVertical { 7 }; // Pixels
        float mShotTimer { 0 };

    public:
        dst::Callback<Player, const glm::vec2&, const glm::vec2&> on_bullet_fired;

    public:
        Player(Sprite* sprite)
            : Entity(sprite)
        {
            mRadius = 10;
        }

    public:
        void spawn(const glm::vec2& position)
        {
            mPosition = position;
        }

        void on_update(
            const dst::Clock& clock,
            const dst::sys::Input& input,
            const glm::vec2& playField
        ) override final
        {
            auto moveDirection = glm::vec2 { };
            if (input.keyboard.down(dst::sys::Keyboard::Key::W)) {
                ++moveDirection.y;
            }

            if (input.keyboard.down(dst::sys::Keyboard::Key::S)) {
                --moveDirection.y;
            }

            if (input.keyboard.down(dst::sys::Keyboard::Key::A)) {
                --moveDirection.x;
            }

            if (input.keyboard.down(dst::sys::Keyboard::Key::D)) {
                ++moveDirection.x;
            }

            if (moveDirection != glm::vec2 { }) {
                moveDirection = glm::normalize(moveDirection);
                mRotation = std::atan2(moveDirection.y, moveDirection.x);
            }

            mVelocity = moveDirection * Speed;

            mShotTimer -= clock.elapsed<dst::Second<float>>();
            if (input.mouse.down(dst::sys::Mouse::Button::Left)) {
                auto pointerPosition = input.mouse.current.position;
                pointerPosition.y = playField.y - pointerPosition.y;
                auto aimDirection = pointerPosition - mPosition;
                if (aimDirection != glm::vec2 { } && mShotTimer <= 0) {
                    aimDirection = glm::normalize(aimDirection);
                    fire_bullet(aimDirection, { BulletOffsetHorizontal,  BulletOffsetVertical });
                    fire_bullet(aimDirection, { BulletOffsetHorizontal, -BulletOffsetVertical });
                    mShotTimer = 1.0f / RateofFire;
                }
            }
        }

        void on_collision(const Entity& other, size_t typeId)
        {
            if (typeId == type_id<Seeker>() ||
                typeId == type_id<Wanderer>()) {
            }
        }

    private:
        void fire_bullet(const glm::vec2& aimDirection, const glm::vec2& offset)
        {
            float spread =
                dst::Random.range<float>(-BulletSpread, BulletSpread) +
                dst::Random.range<float>(-BulletSpread, BulletSpread);
            float angle = std::atan2(aimDirection.y, aimDirection.x);
            auto direction = polar_to_cartesian(angle + spread, 1.0f);
            auto translation = glm::translate(glm::vec3 { offset, 0 });
            auto rotation = glm::toMat4(glm::angleAxis(angle, glm::vec3 { 0, 0, 1 }));
            on_bullet_fired(
                mPosition + glm::vec2 { (rotation * translation) * glm::vec4(offset.x, offset.y, 0, 1) },
                direction
            );
        }
    };

} // namespace ShapeBlaster_ex
