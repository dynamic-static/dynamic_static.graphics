
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

        struct Vertex final
        {
            glm::vec2 position;
            float rotation;
            float scale;
            glm::vec4 color;
            glm::vec2 extent;
            static inline auto get_attribute_descriptions()
            {
                return dst::vk::create_attribute_descriptions<
                    glm::vec2,
                    float,
                    float,
                    glm::vec4,
                    glm::vec2
                >();
            }
        };

    private:
        int mId { 0 };
        Pool* mPool { nullptr };
        Vertex* mVertex { nullptr };

    public:
        Sprite() = default;
        Sprite(Sprite&& other);
        ~Sprite();
        Sprite& operator=(Sprite&& other);
        Vertex& operator*();
        const Vertex& operator*() const;
        Vertex* operator->();
        const Vertex* operator->() const;
        operator bool() const;

    private:
        void check_in();
    };

} // namespace ShapeBlaster
