
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

#include "Sprite_ex.hpp"
#include "Sprite_ex.Pipeline.hpp"
#include "Sprite_ex.Pool.hpp"

#include "Dynamic_Static/Core/FileSystem.hpp"
#include "Dynamic_Static/Graphics/Vulkan.hpp"

#include <memory>
#include <unordered_map>

namespace ShapeBlaster_ex {

    class Sprite::Manager final
    {
    private:
        std::unique_ptr<Sprite::Pipeline> mPipeline;
        std::unordered_map<std::string, Sprite::Pool> mSpritePools;

    public:
        Manager() = default;
        Manager(
            dst::vlkn::Device& device,
            dst::vlkn::RenderPass& renderPass,
            dst::vlkn::Queue& queue
        )
        {
            mPipeline = std::make_unique<Sprite::Pipeline>(device, renderPass);
            create_sprite_pool(queue, "Pointer.png", 1);
            create_sprite_pool(queue, "Player.png", 1);
            create_sprite_pool(queue, "Bullet.png", 64);
            create_sprite_pool(queue, "Seeker.png", 32);
            create_sprite_pool(queue, "Wanderer.png", 32);
            create_sprite_pool(queue, "Black Hole.png", 8);
        }

    public:
        void create_sprite_pool(
            dst::vlkn::Queue& queue,
            const std::string& fileName,
            size_t count
        )
        {
            std::string resourcePath = "../../../examples/resources/ShapeBlaster_AllParts/ShapeBlaster_Part5/ShapeBlaster_Part5Content/Art/";
            auto itr = mSpritePools.find(fileName);
            if (itr == mSpritePools.end()) {
                auto filePath = dst::Path::combine(resourcePath, fileName);
                auto spritePool = Sprite::Pool(queue, *mPipeline, filePath, count);
                mSpritePools.insert(std::make_pair(fileName, std::move(spritePool)));
            }
        }

        Sprite* check_out(const std::string& fileName)
        {
            Sprite* sprite = nullptr;
            auto itr = mSpritePools.find(fileName);
            if (itr != mSpritePools.end()) {
                sprite = itr->second.check_out();
            }

            return sprite;
        }

        void check_in(const std::string& fileName, Sprite* sprite)
        {
            if (sprite) {
                auto itr = mSpritePools.find(fileName);
                if (itr != mSpritePools.end()) {
                    itr->second.check_in(sprite);
                }
            }
        }

        void update(const dst::Vector2& playField)
        {
            for (auto& itr : mSpritePools) {
                itr.second.update(playField);
            }
        }

        void draw(dst::vlkn::Command::Buffer& commandBuffer)
        {
            for (auto& itr : mSpritePools) {
                itr.second.draw(commandBuffer);
            }
        }
    };

} // namespace ShapeBlaster_ex
