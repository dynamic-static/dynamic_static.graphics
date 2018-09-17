
/*
==========================================
  Copyright (c) 2017-2018 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

// NOTE : Based on "Cross-Platform Vector Shooter: XNA" by Michael Hoffman...
//  https://gamedevelopment.tutsplus.com/series/cross-platform-vector-shooter-xna--gamedev-10559

#include "Entity.Manager.hpp"
#include "Player.hpp"
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
            SpriteId_Bullet,
            SpriteId_Wanderer,
            SpriteId_Seeker,
            SpriteId_Player,
            SpriteId_Pointer,
        };

        dst::RandomNumberGenerator mRng;
        std::unique_ptr<Sprite::Pool> mSpritePool;
        Entity::Manager mEntityManager;
        Player mPlayer;

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
            spriteCreateInfos[SpriteId_Bullet]   = { 64, artResourcesPath + "/Bullet.png" };
            spriteCreateInfos[SpriteId_Wanderer] = { 32, artResourcesPath + "/Wanderer.png" };
            spriteCreateInfos[SpriteId_Seeker]   = { 32, artResourcesPath + "/Seeker.png" };
            spriteCreateInfos[SpriteId_Player]   = { 1,  artResourcesPath + "/Player.png" };
            spriteCreateInfos[SpriteId_Pointer]  = { 1,  artResourcesPath + "/Pointer.png" };
            mSpritePool = std::make_unique<Sprite::Pool>(mDevice, mSwapchainRenderPass, spriteCreateInfos);
            mPlayer = Player(
                mSpritePool->check_out(SpriteId_Player),
                mSpritePool->check_out(SpriteId_Pointer)
            );
            mPlayer.HACK_spritePool = mSpritePool.get();
            mPlayer.HACK_entityManager = &mEntityManager;
        }

        void update(
            const dst::Clock& clock,
            const dst::sys::Input& input
        ) override
        {
            std::this_thread::sleep_for(dst::Millisecond<>(16));
            using namespace dst::sys;
            if (input.keyboard.down(Keyboard::Key::Escape)) {
                stop();
            }

            mWindow->set_cursor_mode(Window::CursorMode::Hidden);

            glm::vec2 playAreaExtent;
            playAreaExtent.x = (float)mSwapchain->get_extent().width;
            playAreaExtent.y = (float)mSwapchain->get_extent().height;
            mPlayer.update(clock, input, mRng, playAreaExtent);
            mSpritePool->update(playAreaExtent);
            mEntityManager.update(clock, input, mRng, playAreaExtent);
        }

        void record_swapchain_render_pass(
            const dst::Clock& clock,
            const dst::vk::CommandBuffer& commandBuffer
        ) override
        {
            mSpritePool->record_draw_cmds(commandBuffer);
        }
    };

} // namespace ShapeBlaster

int main()
{
    ShapeBlaster::Application().start();
    return 0;
}
