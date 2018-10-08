
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

#include "ShapeBlaster/Grid.hpp"
#include "ShapeBlaster/Entity.Manager.hpp"

#include "Dynamic_Static.Graphics.hpp"

#include <memory>

namespace ShapeBlaster {

    class Application final
        : public dst::vk::Application
    {
    private:
        dst::RandomNumberGenerator mRng;
        std::unique_ptr<Entity::Manager> mEntityManager;
        std::unique_ptr<Grid> mGrid;
        std::shared_ptr<dst::vk::Buffer> mCameraUniformBuffer;
        std::shared_ptr<dst::vk::DescriptorSet> mCameraDescriptorSet;

    public:
        Application()
        {
            std::cout
                << std::endl
                << "[Esc]        - Quit"              << std::endl
                << "[`]          - Options"           << std::endl
                << "   [W]"                           << std::endl
                << "[A][S][D]    - Move ship"         << std::endl
                << "[Left Mouse] - Enable mouse look" << std::endl
                << std::endl;

            mInfo.pApplicationName = "Vk.ShapeBlaster";
            mClearColor = dst::Color::Black;
        }

    private:
        void create_window(dst::sys::Window::Info& windowInfo) override final
        {
            windowInfo.resolution.x = 1920;
            windowInfo.resolution.y = 1080;
            dst::vk::Application::create_window(windowInfo);
        }

        void create_instance(
            std::vector<const char*>& layers,
            std::vector<const char*>& extensions,
            VkDebugReportFlagsEXT debugReportFlags
        ) override final
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

        void create_resources() override final
        {
            std::string resourcePath = "../../../examples/resources/ShapeBlaster_AllParts/ShapeBlaster_Part5/ShapeBlaster_Part5Content/";
            mEntityManager = std::make_unique<Entity::Manager>(resourcePath, mDevice, mSwapchainRenderPass);
            mGrid = std::make_unique<Grid>(mDevice, mSwapchainRenderPass, glm::vec2 { 1024, 1024 }, glm::vec2 { 256, 256 });

            using namespace dst::vk;
            Buffer::CreateInfo cameraUniformBufferCreateInfo { };
            cameraUniformBufferCreateInfo.size = sizeof(glm::mat4);
            cameraUniformBufferCreateInfo.usage = VK_BUFFER_USAGE_UNIFORM_BUFFER_BIT;
            mCameraUniformBuffer = mDevice->create<Buffer>(cameraUniformBufferCreateInfo);
            auto memoryProperties = VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT | VK_MEMORY_PROPERTY_HOST_COHERENT_BIT;
            DeviceMemory::allocate_resource_memory(mCameraUniformBuffer, memoryProperties);
            VkDescriptorPoolSize descriptorPoolSize { };
            descriptorPoolSize.type = VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER;
            descriptorPoolSize.descriptorCount = 1;
            DescriptorPool::CreateInfo descriptorPoolCreateInfo { };
            descriptorPoolCreateInfo.poolSizeCount = 1;
            descriptorPoolCreateInfo.pPoolSizes = &descriptorPoolSize;
            descriptorPoolCreateInfo.maxSets = 1;
            auto descriptorPool = mDevice->create<DescriptorPool>(descriptorPoolCreateInfo);
            VkDescriptorSetLayoutBinding binding { };
            binding.binding = 0;
            binding.descriptorType = VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER;
            binding.descriptorCount = 1;
            binding.stageFlags = VK_SHADER_STAGE_VERTEX_BIT;
            DescriptorSetLayout::CreateInfo descriptorSetLayoutCreateInfo { };
            descriptorSetLayoutCreateInfo.bindingCount = 1;
            descriptorSetLayoutCreateInfo.pBindings = &binding;
            auto descriptorSetLayout = mDevice->create<DescriptorSetLayout>(descriptorSetLayoutCreateInfo);
            mCameraDescriptorSet = descriptorPool->allocate<DescriptorSet>(descriptorSetLayout);
            VkDescriptorBufferInfo bufferInfo{ };
            bufferInfo.buffer = *mCameraUniformBuffer;
            bufferInfo.range = VK_WHOLE_SIZE;
            DescriptorSet::Write write { };
            write.dstSet = *mCameraDescriptorSet;
            write.descriptorCount = 1;
            write.descriptorType = VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER;
            write.pBufferInfo = &bufferInfo;
            vkUpdateDescriptorSets(*mDevice, 1, &write, 0, nullptr);
        }

        void update(
            const dst::Clock& clock,
            const dst::sys::Input& input
        ) override final
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
            float w = playAreaExtent.x * 0.5f;
            float h = playAreaExtent.y * 0.5f;
            auto viewFromWorld = glm::lookAt(glm::vec3 { 0, 0, 0.5f }, glm::vec3 { }, glm::vec3 { 0, 1, 0 });
            auto projectionFromView = glm::ortho(-w, w, h, -h, -1.0f, 1.0f);
            auto projectionFromWorld = projectionFromView * viewFromWorld;
            mCameraUniformBuffer->write<glm::mat4>(projectionFromWorld);
            mEntityManager->update(clock, input, playAreaExtent, mRng);
        }

        void record_swapchain_render_pass(
            const dst::Clock& clock,
            const dst::vk::CommandBuffer& commandBuffer
        ) override final
        {
            mGrid->record_draw_cmds(commandBuffer, *mCameraDescriptorSet);
            mEntityManager->record_draw_cmds(commandBuffer, *mCameraDescriptorSet);
        }
    };

} // namespace ShapeBlaster

int main()
{
    ShapeBlaster::Application().start();
    return 0;
}
