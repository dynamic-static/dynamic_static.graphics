
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

#include "Resources.hpp"

#include "Dynamic_Static/Core/Algorithm.hpp"
#include "Dynamic_Static/Core/Input.hpp"
#include "Dynamic_Static/Core/Math.hpp"
#include "Dynamic_Static/Core/Time.hpp"
#include "Dynamic_Static/Graphics/Vulkan.hpp"

#include <array>

namespace ShapeBlaster {

    static dst::Vector2 from_polar(float angle, float magnitude)
    {
        return dst::Vector2(std::cos(angle), std::sin(angle)) * magnitude;
    }

    class Entity
    {
    public:
        class Manager;

    protected:
        Sprite mSprite;
        dst::Color mColor { dst::Color::White };
        dst::Vector2 mPosition;
        dst::Vector2 mVelocity;
        float mOrientation { 0 };
        float mRadius { 20 };

    private:
        bool mEnabled { false };

    public:
        bool enabled() const
        {
            return mEnabled;
        }

        void enabled(bool enabled)
        {
            mEnabled = enabled;
        }

        const dst::Vector2& position() const
        {
            return mPosition;
        }

        dst::Matrix4x4 local_to_world() const
        {
            auto translation = dst::Matrix4x4::create_translation({ mPosition.x, mPosition.y, 0 });
            auto rotation = dst::Matrix4x4::create_rotation(mOrientation, dst::Vector3::UnitZ);
            auto scale = dst::Matrix4x4::create_scale({
                mSprite.image->extent().width,
                mSprite.image->extent().height,
                1
            });

            return translation * rotation * scale;
        }

        virtual void update(const dst::Input& input, const dst::Clock& clock, const VkExtent2D& playField) = 0;

        void update_uniforms(dst::vlkn::Device& device, const dst::Matrix4x4& view, const dst::Matrix4x4& projection)
        {
            Sprite::UniformBuffer ubo;
            ubo.color = mColor;
            ubo.wvp = projection * view * local_to_world();
            *mSprite.host_storage_ptr() = ubo;
            mSprite.update(device);
        }

        void render(dst::vlkn::Command::Buffer& commandBuffer)
        {
            mSprite.render(commandBuffer);
        }

    protected:
        void update_position(const dst::Clock& clock, const VkExtent2D& playField)
        {
            mPosition += mVelocity * clock.elapsed<dst::Second<float>>();
            bounds_check(playField);
        }

        virtual void bounds_check(const VkExtent2D& playField)
        {
            mPosition.x = dst::clamp(mPosition.x, 0.0f, static_cast<float>(playField.width));
            mPosition.y = dst::clamp(mPosition.y, 0.0f, static_cast<float>(playField.height));
        }

        void expire()
        {
            mColor = dst::Color::Transparent;
            mEnabled = false;
        }

    private:
        static bool colliding(const Entity& lhs, const Entity& rhs)
        {
            float radius = lhs.mRadius + rhs.mRadius;
            auto distanceSquared = lhs.mPosition.distance_squared(rhs.mPosition);
            return lhs.mEnabled && rhs.mEnabled && distanceSquared < radius * radius;
        }
    };

} // ShapeBlaster
