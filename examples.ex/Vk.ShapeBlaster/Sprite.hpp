
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
    {
    public:
        class Pool;
        class CreateInfo final
        {
        public:
            int count { 0 };
            std::string filePath;
        };

    public:
        glm::vec2 position { };
        glm::vec2 scale { 1 };
        glm::vec4 color { dst::Color::White };

    private:
        int mId { 0 };
        Pool* mPool { nullptr };
        glm::vec2 mExtent { };
    };

} // namespace ShapeBlaster
