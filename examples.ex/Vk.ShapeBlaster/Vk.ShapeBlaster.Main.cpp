
/*
==========================================
  Copyright (c) 2017-2018 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "Sprite.hpp"
#include "Sprite.Pool.hpp"

#include "Dynamic_Static.Graphics.hpp"

#include <memory>

namespace ShapeBlaster {

    class Application final
        : public dst::vk::Application
    {
    private:
        enum SpriteId
        {
            SpriteId_Player,
            SpriteId_Pointer,
            SpriteId_Bullet,
            SpriteId_Wanderer,
            SpriteId_Seeker,
        };

        std::unique_ptr<Sprite::Pool> mSpritePool;

    public:
        Application()
        {
            mInfo.pApplicationName = "Vk.ShapeBlaster";
        }

    private:
        void create_instance(
            std::vector<const char*>& layers,
            std::vector<const char*>& extensions,
            VkDebugReportFlagsEXT debugReportFlags
        ) override
        {
            dst::vk::Application::create_instance(
                layers,
                extensions,
                debugReportFlags
                // | VK_DEBUG_REPORT_INFORMATION_BIT_EXT
                // | VK_DEBUG_REPORT_DEBUG_BIT_EXT
                | VK_DEBUG_REPORT_PERFORMANCE_WARNING_BIT_EXT
                | VK_DEBUG_REPORT_WARNING_BIT_EXT
                | VK_DEBUG_REPORT_ERROR_BIT_EXT
            );
        }

        void create_resources() override
        {
            std::string resourcesPath = "../../../examples/resources/ShapeBlaster_AllParts/ShapeBlaster_Part5/ShapeBlaster_Part5Content/";
            std::string artResourcesPath = resourcesPath + "/Art/";
            std::array<Sprite::CreateInfo, 5> spriteCreateInfos { };
            spriteCreateInfos[SpriteId_Player]   = { 1,  artResourcesPath + "/Player.png" };
            spriteCreateInfos[SpriteId_Pointer]  = { 1,  artResourcesPath + "/Pointer.png" };
            spriteCreateInfos[SpriteId_Bullet]   = { 64, artResourcesPath + "/Bullet.png" };
            spriteCreateInfos[SpriteId_Wanderer] = { 32, artResourcesPath + "/Wanderer.png" };
            spriteCreateInfos[SpriteId_Seeker]   = { 32, artResourcesPath + "/Seeker.png" };
            mSpritePool = std::make_unique<Sprite::Pool>(mDevice, mSwapchainRenderPass, spriteCreateInfos);
        }
    };

} // namespace ShapeBlaster

int main()
{
    ShapeBlaster::Application().start();
    return 0;
}
