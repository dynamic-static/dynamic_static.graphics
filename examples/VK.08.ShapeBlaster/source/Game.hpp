
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
#include "Entity.Manager.hpp"
#include "Resources.hpp"

#include "Dynamic_Static/Core/Math.hpp"
#include "Dynamic_Static/Core/Time.hpp"
#include "Dynamic_Static/Core/ToString.hpp"
#include "Dynamic_Static/Graphics/Vulkan.hpp"
#include "Dynamic_Static/System/Input.hpp"
#include "Dynamic_Static/System/Window.hpp"

#include <string>

namespace ShapeBlaster {

    class Game final
    {
    private:
        PlayerStatus mGameStatus;
        Entity::Manager mEntityManager;

    public:
        Game(Resources& resources)
            : mEntityManager(resources, mGameStatus)
        {
        }

    public:
        void update(
            dst::vlkn::Device& device,
            const dst::sys::Input& input,
            const dst::Clock& clock,
            const VkExtent2D& playField
        )
        {
            if (mGameStatus.over()) {
                // TODO : Any key / button...
                if (input.get_keyboard().pressed(dst::sys::Keyboard::Key::SpaceBar)) {
                    mEntityManager.reset();
                    mGameStatus.reset();
                }
            } else {
                mEntityManager.udpate(input, clock, playField);
                mGameStatus.update(clock);

                auto view = dst::Matrix4x4::create_view(
                    { 0, 0, 1 }, dst::Vector3::Zero, dst::Vector3::UnitY
                );

                float w = static_cast<float>(playField.width);
                float h = static_cast<float>(playField.height);
                auto projection = dst::Matrix4x4::create_orhtographic(
                    0, w, 0, h, 0.01f, 10.0f
                );

                mEntityManager.update_uniforms(device, view, projection);
            }
        }

        void render(dst::vlkn::Command::Buffer& commandBuffer)
        {
            mEntityManager.render(commandBuffer);
        }

        std::string label() const
        {
            std::string scoreLabel =
                "[Score : " + dst::to_string(mGameStatus.score()) + "]    " +
                "[High : " + dst::to_string(mGameStatus.high_score()) + "]    ";

            return
                mGameStatus.over() ?
                scoreLabel + "Game Over!"
                :
                "[Lives : " + dst::to_string(mGameStatus.lives()) + "]    " +
                " x" + dst::to_string(mGameStatus.multiplier()) + " " +
                scoreLabel;
        }
    };

} // namespace ShapeBlaster
