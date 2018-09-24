
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
#include "ShapeBlaster/Entity.Manager.hpp"

#include "ShapeBlaster/Sprite.Pool.hpp"

#include "Dynamic_Static.Graphics.hpp"

namespace ShapeBlaster {

    class Player final
        : public Entity
    {
    private:
        static constexpr float Speed { 480 }; // Pixels / second
        static constexpr float RateOfFire { 10 }; // Round / second
        static constexpr float BulletSpread { -0.025f }; // Pixels
        static constexpr float BulletOffsetHorizontal { 24 }; // Pixels
        static constexpr float BulletOffsetVertical { 7 }; // Pixels
        float mShotTimer { 0 };

    private:
        Sprite mPointerSprite;

    public:
        dst::Callback<Player, const glm::vec2&, const glm::vec2&> on_fire_bullet;

    public:
        Player() = default;
        Player(
            Sprite&& playerSprite,
            Sprite&& pointerSprite
        )
            : Entity(std::move(playerSprite))
            , mPointerSprite(std::move(pointerSprite))
        {
            assert(mPointerSprite);
            mPointerSprite->color = dst::Color::White;
            mPointerSprite->scale = 1;
        }

        inline Player(Player&& other)
        {
            *this = std::move(other);
        }

        inline Player& operator=(Player&& other)
        {
            Entity::operator=(std::move(other));
            mPointerSprite = std::move(other.mPointerSprite);
            return *this;
        }

    public:
        inline void update(
            const dst::Clock& clock,
            const dst::sys::Input& input,
            const glm::vec2& playAreaExtent,
            dst::RandomNumberGenerator& rng
        ) override final
        {
            using namespace dst::sys;
            glm::vec2 moveDirection { };
            moveDirection += input.keyboard.down(Keyboard::Key::W) ? glm::vec2 {  0,  1 } : glm::vec2 { };
            moveDirection += input.keyboard.down(Keyboard::Key::S) ? glm::vec2 {  0, -1 } : glm::vec2 { };
            moveDirection += input.keyboard.down(Keyboard::Key::A) ? glm::vec2 { -1,  0 } : glm::vec2 { };
            moveDirection += input.keyboard.down(Keyboard::Key::D) ? glm::vec2 {  1,  0 } : glm::vec2 { };
            if (moveDirection != glm::vec2 { }) {
                moveDirection = glm::normalize(moveDirection);
                mRotation = std::atan2(moveDirection.y, moveDirection.x);
            }
            mVelocity = moveDirection * Speed;

            mPointerSprite->position = input.mouse.current.position;
            mPointerSprite->position -= playAreaExtent * 0.5f;
            mPointerSprite->position.y *= -1;

            mShotTimer = std::max(mShotTimer - clock.elapsed<dst::Second<float>>(), 0.0f);
            if (mShotTimer <= 0 && input.mouse.down(Mouse::Button::Left)) {
                auto aimDirection = mPointerSprite->position - mPosition;
                if (aimDirection != glm::vec2 { }) {
                    aimDirection = glm::normalize(aimDirection);
                    fire_bullet(aimDirection, { BulletOffsetHorizontal,  BulletOffsetVertical }, rng);
                    fire_bullet(aimDirection, { BulletOffsetHorizontal, -BulletOffsetVertical }, rng);
                    mShotTimer = 1.0f / RateOfFire;
                }
            }

            Entity::update(clock, input, playAreaExtent, rng);
        }

    private:
        inline void fire_bullet(
            glm::vec2 direction,
            glm::vec2 offset,
            dst::RandomNumberGenerator& rng
        )
        {
            float spread =
                rng.range(-BulletSpread, BulletSpread) +
                rng.range(-BulletSpread, BulletSpread);
            float angle = std::atan2(direction.y, direction.x);
            direction = dst::polar_to_cartesian(1, angle + spread);
            auto translation = glm::translate(glm::vec3 { offset, 0 });
            auto rotation = glm::toMat4(glm::angleAxis(angle, glm::vec3 { 0, 0, 1 }));
            offset = (rotation * translation) * glm::vec4(offset.x, offset.y, 0, 1);
            on_fire_bullet(mPosition + offset, direction);
        }
    };

} // namespace ShapeBlaster
