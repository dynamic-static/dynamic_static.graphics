
/*
==========================================
  Copyright (c) 2017-2018 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "Dynamic_Static.Graphics.hpp"

namespace ShapeBlaster {

    class Sprite final
        : dst::NonCopyable
    {
    public:
        class Pool;
        class CreateInfo final
        {
        public:
            int count { 0 };
            std::string filePath;
        };

    private:
        Pool* mPool { nullptr };

    public:
        Sprite() = default;
        Sprite(Sprite&& other);
        ~Sprite();
        Sprite& operator=(Sprite&& other);
        operator bool() const;
    };

} // namespace ShapeBlaster
