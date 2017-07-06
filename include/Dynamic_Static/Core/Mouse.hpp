
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

#include "Dynamic_Static/Core/Point.hpp"
#include "Dynamic_Static/Core/Defines.hpp"

#include <bitset>

namespace Dynamic_Static
{
    /**
     * Provides methods for mouse queries.
     */
    class Mouse final
    {
    public:
        /**
         * Specifies Mouse buttons.
         */
        enum class Button
        {
            // NOTE : The following table shows the symbolic constant names, hexadecimal values,
            //        and mouse or keyboard equivalents for the virtual-key codes used by Windows.
            //        The codes are listed in numeric order.
            // http://msdn.microsoft.com/en-us/library/windows/desktop/dd375731(v=vs.85).aspx

            Left         = 0x01,
            Right        = 0x02,

            // ControlBreak = 0x03,

            Middle       = 0x04,
            X1           = 0x05,
            X2           = 0x06,

            Unknown,
            Count,
        };

    public:
        /**
         * Represents a Mouse's state at a single moment.
         */
        struct State final
            : public std::bitset<static_cast<size_t>(Button::Count)>
        {
        public:
            float scroll { 0 };
            Point position { };

        public:
            /**
             * Gets a value indicating whether or not a given Button is up.
             * @param [in] button The Button to check
             * @return Whether or not the given Button is up
             */
            bool up(Button button) const;

            /**
             * Gets a value indicating whether or not a given Button is down.
             * @param [in] button The Button to check
             * @return Whether or not the given Button is down
             */
            bool down(Button buton) const;
        };

    private:
        State mCurrent;
        State mPrevious;

    public:
        /**
         * Gets the delta between this Mouse's current and previous scroll.
         * @return The delta between this Mouse's current and previous scroll
         */
        float scroll() const;

        /**
         * Gets the delta between this Mouse's current and previous position.
         * @return The delta between this Mouse's current and previous position
         */
        Point delta() const;

        /**
         * Gets this Mouse's current position.
         * @return This Mouse's current position
         */
        Point position() const;

        /**
         * Gets a value indicating whether or not a given Button is up.
         * @param [in] button The Button to check
         * @return Whether or not the given Button is up
         */
        bool up(Button button) const;

        /**
         * Gets a value indicating whether or not a given Button is down.
         * @param [in] button The Button to check
         * @return Whether or not the given Button is down
         */
        bool down(Button button) const;

        /**
         * Gets a value indicating whether or not a given Button has been held.
         * @param [in] button The Button to check
         * @return Whether or not the given Button has been held
         */
        bool held(Button button) const;

        /**
         * Gets a value indicating whether or not a given Button has been pressed.
         * @param [in] button The Button to check
         * @return Whether or not the given Button has been pressed
         */
        bool pressed(Button button) const;

        /**
         * Gets a value indicating whether or not a given Button has been released.
         * @param [in] button The Button to check
         * @return Whether or not the given Button has been released
         */
        bool released(Button button) const;

        /**
         * Resets this Mouse.
         */
        void reset();

    private:
        void update(const State& state);

    private:
        friend class Input;
    };
} // namespace Dynamic_Static

namespace Dynamic_Static
{
    /**
     * Converts a GLFW mouse button to a Mouse::Button.
     * @param [in] glfwMouseButton The GLFW mouse button to convert to a Mouse::Button
     * @return The converted Mouse::Button
     */
    Mouse::Button glfw_to_dst_mouse_button(int glfwMouseButton);
} // namespace Dynamic_Static
