
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

#include "Bullet.hpp"
#include "Cursor.hpp"
#include "Entity.hpp"
#include "Resources.hpp"

#include "Dynamic_Static/Core/Algorithm.hpp"
#include "Dynamic_Static/Core/Input.hpp"
#include "Dynamic_Static/Core/Math.hpp"
#include "Dynamic_Static/Core/Random.hpp"
#include "Dynamic_Static/Core/Time.hpp"

#include "gsl/gsl"

#include <limits>

namespace ShapeBlaster {

    class PlayerShip final
        : public Entity
    {
    private:
        static constexpr float Spread { 0.005f };
        static constexpr float CoolDownTime { 0.07f };
        static constexpr float RateOfFire { 1 };
        static constexpr float RespawnTime { 2 };

    private:
        float mSpeed { 720 };
        gsl::span<Bullet> mBullets;
        dst::Vector2 mAimDirection;
        float mCoolDownTimer { 0 };
        float mRespawnTimer { 0 };
        Cursor* mCursor { nullptr };

    public:
        PlayerShip(
            Resources& resources,
            Cursor& cursor,
            gsl::span<Bullet> bullets,
            const dst::Vector2& position
        )
            : mCursor { &cursor }
            , mBullets { bullets }
        {
            mSprite = resources.mPlayerPackage.mSprite;
            mPosition = position;
        }

    public:
        void spawn(const dst::Vector2& position)
        {
            mRespawnTimer = 0;
        }

        void update(const dst::Input& input, const dst::Clock& clock, const VkExtent2D& playField) override final
        {
            if (mRespawnTimer > 0) {
                mRespawnTimer -= clock.elapsed<dst::Second<float>>();
            } else {
                mColor = dst::Color::White;
                auto moveDirection = dst::Vector3::Zero;
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

                if (input.mouse().down(dst::Mouse::Button::Left)) {
                    mAimDirection = mCursor->position() - mPosition;
                } else {
                    mAimDirection = dst::Vector2::Zero;
                }

                auto floatMax = std::numeric_limits<float>::max();
                mCoolDownTimer -= clock.elapsed<dst::Second<float>>();
                mCoolDownTimer = dst::clamp(mCoolDownTimer, 0.0f, floatMax);
                if ((mAimDirection.x || mAimDirection.y) && mCoolDownTimer <= 0) {
                    mAimDirection.normalize();
                    mCoolDownTimer = CoolDownTime;
                    fire_bullet({ 24,  7 });
                    fire_bullet({ 24, -7 });
                }

                if (moveDirection.x || moveDirection.y) {
                    moveDirection.normalize();
                    mOrientation = to_angle(moveDirection);
                }

                mVelocity = moveDirection * mSpeed;
                update_position(clock, playField);
            }
        }

        void kill()
        {
            mRespawnTimer = RespawnTime;
            mColor = dst::Color::Transparent;
        }

    private:
        void fire_bullet(const dst::Vector2& offset)
        {
            auto bullet = find_bullet();
            if (bullet) {
                float angle = to_angle(mAimDirection);
                float spread = dst::Random.range<float>(-Spread, Spread) + dst::Random.range<float>(-Spread, Spread);
                dst::Vector2 direction = from_polar(angle + spread, 11.0f);
                auto translation = dst::Matrix4x4::create_translation({ offset.x, offset.y, 0 });
                auto rotation = dst::Matrix4x4::create_rotation(angle, dst::Vector3::UnitZ);
                auto m = rotation * translation;
                auto o = m * dst::Vector4(offset.x, offset.y, 0, 1);
                bullet->spawn(mPosition + dst::Vector2(o.x, o.y), direction);
            }
        }

        Bullet* find_bullet()
        {
            Bullet* bulletPtr = nullptr;
            for (auto& bullet : mBullets) {
                if (bullet.expired()) {
                    bulletPtr = &bullet;
                    break;
                }
            }

            return bulletPtr;
        }
    };

} // namespace ShapeBlaster
