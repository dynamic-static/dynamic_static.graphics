
#if 0
/*
==========================================
    Copyright (c) 2017 Dynamic_Static
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "Dynamic_Static/Core/Math.hpp"
#include "Dynamic_Static/Core/Time.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Defines.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Descriptor.Set.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Pipeline.hpp"
#include "Dynamic_Static/System/Input.hpp"

#include "imgui.h"

#include <vector>

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    /**
     * TODO : Documentation.
     */
    class ImGUI final
    {
        // TODO : This thing needs alot of work, but it's doing the job for now.

    private:
        struct PushConstants final
        {
            glm::vec2 translation;
            glm::vec2 scale;
        } mPushConstants;

        std::shared_ptr<Descriptor::Set::Layout> mDescriptorSetLayout;
        std::shared_ptr<Pipeline::Layout> mPipelineLayout;
        std::shared_ptr<Pipeline> mPipeline;
        std::shared_ptr<Image> mFontImage;
        std::shared_ptr<Buffer> mVertexBuffer;
        std::shared_ptr<Buffer> mIndexBuffer;
        std::shared_ptr<Descriptor::Pool> mDescriptorPool;
        Descriptor::Set* mDescriptorSet { nullptr };
        std::shared_ptr<Sampler> mSampler;
        int32_t mVertexCount { 0 };
        int32_t mIndexCount { 0 };

    public:
        /**
         * TODO : Documentation.
         */
        ImGUI() = default;

        /**
         * TODO : Documentation.
         */
        ImGUI(Device& device, RenderPass& renderPass, Queue& queue);

    public:
        /**
         * TODO : Documentation.
         */
        void begin_frame(
            const dst::Clock& clock,
            const dst::sys::Input& input,
            const glm::vec2& displayArea
        );

        /**
         * TODO : Documentation.
         */
        bool end_frame();

        /**
         * TODO : Documentation.
         */
        void draw(Command::Buffer& commandBuffer);
    };

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
#endif