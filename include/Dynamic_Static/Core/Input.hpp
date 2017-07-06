
/*
================================================================================

  MIT License

  Copyright (c) 2017 Dynamic_Static

  Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files (the "Software"), to deal
  in the Software without restriction, including without limitation the rights
  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
  copies of the Software, and to permit persons to whom the Software is
  furnished to do so, subject to the following conditions:

  The above copyright notice and this permission notice shall be included in all
  copies or substantial portions of the Software.

  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
  SOFTWARE.

================================================================================
*/

#pragma once

#include "Dynamic_Static/Core/Mouse.hpp"
#include "Dynamic_Static/Core/Defines.hpp"
#include "Dynamic_Static/Core/Keyboard.hpp"

namespace Dynamic_Static
{
    /**
     * Provides methods for input device queries.
     */
    class Input final
    {
    public:
        class Manager;

    private:
        Mouse mMouse;
        Keyboard mKeyboard;

    private:
        Input() = default;

    public:
        /**
         * Gets this Input's Mouse.
         * @return This Input's Mouse
         */
        Mouse& mouse();

        /**
         * Gets this Input's Mouse.
         * @return This Input's Mouse
         */
        const Mouse& mouse() const;

        /**
         * Gets this Input's Keyboard.
         * @return This Input's Keyboard
         */
        Keyboard& keyboard();

        /**
         * Gets this Input's Keyboard.
         * @return This Input's Keyboard
         */
        const Keyboard& keyboard() const;

        /**
         * Resets this Input.
         */
        void reset();

    private:
        void update(
            const Mouse::State& mouseState,
            const Keyboard::State& keyboardState
        );

    private:
        friend Manager;
    };
} // namespace Dynamic_Static
