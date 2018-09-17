
/*
==========================================
  Copyright (c) 2017-2018 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

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

        std::unique_ptr<Sprite::Pool> mSpritePool;
        Sprite mPointerSprite;
        dst::gfx::Camera mCamera;

        dst::gfx::FreeCamerController mCameraController;

        Sprite mBullet;

        // Sprite mPlayerSprite;

        Player mPlayer;

    public:
        Application()
        {
            mInfo.pApplicationName = "Vk.ShapeBlaster";
            mCamera.transform.translation = { 0, 0, 16 };

            mCameraController.camera = &mCamera;
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
            mPointerSprite = mSpritePool->check_out(SpriteId_Pointer);
            assert(mPointerSprite);

            mPlayer = Player(mSpritePool->check_out(SpriteId_Player));
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

            // if (input.keyboard.pressed(Keyboard::Key::OEM_Tilde)) {
            //     if (mPlayerSprite) {
            //         mPlayerSprite = { };
            //     } else {
            //         mPlayerSprite = mSpritePool->check_out(SpriteId_Player);
            //     }
            // 
            //     if (mBullet) {
            //         mSpritePool->check_in(std::move(mBullet));
            //     } else {
            //         mBullet = mSpritePool->check_out(SpriteId_Bullet);
            //     }
            // }

            mPlayer.update(clock, input, { 1280, 720 });

            //mCameraController.lookEnabled = true;
            //mCameraController.update(clock, input);

            // mPointerSprite.
            auto swapchainExtent = mSwapchain->get_extent();
            if (swapchainExtent.height) {
                mCamera.aspectRatio = (float)swapchainExtent.width / (float)swapchainExtent.height;
            }
            mSpritePool->update(mCamera);


            mPointerSprite->position = input.mouse.current.position;
            mPointerSprite->position.y = (float)swapchainExtent.height - mPointerSprite->position.y;
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
