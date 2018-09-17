
/*
==========================================
  Copyright (c) 2017-2018 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "Entity.hpp"

#include "Dynamic_Static.Graphics.hpp"

namespace ShapeBlaster {

    class Player final
        : public Entity
    {
    private:
        static constexpr float Speed { 480 }; // Pixels / second

    public:
        Player() = default;
        Player(Sprite&& sprite)
            : Entity(std::move(sprite))
        {
        }

        inline Player(Player&& other)
        {
            *this = std::move(other);
        }

        inline Player& operator=(Player&& other)
        {
            if (this != &other) {
                Entity::operator=(std::move(other));
            }
            return *this;
        }

    private:
        inline void on_update(
            const dst::Clock& clock,
            const dst::sys::Input& input,
            const glm::vec2& playAreaExtent
        ) override
        {
            using namespace dst::sys;
            glm::vec2 moveDirection { };
            moveDirection += input.keyboard.down(Keyboard::Key::W) ? glm::vec2 {  0, -1 } : glm::vec2 { };
            moveDirection += input.keyboard.down(Keyboard::Key::S) ? glm::vec2 {  0,  1 } : glm::vec2 { };
            moveDirection += input.keyboard.down(Keyboard::Key::A) ? glm::vec2 { -1,  0 } : glm::vec2 { };
            moveDirection += input.keyboard.down(Keyboard::Key::D) ? glm::vec2 {  1,  0 } : glm::vec2 { };
            if (moveDirection != glm::vec2 { }) {
                moveDirection = glm::normalize(moveDirection);
                mRotation = std::atan2(moveDirection.y, moveDirection.x);
            }
            mVelocity = moveDirection * Speed;
        }
    };

} // namespace ShapeBlaster
