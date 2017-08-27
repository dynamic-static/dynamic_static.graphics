
/*
==========================================
    Copyright (c) 2017 Dynamic_Static 
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

// Renders a box and its reflection using an offscreen RenderTarget.
// Based on https://github.com/SaschaWillems/Vulkan/tree/master/offscreen

#include "Dynamic_Static/Core/Math.hpp"
#include "Dynamic_Static/Core/Time.hpp"
#include "Dynamic_Static/Graphics/Camera.hpp"
#include "Dynamic_Static/Graphics/FreeCameraController.hpp"
#include "Dynamic_Static/Graphics/ImageCache.hpp"
#include "Dynamic_Static/Graphics/ImageReader.hpp"
#include "Dynamic_Static/Graphics/Vulkan.hpp"
#include "Dynamic_Static/Graphics/Window.hpp"

#include <algorithm>
#include <array>
#include <iostream>
#include <memory>

using namespace dst::gfx;
using namespace dst::gfx::vlkn;

using PipelinePair = std::pair<std::shared_ptr<Pipeline>, std::shared_ptr<Pipeline::Layout>>;

class Mesh final
{
public:
    std::shared_ptr<Buffer> vertexBuffer;
    std::shared_ptr<Buffer> indexBuffer;
    size_t indexCount { 0 };

public:
    void render(Command::Buffer& commandBuffer)
    {
        commandBuffer.bind_vertex_buffer(*vertexBuffer);
        commandBuffer.bind_index_buffer(*indexBuffer);
        commandBuffer.draw_indexed(indexCount);
    }
};

class RenderTarget_ex final
{
public:
    std::shared_ptr<Framebuffer> framebuffer;
    std::shared_ptr<Image> colorAttachment;
    std::shared_ptr<Memory> colorAttachmentMemory;
    std::shared_ptr<Image> depthAttachment;
    std::shared_ptr<Memory> depthAttachmentMemory;

public:
    RenderTarget_ex(RenderPass& renderPass, uint32_t width, uint32_t height, VkFormat format, VkFormat depthFormat)
    {
        auto& device = renderPass.device();

        Image::Info imageInfo;
        imageInfo.imageType = VK_IMAGE_TYPE_2D;
        imageInfo.extent.width = width;
        imageInfo.extent.height = height;
        imageInfo.format = format;
        imageInfo.usage = VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT | VK_IMAGE_USAGE_SAMPLED_BIT;
        colorAttachment = device.create<Image>(imageInfo);
        auto memoryRequirements = colorAttachment->memory_requirements();

        // Memory::Info memoryInfo;
        auto memoryInfo = Memory::AllocateInfo;
        memoryInfo.allocationSize = memoryRequirements.size;
        memoryInfo.memoryTypeIndex = device.physical_device().find_memory_type_index(
            memoryRequirements.memoryTypeBits,
            VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT
        );

        colorAttachmentMemory = device.allocate<Memory>(memoryInfo);
        colorAttachment->bind_memory(colorAttachmentMemory);
        colorAttachment->create<Image::View>();

        imageInfo.format = depthFormat;
        imageInfo.usage = VK_IMAGE_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT;
        depthAttachment = device.create<Image>(imageInfo);
        memoryRequirements = depthAttachment->memory_requirements();

        memoryInfo.allocationSize = memoryRequirements.size;
        memoryInfo.memoryTypeIndex = device.physical_device().find_memory_type_index(
            memoryRequirements.memoryTypeBits,
            VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT
        );

        depthAttachmentMemory = device.allocate<Memory>(memoryInfo);
        depthAttachment->bind_memory(depthAttachmentMemory);
        depthAttachment->create<Image::View>();

        std::array<VkImageView, 2> attachments;
        attachments[0] = *colorAttachment->view();
        attachments[1] = *depthAttachment->view();

        Framebuffer::Info framebufferInfo;
        framebufferInfo.renderPass = renderPass;
        framebufferInfo.attachmentCount = static_cast<uint32_t>(attachments.size());
        framebufferInfo.pAttachments = attachments.data();
        framebufferInfo.width = width;
        framebufferInfo.height = height;
        framebuffer = renderPass.device().create<Framebuffer>(framebufferInfo);
    }

public:
    const VkExtent3D& extent() const
    {
        return colorAttachment->extent();
    }
};

struct UniformBuffer final
{
    dst::Matrix4x4 world;
    dst::Matrix4x4 view;
    dst::Matrix4x4 projection;
};

struct Vertex final
{
    dst::Vector3 position;
    dst::Vector2 texCoord;
    dst::Color color;

    static VkVertexInputBindingDescription binding_description()
    {
        VkVertexInputBindingDescription binding;
        binding.binding = 0;
        binding.stride = sizeof(Vertex);
        binding.inputRate = VK_VERTEX_INPUT_RATE_VERTEX;
        return binding;
    }

    static std::array<VkVertexInputAttributeDescription, 3> attribute_descriptions()
    {
        VkVertexInputAttributeDescription positionAttribute;
        positionAttribute.binding = 0;
        positionAttribute.location = 0;
        positionAttribute.format = VK_FORMAT_R32G32B32_SFLOAT;
        positionAttribute.offset = offsetof(Vertex, position);

        VkVertexInputAttributeDescription texCoordAttribute;
        texCoordAttribute.binding = 0;
        texCoordAttribute.location = 1;
        texCoordAttribute.format = VK_FORMAT_R32G32_SFLOAT;
        texCoordAttribute.offset = offsetof(Vertex, texCoord);

        VkVertexInputAttributeDescription colorAttribute;
        colorAttribute.binding = 0;
        colorAttribute.location = 2;
        colorAttribute.format = VK_FORMAT_R32G32B32A32_SFLOAT;
        colorAttribute.offset = offsetof(Vertex, color);

        return {
            positionAttribute,
            texCoordAttribute,
            colorAttribute
        };
    }

    static VkPipelineVertexInputStateCreateInfo pipeline_input_state()
    {
        static auto bindindDescription = binding_description();
        static auto attributeDescriptions = attribute_descriptions();
        VkPipelineVertexInputStateCreateInfo inputState { };
        inputState.sType = VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO;
        inputState.vertexBindingDescriptionCount = 1;
        inputState.pVertexBindingDescriptions = &bindindDescription;
        inputState.vertexAttributeDescriptionCount = static_cast<uint32_t>(attributeDescriptions.size());
        inputState.pVertexAttributeDescriptions = attributeDescriptions.data();
        return inputState;
    }
};

template <typename FuncType>
void process_transient_command_buffer(Command::Pool& commandPool, Queue& queue, const FuncType& f)
{
    auto commandBuffer = commandPool.allocate_transient<Command::Buffer>();
    Command::Buffer::BeginInfo beginInfo;
    beginInfo.flags = VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT;
    commandBuffer->begin(beginInfo);
    f(*commandBuffer);
    commandBuffer->end();
    Queue::SubmitInfo submitInfo;
    submitInfo.commandBufferCount = 1;
    submitInfo.pCommandBuffers = &commandBuffer->handle();
    queue.submit(submitInfo);
    queue.wait_idle();
}

VkImageMemoryBarrier create_layout_transition_barrier(Image& image, VkImageLayout oldLayout, VkImageLayout newLayout)
{
    VkImageMemoryBarrier barrier { };
    barrier.sType = VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER;
    barrier.srcQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
    barrier.dstQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
    barrier.subresourceRange.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
    barrier.subresourceRange.baseMipLevel = 0;
    barrier.subresourceRange.levelCount = 1;
    barrier.subresourceRange.baseArrayLayer = 0;
    barrier.subresourceRange.layerCount = 1;
    barrier.oldLayout = oldLayout;
    barrier.newLayout = newLayout;
    barrier.image = image;

    if (oldLayout == VK_IMAGE_LAYOUT_PREINITIALIZED && newLayout == VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL) {
        barrier.srcAccessMask = VK_ACCESS_HOST_WRITE_BIT;
        barrier.dstAccessMask = VK_ACCESS_TRANSFER_READ_BIT;
    } else
    if (oldLayout == VK_IMAGE_LAYOUT_PREINITIALIZED && newLayout == VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL) {
        barrier.srcAccessMask = VK_ACCESS_HOST_WRITE_BIT;
        barrier.dstAccessMask = VK_ACCESS_TRANSFER_WRITE_BIT;
    } else
    if (oldLayout == VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL && newLayout == VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL) {
        barrier.srcAccessMask = VK_ACCESS_TRANSFER_WRITE_BIT;
        barrier.dstAccessMask = VK_ACCESS_SHADER_READ_BIT;
    } else
    if (oldLayout == VK_IMAGE_LAYOUT_UNDEFINED && newLayout == VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL) {
        barrier.srcAccessMask = 0;
        barrier.dstAccessMask = VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_READ_BIT | VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_WRITE_BIT;
    } else {
        throw std::invalid_argument("Unsupported layout transition");
    }

    return barrier;
}

Mesh create_mesh(
    Device& device,
    Command::Pool& commandPool,
    Queue& queue,
    const std::vector<Vertex>& vertices,
    const std::vector<uint16_t>& indices
)
{
    Mesh mesh;

    auto vertexBufferSize = static_cast<VkDeviceSize>(sizeof(vertices[0]) * vertices.size());
    Buffer::Info vertexBufferInfo;
    vertexBufferInfo.size = vertexBufferSize;
    vertexBufferInfo.usage = VK_BUFFER_USAGE_TRANSFER_DST_BIT | VK_BUFFER_USAGE_VERTEX_BUFFER_BIT;
    auto vertexMemoryProperties = VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT;
    mesh.vertexBuffer = device.create<Buffer>(vertexBufferInfo, vertexMemoryProperties);

    Buffer::Info stagingBufferInfo;
    stagingBufferInfo.size = vertexBufferSize;
    stagingBufferInfo.usage = VK_BUFFER_USAGE_TRANSFER_SRC_BIT;
    auto stagingMemoryProperties = VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT | VK_MEMORY_PROPERTY_HOST_COHERENT_BIT;
    auto stagingBuffer = device.create<Buffer>(stagingBufferInfo, stagingMemoryProperties);
    stagingBuffer->write<Vertex>(vertices);

    process_transient_command_buffer(
        commandPool,
        queue,
        [&](Command::Buffer& commandBuffer)
        {
            VkBufferCopy copyInfo { };
            copyInfo.size = vertexBufferSize;
            commandBuffer.copy_buffer(*stagingBuffer, *mesh.vertexBuffer, vertexBufferSize);
        }
    );

    auto indexBufferSize = static_cast<VkDeviceSize>(sizeof(indices[0]) * indices.size());
    Buffer::Info indexBufferInfo;
    indexBufferInfo.size = indexBufferSize;
    indexBufferInfo.usage = VK_BUFFER_USAGE_TRANSFER_DST_BIT | VK_BUFFER_USAGE_INDEX_BUFFER_BIT;
    auto indexMemoryProperties = VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT;
    mesh.indexBuffer = device.create<Buffer>(vertexBufferInfo, vertexMemoryProperties);
    stagingBuffer->write<uint16_t>(indices);

    process_transient_command_buffer(
        commandPool,
        queue,
        [&](Command::Buffer& commandBuffer)
        {
            VkBufferCopy copyInfo { };
            copyInfo.size = indexBufferSize;
            commandBuffer.copy_buffer(*stagingBuffer, *mesh.indexBuffer, indexBufferSize);
        }
    );

    mesh.indexCount = indices.size();
    return mesh;
}

Mesh create_box(
    Device& device,
    Command::Pool& commandPool,
    Queue& queue,
    float width,
    float height,
    float depth,
    const dst::Color& color0,
    const dst::Color& color1
)
{
    float w = width * 0.5f;
    float h = height * 0.5f;
    float d = depth * 0.5f;
    const std::vector<Vertex> vertices {
        // Top
        { { -w,  h, -d }, { 0, 1 }, { color0 } },
        { {  w,  h, -d }, { 1, 1 }, { color0 } },
        { {  w,  h,  d }, { 1, 0 }, { color0 } },
        { { -w,  h,  d }, { 0, 0 }, { color0 } },

        // Left
        { { -w,  h, -d }, { 0, 0 }, { color0 } },
        { { -w,  h,  d }, { 0, 0 }, { color0 } },
        { { -w, -h,  d }, { 0, 0 }, { color1 } },
        { { -w, -h, -d }, { 0, 0 }, { color1 } },

        // Front
        { { -w,  h, w }, { 0, 0 }, { color0 } },
        { {  w,  h, w }, { 0, 0 }, { color0 } },
        { {  w, -h, w }, { 0, 0 }, { color1 } },
        { { -w, -h, w }, { 0, 0 }, { color1 } },

        // Right
        { { w,  h,  d }, { 0, 0 }, { color0 } },
        { { w,  h, -d }, { 0, 0 }, { color0 } },
        { { w, -h, -d }, { 0, 0 }, { color1 } },
        { { w, -h,  d }, { 0, 0 }, { color1 } },

        // Back
        { {  w,  h, -d }, { 0, 0 }, { color0 } },
        { { -w,  h, -d }, { 0, 0 }, { color0 } },
        { { -w, -h, -d }, { 0, 0 }, { color1 } },
        { {  w, -h, -d }, { 0, 0 }, { color1 } },

        // Bottom
        { { -w, -h,  d }, { 0, 0 }, { color1 } },
        { {  w, -h,  d }, { 0, 0 }, { color1 } },
        { {  w, -h, -d }, { 0, 0 }, { color1 } },
        { { -w, -h, -d }, { 0, 0 }, { color1 } },
    };

    size_t vertex_i = 0;
    size_t faceCount = 6;
    size_t indicesPerFace = 6;
    std::vector<uint16_t> indices;
    indices.reserve(indicesPerFace * faceCount);
    for (size_t face_i = 0; face_i < faceCount; ++face_i) {
        indices.push_back(static_cast<uint16_t>(vertex_i + 0));
        indices.push_back(static_cast<uint16_t>(vertex_i + 1));
        indices.push_back(static_cast<uint16_t>(vertex_i + 2));
        indices.push_back(static_cast<uint16_t>(vertex_i + 2));
        indices.push_back(static_cast<uint16_t>(vertex_i + 3));
        indices.push_back(static_cast<uint16_t>(vertex_i + 0));
        vertex_i += 4;
    }

    return create_mesh(device, commandPool, queue, vertices, indices);
}

VkAttachmentDescription default_attachment_description()
{
    VkAttachmentDescription attachmentDescription { };
    attachmentDescription.format = VK_FORMAT_UNDEFINED;
    attachmentDescription.samples = VK_SAMPLE_COUNT_1_BIT;
    attachmentDescription.loadOp = VK_ATTACHMENT_LOAD_OP_DONT_CARE;
    attachmentDescription.storeOp = VK_ATTACHMENT_STORE_OP_DONT_CARE;
    attachmentDescription.stencilLoadOp = VK_ATTACHMENT_LOAD_OP_DONT_CARE;
    attachmentDescription.stencilStoreOp = VK_ATTACHMENT_STORE_OP_DONT_CARE;
    attachmentDescription.initialLayout = VK_IMAGE_LAYOUT_UNDEFINED;
    attachmentDescription.finalLayout = VK_IMAGE_LAYOUT_UNDEFINED;
    return attachmentDescription;
}

std::shared_ptr<RenderPass> create_non_reflective_render_pass(Device& device, VkFormat format, VkFormat& depthFormat)
{
    auto colorAttachment = default_attachment_description();
    colorAttachment.format = format;
    colorAttachment.loadOp = VK_ATTACHMENT_LOAD_OP_CLEAR;
    colorAttachment.storeOp = VK_ATTACHMENT_STORE_OP_STORE;
    colorAttachment.finalLayout = VK_IMAGE_LAYOUT_PRESENT_SRC_KHR;
    VkAttachmentReference colorAttachmentReference { };
    colorAttachmentReference.attachment = 0;
    colorAttachmentReference.layout = VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL;

    auto depthAttachment = default_attachment_description();
    depthAttachment.format = depthFormat;
    depthAttachment.loadOp = VK_ATTACHMENT_LOAD_OP_CLEAR;
    depthAttachment.finalLayout = VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL;
    VkAttachmentReference depthAttachmentReference { };
    depthAttachmentReference.attachment = 1;
    depthAttachmentReference.layout = VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL;

    VkSubpassDescription subpass { };
    subpass.pipelineBindPoint = VK_PIPELINE_BIND_POINT_GRAPHICS;
    subpass.colorAttachmentCount = 1;
    subpass.pColorAttachments = &colorAttachmentReference;
    subpass.pDepthStencilAttachment = &depthAttachmentReference;

    std::array<VkAttachmentDescription, 2> attachments { colorAttachment, depthAttachment };
    RenderPass::Info renderPassInfo;
    renderPassInfo.attachmentCount = static_cast<uint32_t>(attachments.size());
    renderPassInfo.pAttachments = attachments.data();
    renderPassInfo.subpassCount = 1;
    renderPassInfo.pSubpasses = &subpass;
    return device.create<RenderPass>(renderPassInfo);
}

std::shared_ptr<Descriptor::Set::Layout> create_non_reflective_descriptor_set_layout(Device& device)
{
    VkDescriptorSetLayoutBinding uniformBufferLayoutBinding { };
    uniformBufferLayoutBinding.binding = 0;
    uniformBufferLayoutBinding.descriptorCount = 1;
    uniformBufferLayoutBinding.descriptorType = VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER;
    uniformBufferLayoutBinding.stageFlags = VK_SHADER_STAGE_VERTEX_BIT;

    VkDescriptorSetLayoutBinding samplerLayoutBinding { };
    samplerLayoutBinding.binding = 1;
    samplerLayoutBinding.descriptorCount = 1;
    samplerLayoutBinding.descriptorType = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
    samplerLayoutBinding.stageFlags = VK_SHADER_STAGE_FRAGMENT_BIT;

    std::array<VkDescriptorSetLayoutBinding, 2> descriptorSetLayoutBinding {
        uniformBufferLayoutBinding,
        samplerLayoutBinding
    };

    Descriptor::Set::Layout::Info descriptorSetLayoutInfo;
    descriptorSetLayoutInfo.bindingCount = static_cast<uint32_t>(descriptorSetLayoutBinding.size());
    descriptorSetLayoutInfo.pBindings = descriptorSetLayoutBinding.data();
    return device.create<Descriptor::Set::Layout>(descriptorSetLayoutInfo);
}

std::shared_ptr<RenderPass> create_reflective_render_pass(Device& device, VkFormat format, VkFormat& depthFormat)
{
    auto colorAttachment = default_attachment_description();
    colorAttachment.format = format;
    colorAttachment.loadOp = VK_ATTACHMENT_LOAD_OP_CLEAR;
    colorAttachment.storeOp = VK_ATTACHMENT_STORE_OP_STORE;
    colorAttachment.finalLayout = VK_IMAGE_LAYOUT_PRESENT_SRC_KHR;
    VkAttachmentReference colorAttachmentReference { };
    colorAttachmentReference.attachment = 0;
    colorAttachmentReference.layout = VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL;

    std::array<VkFormat, 3> depthFormats {
        VK_FORMAT_D32_SFLOAT, VK_FORMAT_D32_SFLOAT_S8_UINT, VK_FORMAT_D24_UNORM_S8_UINT
    };

    depthFormat = device.physical_device().find_supported_format(
        depthFormats,
        VK_IMAGE_TILING_OPTIMAL,
        VK_FORMAT_FEATURE_DEPTH_STENCIL_ATTACHMENT_BIT
    );

    auto depthAttachment = default_attachment_description();
    depthAttachment.format = depthFormat;
    depthAttachment.loadOp = VK_ATTACHMENT_LOAD_OP_CLEAR;
    depthAttachment.finalLayout = VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL;
    VkAttachmentReference depthAttachmentReference { };
    depthAttachmentReference.attachment = 1;
    depthAttachmentReference.layout = VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL;

    VkSubpassDescription subpass { };
    subpass.pipelineBindPoint = VK_PIPELINE_BIND_POINT_GRAPHICS;
    subpass.colorAttachmentCount = 1;
    subpass.pColorAttachments = &colorAttachmentReference;
    subpass.pDepthStencilAttachment = &depthAttachmentReference;

    std::array<VkAttachmentDescription, 2> attachments { colorAttachment, depthAttachment };
    RenderPass::Info renderPassInfo;
    renderPassInfo.attachmentCount = static_cast<uint32_t>(attachments.size());
    renderPassInfo.pAttachments = attachments.data();
    renderPassInfo.subpassCount = 1;
    renderPassInfo.pSubpasses = &subpass;
    return device.create<RenderPass>(renderPassInfo);
}

std::shared_ptr<Descriptor::Set::Layout> create_reflective_descriptor_set_layout(Device& device)
{
    VkDescriptorSetLayoutBinding uniformBufferLayoutBinding { };
    uniformBufferLayoutBinding.binding = 0;
    uniformBufferLayoutBinding.descriptorCount = 1;
    uniformBufferLayoutBinding.descriptorType = VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER;
    uniformBufferLayoutBinding.stageFlags = VK_SHADER_STAGE_VERTEX_BIT;

    VkDescriptorSetLayoutBinding samplerLayoutBinding { };
    samplerLayoutBinding.binding = 1;
    samplerLayoutBinding.descriptorCount = 1;
    samplerLayoutBinding.descriptorType = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
    samplerLayoutBinding.stageFlags = VK_SHADER_STAGE_FRAGMENT_BIT;

    std::array<VkDescriptorSetLayoutBinding, 2> descriptorSetLayoutBinding {
        uniformBufferLayoutBinding,
        samplerLayoutBinding
    };

    Descriptor::Set::Layout::Info descriptorSetLayoutInfo;
    descriptorSetLayoutInfo.bindingCount = static_cast<uint32_t>(descriptorSetLayoutBinding.size());
    descriptorSetLayoutInfo.pBindings = descriptorSetLayoutBinding.data();
    return device.create<Descriptor::Set::Layout>(descriptorSetLayoutInfo);
}

PipelinePair create_pipeline(
    RenderPass& renderPass,
    Descriptor::Set::Layout& descriptorSetLayout,
    const std::string& vertexShaderSource,
    const std::string& fragmentShaderSource
)
{
    auto& device = descriptorSetLayout.device();

    auto vertexShader = device.create<ShaderModule>(
        VK_SHADER_STAGE_VERTEX_BIT,
        ShaderModule::Source::Code,
        vertexShaderSource
    );

    auto fragmentShader = device.create<ShaderModule>(
        VK_SHADER_STAGE_FRAGMENT_BIT,
        ShaderModule::Source::Code,
        fragmentShaderSource
    );

    std::array<VkPipelineShaderStageCreateInfo, 2> shaderStages {
        vertexShader->pipeline_stage_info(),
        fragmentShader->pipeline_stage_info()
    };

    VkPipelineInputAssemblyStateCreateInfo inputAssemblyInfo { };
    inputAssemblyInfo.sType = VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO;
    inputAssemblyInfo.topology = VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST;

    VkPipelineRasterizationStateCreateInfo rasterizationInfo { };
    rasterizationInfo.sType = VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO;
    rasterizationInfo.polygonMode = VK_POLYGON_MODE_FILL;
    rasterizationInfo.lineWidth = 1;
    rasterizationInfo.cullMode = VK_CULL_MODE_NONE; //  VK_CULL_MODE_BACK_BIT;
    rasterizationInfo.frontFace = VK_FRONT_FACE_CLOCKWISE;

    VkPipelineMultisampleStateCreateInfo multisampleInfo { };
    multisampleInfo.sType = VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO;
    multisampleInfo.rasterizationSamples = VK_SAMPLE_COUNT_1_BIT;
    multisampleInfo.minSampleShading = 1;

    VkPipelineDepthStencilStateCreateInfo depthStencilInfo { };
    depthStencilInfo.sType = VK_STRUCTURE_TYPE_PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO;
    depthStencilInfo.depthTestEnable = VK_TRUE;
    depthStencilInfo.depthWriteEnable = VK_TRUE;
    depthStencilInfo.depthCompareOp = VK_COMPARE_OP_LESS;
    depthStencilInfo.depthBoundsTestEnable = VK_FALSE;
    depthStencilInfo.stencilTestEnable = VK_FALSE;

    VkPipelineColorBlendAttachmentState colorBlendAttachment { };
    colorBlendAttachment.blendEnable = VK_FALSE;
    colorBlendAttachment.srcColorBlendFactor = VK_BLEND_FACTOR_SRC_ALPHA;
    colorBlendAttachment.dstColorBlendFactor = VK_BLEND_FACTOR_ONE_MINUS_SRC_ALPHA;
    colorBlendAttachment.colorBlendOp = VK_BLEND_OP_ADD;
    colorBlendAttachment.srcAlphaBlendFactor = VK_BLEND_FACTOR_ONE;
    colorBlendAttachment.dstAlphaBlendFactor = VK_BLEND_FACTOR_ZERO;
    colorBlendAttachment.alphaBlendOp = VK_BLEND_OP_ADD;
    colorBlendAttachment.colorWriteMask =
        VK_COLOR_COMPONENT_R_BIT |
        VK_COLOR_COMPONENT_G_BIT |
        VK_COLOR_COMPONENT_B_BIT |
        VK_COLOR_COMPONENT_A_BIT;

    VkPipelineColorBlendStateCreateInfo colorBlendStateInfo { };
    colorBlendStateInfo.sType = VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO;
    colorBlendStateInfo.attachmentCount = 1;
    colorBlendStateInfo.pAttachments = &colorBlendAttachment;

    VkViewport viewport { };
    VkRect2D scissor { };
    VkPipelineViewportStateCreateInfo viewportInfo { };
    viewportInfo.sType = VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO;
    viewportInfo.viewportCount = 1;
    viewportInfo.pViewports = &viewport;
    viewportInfo.scissorCount = 1;
    viewportInfo.pScissors = &scissor;

    std::array<VkDynamicState, 2> dynamicStates {
        VK_DYNAMIC_STATE_VIEWPORT,
        VK_DYNAMIC_STATE_SCISSOR
    };

    VkPipelineDynamicStateCreateInfo dynamicStateInfo { };
    dynamicStateInfo.sType = VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO;
    dynamicStateInfo.dynamicStateCount = static_cast<uint32_t>(dynamicStates.size());
    dynamicStateInfo.pDynamicStates = dynamicStates.data();

    Pipeline::Layout::Info pipelineLayoutInfo;
    pipelineLayoutInfo.setLayoutCount = 1;
    pipelineLayoutInfo.pSetLayouts = &descriptorSetLayout.handle();
    auto pipelineLayout = device.create<Pipeline::Layout>(pipelineLayoutInfo);

    auto vertexInputInfo = Vertex::pipeline_input_state();
    Pipeline::GraphicsInfo pipelineInfo;
    pipelineInfo.stageCount = static_cast<uint32_t>(shaderStages.size());
    pipelineInfo.pStages = shaderStages.data();
    pipelineInfo.pVertexInputState = &vertexInputInfo;
    pipelineInfo.pInputAssemblyState = &inputAssemblyInfo;
    pipelineInfo.pViewportState = &viewportInfo;
    pipelineInfo.pRasterizationState = &rasterizationInfo;
    pipelineInfo.pMultisampleState = &multisampleInfo;
    pipelineInfo.pDepthStencilState = &depthStencilInfo;
    pipelineInfo.pColorBlendState = &colorBlendStateInfo;
    pipelineInfo.pDynamicState = &dynamicStateInfo;
    pipelineInfo.layout = *pipelineLayout;
    pipelineInfo.renderPass = renderPass;
    pipelineInfo.subpass = 0;
    return std::make_pair(device.create<Pipeline>(pipelineInfo), pipelineLayout);
}

PipelinePair create_untextured_pipeline(
    RenderPass& renderPass,
    Descriptor::Set::Layout& descriptorSetLayout
)
{
    return create_pipeline(
        renderPass,
        descriptorSetLayout,
        R"(

            #version 450
            #extension GL_ARB_separate_shader_objects : enable
            
            layout(binding = 0)
            uniform UniformBuffer
            {
                mat4 world;
                mat4 view;
                mat4 projection;
            } ubo;
            
            layout(location = 0) in vec3 inPosition;
            layout(location = 1) in vec2 inTexCoord;
            layout(location = 2) in vec4 inColor;
            
            layout(location = 0) out vec2 fragTexCoord;
            layout(location = 1) out vec4 fragColor;
            
            out gl_PerVertex
            {
                vec4 gl_Position;
            };
            
            void main()
            {
                gl_Position = ubo.projection * ubo.view * ubo.world * vec4(inPosition, 1);
                fragTexCoord = inTexCoord;
                fragColor = inColor;
            }

        )",
        R"(

            #version 450
            #extension GL_ARB_separate_shader_objects : enable
            
            layout(binding = 1) uniform sampler2D imageSampler;
            
            layout(location = 0) in vec2 fragTexCoord;
            layout(location = 1) in vec4 fragColor;
            
            layout(location = 0) out vec4 outColor;
            
            void main()
            {
                // outColor = texture(imageSampler, fragTexCoord);
                outColor.a = 1;
                outColor.rgb = fragColor.rgb;
            }

        )"
    );
}

PipelinePair create_textured_pipeline(
    RenderPass& renderPass,
    Descriptor::Set::Layout& descriptorSetLayout
)
{
    return create_pipeline(
        renderPass,
        descriptorSetLayout,
        R"(

            #version 450
            #extension GL_ARB_separate_shader_objects : enable
            
            layout(binding = 0)
            uniform UniformBuffer
            {
                mat4 world;
                mat4 view;
                mat4 projection;
            } ubo;
            
            layout(location = 0) in vec3 vsPosition;
            layout(location = 1) in vec2 vsTexCoord;
            layout(location = 2) in vec4 vsColor;
            
            layout(location = 0) out vec4 fsPosition;
            layout(location = 1) out vec2 fsTexCoord;
            layout(location = 2) out vec4 fsColor;

            out gl_PerVertex
            {
                vec4 gl_Position;
            };

            void main()
            {
                fsPosition = ubo.projection * ubo.view * ubo.world * vec4(vsPosition, 1);
                gl_Position = fsPosition;
                fsTexCoord = vsTexCoord;
                fsColor = vsColor;
            }

        )",
        R"(

            #version 450
            #extension GL_ARB_separate_shader_objects : enable

            #define BLUR_SAMPLES (3)
            #define BLUR ((BLUR_SAMPLES - 1) * 0.5)
            #define BLUR_AVERAGE (BLUR_SAMPLES * BLUR_SAMPLES)
            
            layout(binding = 1) uniform sampler2D imageSampler;
            
            layout(location = 0) in vec4 fsPosition;
            layout(location = 1) in vec2 fsTexCoord;
            layout(location = 2) in vec4 fsColor;
            
            layout(location = 0) out vec4 fragColor;
            
            void main()
            {
                vec4 position = fsPosition * (1.0 / fsPosition.w);
                position += vec4(1);
                position *= 0.5;

                vec4 reflection = vec4(0);
                vec2 size = 1.0 / textureSize(imageSampler, 0);
                // NOTE : This is a terrible blur that should never be used...
                for (float y = -BLUR; y <= BLUR; ++y) {
                    for (float x = -BLUR; x <= BLUR; ++x) {
                        vec2 uv = position.st + vec2(x, y) * size;
                        reflection += texture(imageSampler, uv) / BLUR_AVERAGE;
                    }
                }

                reflection.a *= 0.48;
                reflection.rgb *= reflection.a;
                reflection.rgb *= step(0.001, dot(fsTexCoord, vec2(0.5)));

                fragColor.a = 1;
                fragColor.rb = fsTexCoord * (1 - reflection.a);
                fragColor.g = dot(fragColor.rb, vec2(0.5)) * 0.5;
                fragColor.rgb += reflection.rgb;
            }

        )"
    );
}

std::shared_ptr<Descriptor::Pool> create_non_reflective_descriptor_pool(Device& device, Descriptor::Set::Layout& descriptorSetLayout)
{
    std::array<VkDescriptorPoolSize, 2> descriptorPoolSizes;
    descriptorPoolSizes[0].type = VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER;
    descriptorPoolSizes[0].descriptorCount = 1;
    descriptorPoolSizes[1].type = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
    descriptorPoolSizes[1].descriptorCount = 1;

    Descriptor::Pool::Info descriptorPoolInfo;
    descriptorPoolInfo.poolSizeCount = static_cast<uint32_t>(descriptorPoolSizes.size());
    descriptorPoolInfo.pPoolSizes = descriptorPoolSizes.data();
    descriptorPoolInfo.maxSets = 1;
    auto descriptorPool = device.create<Descriptor::Pool>(descriptorPoolInfo);

    Descriptor::Set::Info descriptorSetInfo;
    descriptorSetInfo.descriptorPool = *descriptorPool;
    descriptorSetInfo.descriptorSetCount = 1;
    descriptorSetInfo.pSetLayouts = &descriptorSetLayout.handle();
    descriptorPool->allocate<Descriptor::Set>(descriptorSetInfo);

    return descriptorPool;
}

void update_non_reflective_descriptor_set(
    Descriptor::Set& descriptorSet,
    Buffer& uniformBuffer,
    Image& image,
    Sampler& sampler
)
{
    VkDescriptorBufferInfo descriptorBufferInfo { };
    descriptorBufferInfo.buffer = uniformBuffer;
    descriptorBufferInfo.offset = 0;
    descriptorBufferInfo.range = sizeof(UniformBuffer);

    VkDescriptorImageInfo descriptorImageInfo { };
    descriptorImageInfo.imageLayout = VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL;
    descriptorImageInfo.imageView = *image.views()[0];
    descriptorImageInfo.sampler = sampler;

    std::array<VkWriteDescriptorSet, 2> descriptorWrites { };
    descriptorWrites[0].sType = VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET;
    descriptorWrites[0].dstSet = descriptorSet;
    descriptorWrites[0].dstBinding = 0;
    descriptorWrites[0].dstArrayElement = 0;
    descriptorWrites[0].descriptorType = VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER;
    descriptorWrites[0].descriptorCount = 1;
    descriptorWrites[0].pBufferInfo = &descriptorBufferInfo;

    descriptorWrites[1].sType = VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET;
    descriptorWrites[1].dstSet = descriptorSet;
    descriptorWrites[1].dstBinding = 1;
    descriptorWrites[1].dstArrayElement = 0;
    descriptorWrites[1].descriptorType = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
    descriptorWrites[1].descriptorCount = 1;
    descriptorWrites[1].pImageInfo = &descriptorImageInfo;
    vkUpdateDescriptorSets(
        descriptorSet.pool().device(),
        static_cast<uint32_t>(descriptorWrites.size()),
        descriptorWrites.data(),
        0,
        nullptr
    );
}

std::shared_ptr<Descriptor::Pool> create_reflective_descriptor_pool(Device& device, Descriptor::Set::Layout& descriptorSetLayout)
{
    std::array<VkDescriptorPoolSize, 2> descriptorPoolSizes;
    descriptorPoolSizes[0].type = VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER;
    descriptorPoolSizes[0].descriptorCount = 1;
    descriptorPoolSizes[1].type = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
    descriptorPoolSizes[1].descriptorCount = 1;

    Descriptor::Pool::Info descriptorPoolInfo;
    descriptorPoolInfo.poolSizeCount = static_cast<uint32_t>(descriptorPoolSizes.size());
    descriptorPoolInfo.pPoolSizes = descriptorPoolSizes.data();
    descriptorPoolInfo.maxSets = 1;
    auto descriptorPool = device.create<Descriptor::Pool>(descriptorPoolInfo);

    Descriptor::Set::Info descriptorSetInfo;
    descriptorSetInfo.descriptorPool = *descriptorPool;
    descriptorSetInfo.descriptorSetCount = 1;
    descriptorSetInfo.pSetLayouts = &descriptorSetLayout.handle();
    descriptorPool->allocate<Descriptor::Set>(descriptorSetInfo);

    return descriptorPool;
}

void update_reflective_descriptor_set(
    Descriptor::Set& descriptorSet,
    Buffer& uniformBuffer,
    Image& image,
    Sampler& sampler
)
{
    VkDescriptorBufferInfo descriptorBufferInfo { };
    descriptorBufferInfo.buffer = uniformBuffer;
    descriptorBufferInfo.offset = 0;
    descriptorBufferInfo.range = sizeof(UniformBuffer);

    VkDescriptorImageInfo descriptorImageInfo { };
    descriptorImageInfo.imageLayout = VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL;
    descriptorImageInfo.imageView = *image.views()[0];
    descriptorImageInfo.sampler = sampler;

    std::array<VkWriteDescriptorSet, 2> descriptorWrites { };
    descriptorWrites[0].sType = VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET;
    descriptorWrites[0].dstSet = descriptorSet;
    descriptorWrites[0].dstBinding = 0;
    descriptorWrites[0].dstArrayElement = 0;
    descriptorWrites[0].descriptorType = VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER;
    descriptorWrites[0].descriptorCount = 1;
    descriptorWrites[0].pBufferInfo = &descriptorBufferInfo;

    descriptorWrites[1].sType = VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET;
    descriptorWrites[1].dstSet = descriptorSet;
    descriptorWrites[1].dstBinding = 1;
    descriptorWrites[1].dstArrayElement = 0;
    descriptorWrites[1].descriptorType = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
    descriptorWrites[1].descriptorCount = 1;
    descriptorWrites[1].pImageInfo = &descriptorImageInfo;
    vkUpdateDescriptorSets(
        descriptorSet.pool().device(),
        static_cast<uint32_t>(descriptorWrites.size()),
        descriptorWrites.data(),
        0,
        nullptr
    );
}

std::shared_ptr<RenderPass> create_offscreen_render_pass(Device& device, VkFormat format, VkFormat depthFormat)
{
    std::array<VkAttachmentDescription, 2> attachmentDescriptions { };
    attachmentDescriptions[0].format = format;
    attachmentDescriptions[0].samples = VK_SAMPLE_COUNT_1_BIT;
    attachmentDescriptions[0].loadOp = VK_ATTACHMENT_LOAD_OP_CLEAR;
    attachmentDescriptions[0].storeOp = VK_ATTACHMENT_STORE_OP_STORE;
    attachmentDescriptions[0].stencilLoadOp = VK_ATTACHMENT_LOAD_OP_DONT_CARE;
    attachmentDescriptions[0].stencilStoreOp = VK_ATTACHMENT_STORE_OP_DONT_CARE;
    attachmentDescriptions[0].initialLayout = VK_IMAGE_LAYOUT_UNDEFINED;
    attachmentDescriptions[0].finalLayout = VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL;
    VkAttachmentReference colorAttachmentReference { };
    colorAttachmentReference.attachment = 0;
    colorAttachmentReference.layout = VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL;

    attachmentDescriptions[1].format = depthFormat;
    attachmentDescriptions[1].samples = VK_SAMPLE_COUNT_1_BIT;
    attachmentDescriptions[1].loadOp = VK_ATTACHMENT_LOAD_OP_CLEAR;
    attachmentDescriptions[1].storeOp = VK_ATTACHMENT_STORE_OP_DONT_CARE;
    attachmentDescriptions[1].stencilLoadOp = VK_ATTACHMENT_LOAD_OP_DONT_CARE;
    attachmentDescriptions[1].stencilStoreOp = VK_ATTACHMENT_STORE_OP_DONT_CARE;
    attachmentDescriptions[1].initialLayout = VK_IMAGE_LAYOUT_UNDEFINED;
    attachmentDescriptions[1].finalLayout = VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL;
    VkAttachmentReference depthAttachmentReference { };
    depthAttachmentReference.attachment = 1;
    depthAttachmentReference.layout = VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL;

    VkSubpassDescription subpassDescription { };
    subpassDescription.pipelineBindPoint = VK_PIPELINE_BIND_POINT_GRAPHICS;
    subpassDescription.colorAttachmentCount = 1;
    subpassDescription.pColorAttachments = &colorAttachmentReference;
    subpassDescription.pDepthStencilAttachment = &depthAttachmentReference;

    std::array<VkSubpassDependency, 2> dependencies;
    dependencies[0].srcSubpass = VK_SUBPASS_EXTERNAL;
    dependencies[0].dstSubpass = 0;
    dependencies[0].srcStageMask = VK_PIPELINE_STAGE_BOTTOM_OF_PIPE_BIT;
    dependencies[0].dstStageMask = VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT;
    dependencies[0].srcAccessMask = VK_ACCESS_MEMORY_READ_BIT;
    dependencies[0].dstAccessMask = VK_ACCESS_COLOR_ATTACHMENT_READ_BIT | VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT;
    dependencies[0].dependencyFlags = VK_DEPENDENCY_BY_REGION_BIT;

    dependencies[1].srcSubpass = 0;
    dependencies[1].dstSubpass = VK_SUBPASS_EXTERNAL;
    dependencies[1].srcStageMask = VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT;
    dependencies[1].dstStageMask = VK_PIPELINE_STAGE_BOTTOM_OF_PIPE_BIT;
    dependencies[1].srcAccessMask = VK_ACCESS_COLOR_ATTACHMENT_READ_BIT | VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT;
    dependencies[1].dstAccessMask = VK_ACCESS_MEMORY_READ_BIT;
    dependencies[1].dependencyFlags = VK_DEPENDENCY_BY_REGION_BIT;

    RenderPass::Info renderPassInfo;
    renderPassInfo.attachmentCount = static_cast<uint32_t>(attachmentDescriptions.size());
    renderPassInfo.pAttachments = attachmentDescriptions.data();
    renderPassInfo.subpassCount = 1;
    renderPassInfo.pSubpasses = &subpassDescription;
    renderPassInfo.dependencyCount = static_cast<uint32_t>(dependencies.size());
    renderPassInfo.pDependencies = dependencies.data();
    return device.create<RenderPass>(renderPassInfo);
}

int main()
{
    try
    {
        ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        // Create Instance and PhysicalDevices
        std::vector<std::string> instanceLayers;
        std::vector<std::string> instanceExtensions {
            VK_KHR_SURFACE_EXTENSION_NAME,
            #if defined(DYNAMIC_STATIC_WINDOWS)
            VK_KHR_WIN32_SURFACE_EXTENSION_NAME,
            #elif defined(DYNAMIC_STATIC_LINUX)
            VK_KHR_XLIB_SURFACE_EXTENSION_NAME,
            #endif
        };

        VkDebugReportFlagsEXT debugFlags =
            0
            #if defined(DYNAMIC_STATIC_WINDOWS)
            // | VK_DEBUG_REPORT_INFORMATION_BIT_EXT
            // | VK_DEBUG_REPORT_DEBUG_BIT_EXT
            // | VK_DEBUG_REPORT_PERFORMANCE_WARNING_BIT_EXT
            // | VK_DEBUG_REPORT_WARNING_BIT_EXT
            // | VK_DEBUG_REPORT_ERROR_BIT_EXT
            #endif
            ;

        auto instance = vlkn::create<Instance>(instanceLayers, instanceExtensions, debugFlags);
        // NOTE : We're just assuming that the first PhysicalDevice is the one we want.
        //        This won't always be the case, we should check for necessary features.
        auto& physicalDevice = *instance->physical_devices()[0];
        auto apiVersion = physicalDevice.properties().apiVersion;

        ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        // Create Window and Surface
        Window::Configuration configuration;
        configuration.api = dst::gfx::API::Vulkan;
        configuration.apiVersion.major = VK_VERSION_MAJOR(apiVersion);
        configuration.apiVersion.minor = VK_VERSION_MAJOR(apiVersion);
        configuration.apiVersion.patch = VK_VERSION_MAJOR(apiVersion);
        configuration.name = "Dynamic_Static VK.06.OffscreenRendering";
        auto window = std::make_shared<Window>(configuration);
        auto surface = physicalDevice.create<SurfaceKHR>(window);

        ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        // Create logical Device and Queues
        std::vector<std::string> deviceLayers;
        std::vector<std::string> deviceExtensions {
            VK_KHR_SWAPCHAIN_EXTENSION_NAME,
        };

        auto queueFamilyFlags = VK_QUEUE_GRAPHICS_BIT;
        auto queueFamilyIndices = physicalDevice.find_queue_families(queueFamilyFlags);
        Queue::Info queueInfo { };
        std::array<float, 1> queuePriorities { };
        queueInfo.pQueuePriorities = queuePriorities.data();
        // NOTE : We're assuming that we got at least one Queue capabale of
        //        graphics, in anything but a toy we want to validate that.
        queueInfo.queueFamilyIndex = static_cast<uint32_t>(queueFamilyIndices[0]);
        std::array<Queue::Info, 1> queueInfos { queueInfo };
        auto device = physicalDevice.create<Device>(deviceLayers, deviceExtensions, queueInfos);
        // NOTE : We're assuming that the Queue we're choosing for graphics
        //        is capable of presenting, this may not always be the case.
        auto& graphicsQueue = *device->queues()[0][0];
        auto& presentQueue = graphicsQueue;

        ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        // Create SwapChain
        std::shared_ptr<SwapchainKHR> swapchain;
        if (surface->presentation_supported(presentQueue.family_index())) {
            swapchain = device->create<SwapchainKHR>(surface);
        } else {
            throw std::runtime_error("Surface doesn't support presentation");
        }

        ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        // Create RenderPasss
        VkFormat depthFormat = VK_FORMAT_UNDEFINED;
        depthFormat = VK_FORMAT_UNDEFINED;
        std::array<VkFormat, 3> depthFormats {
            VK_FORMAT_D32_SFLOAT, VK_FORMAT_D32_SFLOAT_S8_UINT, VK_FORMAT_D24_UNORM_S8_UINT
        };

        depthFormat = device->physical_device().find_supported_format(
            depthFormats,
            VK_IMAGE_TILING_OPTIMAL,
            VK_FORMAT_FEATURE_DEPTH_STENCIL_ATTACHMENT_BIT
        );

        auto offscreenRenderPass = create_offscreen_render_pass(*device, VK_FORMAT_R8G8B8A8_UNORM, depthFormat);
        RenderTarget_ex offscreenRenderTarget(*offscreenRenderPass, 1024, 1024, VK_FORMAT_R8G8B8A8_UNORM, depthFormat);
        auto cubeRenderPass = create_non_reflective_render_pass(*device, swapchain->format(), depthFormat);
        auto floorRenderPass = create_reflective_render_pass(*device, swapchain->format(), depthFormat);

        ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        // Create DescriptorSet::Layouts
        auto offscreenDescriptorSetLayout = create_non_reflective_descriptor_set_layout(*device);
        auto cubeDescriptorSetLayout = create_non_reflective_descriptor_set_layout(*device);
        auto floorDescriptorSetLayout = create_reflective_descriptor_set_layout(*device);

        ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        // Create Pipelines
        auto offscreenPipelinePair = create_untextured_pipeline(*offscreenRenderPass, *offscreenDescriptorSetLayout);
        auto offscreenPipeline = offscreenPipelinePair.first;
        auto offscreenPipelineLayout = offscreenPipelinePair.second;

        auto cubePipelinePair = create_untextured_pipeline(*cubeRenderPass, *cubeDescriptorSetLayout);
        auto cubePipeline = cubePipelinePair.first;
        auto cubePipelineLayout = cubePipelinePair.second;

        auto floorPipelinePair = create_textured_pipeline(*floorRenderPass, *floorDescriptorSetLayout);
        auto floorPipeline = floorPipelinePair.first;
        auto floorPipelineLayout = floorPipelinePair.second;

        ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        // Create Command::Pool
        Command::Pool::Info commandPoolInfo;
        commandPoolInfo.flags = VK_COMMAND_POOL_CREATE_RESET_COMMAND_BUFFER_BIT;
        commandPoolInfo.queueFamilyIndex = static_cast<uint32_t>(graphicsQueue.family_index());
        auto commandPool = device->create<Command::Pool>(commandPoolInfo);

        ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        // Create Image and Sampler
        // FROM : https://pixabay.com/en/sea-ocean-turtle-wildlife-closeup-2361247/
        // FROM : https://pixabay.com/en/phi-phi-islands-phuket-thailand-2538412/
        // FROM : https://pixabay.com/en/portugal-mountains-landscape-beach-2537468/
        // Cudillero Diorama Bake by Thomas Kole is licensed under CC Attribution-ShareAlike
        auto filePath = "../../../examples/resources/images/phi-phi-islands.jpg";
        auto imageCache = ImageReader::read_file(filePath);

        Buffer::Info imageStagingBufferInfo;
        imageStagingBufferInfo.size = static_cast<VkDeviceSize>(imageCache.data().size_bytes());
        imageStagingBufferInfo.usage = VK_BUFFER_USAGE_TRANSFER_SRC_BIT;
        auto imageStagingMemoryProperties = VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT | VK_MEMORY_PROPERTY_HOST_COHERENT_BIT;
        auto imageStagingBuffer = device->create<Buffer>(imageStagingBufferInfo, imageStagingMemoryProperties);
        imageStagingBuffer->write<uint8_t>(imageCache.data());

        Image::Info imageInfo;
        imageInfo.imageType = VK_IMAGE_TYPE_2D;
        imageInfo.extent.width = imageCache.width();
        imageInfo.extent.height = imageCache.height();
        imageInfo.format = VK_FORMAT_R8G8B8A8_UNORM;
        imageInfo.tiling = VK_IMAGE_TILING_OPTIMAL;
        imageInfo.initialLayout = VK_IMAGE_LAYOUT_PREINITIALIZED;
        imageInfo.usage = VK_IMAGE_USAGE_TRANSFER_DST_BIT | VK_IMAGE_USAGE_SAMPLED_BIT;
        auto image = device->create<Image>(imageInfo);

        // Memory::Info imageMemoryInfo;
        auto imageMemoryInfo = Memory::AllocateInfo;
        auto imageMemoryRequirements = image->memory_requirements();
        imageMemoryInfo.allocationSize = imageMemoryRequirements.size;
        imageMemoryInfo.memoryTypeIndex = physicalDevice.find_memory_type_index(
            imageMemoryRequirements.memoryTypeBits,
            VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT
        );

        auto imageMemory = device->allocate<Memory>(imageMemoryInfo);
        image->bind_memory(imageMemory);

        process_transient_command_buffer(
            *commandPool,
            graphicsQueue,
            [&](Command::Buffer& commandBuffer)
            {
                auto imageMemoryBarrier = create_layout_transition_barrier(
                    *image,
                    VK_IMAGE_LAYOUT_PREINITIALIZED,
                    VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL
                );

                vkCmdPipelineBarrier(
                    commandBuffer,
                    VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT,
                    VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT,
                    0,
                    0, nullptr,
                    0, nullptr,
                    1, &imageMemoryBarrier
                );

                VkBufferImageCopy region { };
                region.bufferOffset = 0;
                region.bufferRowLength = 0;
                region.bufferImageHeight = 0;
                region.imageSubresource.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
                region.imageSubresource.mipLevel = 0;
                region.imageSubresource.baseArrayLayer = 0;
                region.imageSubresource.layerCount = 1;
                region.imageOffset = { 0, 0, 0 };
                region.imageExtent = {
                    imageCache.width(),
                    imageCache.height(),
                    1
                };

                vkCmdCopyBufferToImage(
                    commandBuffer,
                    *imageStagingBuffer,
                    *image,
                    VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,
                    1,
                    &region
                );

                imageMemoryBarrier = create_layout_transition_barrier(
                    *image,
                    VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,
                    VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL
                );

                vkCmdPipelineBarrier(
                    commandBuffer,
                    VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT,
                    VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT,
                    0,
                    0, nullptr,
                    0, nullptr,
                    1, &imageMemoryBarrier
                );
            }
        );

        image->create<Image::View>();
        Sampler::Info samplerInfo;
        samplerInfo.addressModeU = VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE;
        samplerInfo.addressModeV = VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE;
        samplerInfo.addressModeW = VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE;
        auto sampler = device->create<Sampler>(samplerInfo);

        ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        // Create meshes
        auto cube = create_box(*device, *commandPool, graphicsQueue, 1, 1, 1, dst::Color::White, dst::Color::Black);
        auto floor = create_box(*device, *commandPool, graphicsQueue, 6, 0.25f, 6, dst::Color::Transparent, dst::Color::Black);
        auto quad = create_mesh(*device, *commandPool, graphicsQueue,
        std::vector<Vertex> {
                { { -0.5f,  0.5f, 0 }, { 1, 0 }, { dst::Color::White } },
                { {  0.5f,  0.5f, 0 }, { 0, 0 }, { dst::Color::White } },
                { {  0.5f, -0.5f, 0 }, { 0, 1 }, { dst::Color::White } },
                { { -0.5f, -0.5f, 0 }, { 1, 1 }, { dst::Color::White } },
            },
            std::vector<uint16_t> { 0, 1, 2, 2, 3, 0 }
        );

        ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        // Create uniform Buffer
        VkDeviceSize uniformBufferSize = sizeof(UniformBuffer);
        Buffer::Info uniformBufferInfo;
        uniformBufferInfo.size = uniformBufferSize;
        uniformBufferInfo.usage = VK_BUFFER_USAGE_UNIFORM_BUFFER_BIT;
        auto uniformMemoryProperties = VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT | VK_MEMORY_PROPERTY_HOST_COHERENT_BIT;
        auto offscreenUniformBuffer = device->create<Buffer>(uniformBufferInfo, uniformMemoryProperties);
        auto cubeUniformBuffer = device->create<Buffer>(uniformBufferInfo, uniformMemoryProperties);
        auto floorUniformBuffer = device->create<Buffer>(uniformBufferInfo, uniformMemoryProperties);

        ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        // Create Descriptor::Pools and Descriptor::Sets
        auto offscreenDescriptorPool = create_non_reflective_descriptor_pool(*device, *offscreenDescriptorSetLayout);
        auto offscreenDescriptorSet = offscreenDescriptorPool->sets()[0].get();
        update_non_reflective_descriptor_set(*offscreenDescriptorSet, *offscreenUniformBuffer, *image, *sampler);

        auto cubeDescriptorPool = create_non_reflective_descriptor_pool(*device, *cubeDescriptorSetLayout);
        auto cubeDescriptorSet = cubeDescriptorPool->sets()[0].get();
        update_non_reflective_descriptor_set(*cubeDescriptorSet, *cubeUniformBuffer, *image, *sampler);

        auto floorDescriptorPool = create_reflective_descriptor_pool(*device, *floorDescriptorSetLayout);
        auto floorDescriptorSet = floorDescriptorPool->sets()[0].get();
        update_reflective_descriptor_set(*floorDescriptorSet, *floorUniformBuffer, *offscreenRenderTarget.colorAttachment, *sampler);

        ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        // Create Command::Buffers
        for (size_t i = 0; i < swapchain->images().size(); ++i) {
            commandPool->allocate<Command::Buffer>();
        }

        auto offscreenCommandBuffer = commandPool->allocate<Command::Buffer>();
        auto offscreenSemaphore = device->create<Semaphore>();

        ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        // Create Sempahores
        auto imageSemaphore = device->create<Semaphore>();
        auto renderSemaphore = device->create<Semaphore>();

        ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        // Render
        bool createFramebuffersAndDepthBuffer = true;
        bool recordCommandBuffers = true;
        swapchain->on_resized =
        [&](const SwapchainKHR&)
        {
            // NOTE : If our Window size changes, our Surface and Swapchain's Image
            //        sizes will also change.  When this occurs we need to recreate
            //        our Framebuffers and re-record our Command::Buffers.
            createFramebuffersAndDepthBuffer = true;
            recordCommandBuffers = true;
        };

        std::vector<std::shared_ptr<Framebuffer>> framebuffers;
        framebuffers.reserve(swapchain->images().size());

        std::shared_ptr<Image> depthBuffer;
        std::shared_ptr<Memory> depthBufferMemory;

        float cubeRotationY = 0;
        float cubeRotationZ = 0;
        float wobbleHeight = 0.5;
        float wobbleSpeed = 3;
        float wobbleOffset = 1.5f;
        dst::Vector3 cubePosition;

        Camera camera;
        FreeCameraController cameraController;
        cameraController.camera = &camera;
        camera.transform().translation = dst::Vector3(0, 0, 7);

        dst::Clock clock;
        clock.update();
        bool running = true;
        while (running) {
            Window::update();
            window->cursor_mode(Window::CursorMode::Disabled);
            const auto& input = window->input();
            auto quitKey = dst::Keyboard::Key::Escape;
            if (input.keyboard().down(quitKey)) {
                running = false;
            }

            clock.update();
            cameraController.update(clock, input);
            auto dt = clock.elapsed<dst::Second<float>>();

            cubeRotationY += dst::to_radians(90.0f * dt);
            cubeRotationZ += dst::to_radians(45.0f * dt);
            cubePosition.y = wobbleHeight * std::sin(wobbleSpeed * clock.total<dst::Second<float>>()) + wobbleOffset;
            auto cubeToWorld =
                dst::Matrix4x4::create_translation(cubePosition) *
                dst::Matrix4x4::create_rotation(cubeRotationY, dst::Vector3::UnitY) *
                dst::Matrix4x4::create_rotation(cubeRotationZ, dst::Vector3::UnitZ);

            UniformBuffer ubo;
            ubo.view = camera.view();
            float swapChainWidth = static_cast<float>(swapchain->extent().width);
            float swapChainHeight = static_cast<float>(swapchain->extent().height);
            camera.aspect_ratio(swapChainWidth / swapChainHeight);
            // camera.field_of_view(30.0f);
            ubo.projection = camera.projection();
            
            ubo.world = cubeToWorld;
            cubeUniformBuffer->write<UniformBuffer>(std::array<UniformBuffer, 1> { ubo });
            ubo.world = dst::Matrix4x4::Identity;
            floorUniformBuffer->write<UniformBuffer>(std::array<UniformBuffer, 1> { ubo });
            ubo.world = dst::Matrix4x4::create_scale({ 1, -1, 1 }) * cubeToWorld;
            offscreenUniformBuffer->write<UniformBuffer>(std::array<UniformBuffer, 1> { ubo });

            presentQueue.wait_idle();
            swapchain->update();
            if (swapchain->valid()) {
                auto imageIndex = static_cast<uint32_t>(swapchain->next_image(*imageSemaphore));

                if (createFramebuffersAndDepthBuffer) {
                    createFramebuffersAndDepthBuffer = false;
                    recordCommandBuffers = true;

                    auto extent = swapchain->extent();

                    Image::Info depthBufferInfo;
                    depthBufferInfo.imageType = VK_IMAGE_TYPE_2D;
                    depthBufferInfo.extent.width = extent.width;
                    depthBufferInfo.extent.height = extent.height;
                    depthBufferInfo.format = depthFormat;
                    depthBufferInfo.tiling = VK_IMAGE_TILING_OPTIMAL;
                    depthBufferInfo.initialLayout = VK_IMAGE_LAYOUT_PREINITIALIZED;
                    depthBufferInfo.usage = VK_IMAGE_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT;
                    depthBuffer = device->create<Image>(depthBufferInfo);

                    // Memory::Info depthBufferMemoryInfo;
                    auto depthBufferMemoryInfo = Memory::AllocateInfo;
                    auto depthBufferMemoryRequirements = depthBuffer->memory_requirements();
                    depthBufferMemoryInfo.allocationSize = depthBufferMemoryRequirements.size;
                    depthBufferMemoryInfo.memoryTypeIndex = physicalDevice.find_memory_type_index(
                        depthBufferMemoryRequirements.memoryTypeBits,
                        VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT
                    );

                    depthBufferMemory = device->allocate<Memory>(depthBufferMemoryInfo);
                    depthBuffer->bind_memory(depthBufferMemory);
                    depthBuffer->create<Image::View>();

                    framebuffers.clear();
                    framebuffers.reserve(swapchain->images().size());
                    for (const auto& image : swapchain->images()) {
                        std::array<VkImageView, 2> attachments {
                            *image->view(),
                            *depthBuffer->view()
                        };

                        Framebuffer::Info framebufferInfo;
                        framebufferInfo.renderPass = *cubeRenderPass;
                        framebufferInfo.attachmentCount = static_cast<uint32_t>(attachments.size());
                        framebufferInfo.pAttachments = attachments.data();
                        framebufferInfo.width = extent.width;
                        framebufferInfo.height = extent.height;
                        framebuffers.push_back(device->create<Framebuffer>(framebufferInfo));
                    }
                }

                if (recordCommandBuffers) {
                    recordCommandBuffers = false;

                    {
                        std::array<VkClearValue, 2> clearValues;
                        clearValues[0].color = { 0, 0, 0, 0 };
                        clearValues[1].depthStencil = { 1, 0 };
                        RenderPass::BeginInfo renderPassBeginInfo;
                        renderPassBeginInfo.renderPass = *offscreenRenderPass;
                        renderPassBeginInfo.framebuffer = *offscreenRenderTarget.framebuffer;
                        VkExtent2D extent;
                        extent.width = offscreenRenderTarget.extent().width;
                        extent.height = offscreenRenderTarget.extent().height;
                        renderPassBeginInfo.renderArea.extent = extent;
                        renderPassBeginInfo.clearValueCount = static_cast<uint32_t>(clearValues.size());
                        renderPassBeginInfo.pClearValues = clearValues.data();

                        offscreenCommandBuffer->begin();
                        offscreenCommandBuffer->begin_render_pass(renderPassBeginInfo);

                        VkViewport viewport { };
                        viewport.width = static_cast<float>(extent.width);
                        viewport.height = static_cast<float>(extent.height);
                        viewport.minDepth = 0;
                        viewport.maxDepth = 1;
                        offscreenCommandBuffer->set_viewport(viewport);

                        VkRect2D scissor { };
                        scissor.extent = extent;
                        offscreenCommandBuffer->set_scissor(scissor);

                        offscreenCommandBuffer->bind_descriptor_set(*offscreenDescriptorSet, *offscreenPipelineLayout);
                        offscreenCommandBuffer->bind_pipeline(VK_PIPELINE_BIND_POINT_GRAPHICS, *offscreenPipeline);
                        cube.render(*offscreenCommandBuffer);

                        offscreenCommandBuffer->end_render_pass();
                        offscreenCommandBuffer->end();
                    }

                    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

                    for (size_t i = 0; i < framebuffers.size(); ++i) {

                        {
                            auto& commandBuffer = commandPool->buffers()[i];


                            commandBuffer->begin();

                            std::array<VkClearValue, 2> clearValues;
                            clearValues[0].color = { 0.2f, 0.2f, 0.2f, 1 };
                            clearValues[1].depthStencil = { 1, 0 };
                            RenderPass::BeginInfo renderPassBeginInfo;
                            renderPassBeginInfo.renderPass = *cubeRenderPass;
                            renderPassBeginInfo.framebuffer = *framebuffers[i];
                            renderPassBeginInfo.renderArea.extent = swapchain->extent();
                            renderPassBeginInfo.clearValueCount = static_cast<uint32_t>(clearValues.size());
                            renderPassBeginInfo.pClearValues = clearValues.data();
                            commandBuffer->begin_render_pass(renderPassBeginInfo);

                            VkViewport viewport { };
                            viewport.width = static_cast<float>(swapchain->extent().width);
                            viewport.height = static_cast<float>(swapchain->extent().height);
                            viewport.minDepth = 0;
                            viewport.maxDepth = 1;
                            commandBuffer->set_viewport(viewport);

                            VkRect2D scissor { };
                            scissor.extent = swapchain->extent();
                            commandBuffer->set_scissor(scissor);

                            commandBuffer->bind_descriptor_set(*cubeDescriptorSet, *cubePipelineLayout);
                            commandBuffer->bind_pipeline(VK_PIPELINE_BIND_POINT_GRAPHICS, *cubePipeline);
                            cube.render(*commandBuffer);

                            commandBuffer->bind_descriptor_set(*floorDescriptorSet, *floorPipelineLayout);
                            commandBuffer->bind_pipeline(VK_PIPELINE_BIND_POINT_GRAPHICS, *floorPipeline);
                            floor.render(*commandBuffer);

                            commandBuffer->end_render_pass();
                            commandBuffer->end();
                        }
                    }
                }

                {
                    Queue::SubmitInfo submitInfo;
                    VkPipelineStageFlags waitStages[] { VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT };
                    submitInfo.waitSemaphoreCount = 0;
                    submitInfo.pWaitSemaphores = nullptr;
                    submitInfo.pWaitDstStageMask = nullptr;
                    submitInfo.commandBufferCount = 1;
                    submitInfo.pCommandBuffers = &offscreenCommandBuffer->handle();
                    submitInfo.signalSemaphoreCount = 1;
                    submitInfo.pSignalSemaphores = &offscreenSemaphore->handle();
                    graphicsQueue.submit(submitInfo);
                    int breaker = 0;
                }

                {
                    std::array<VkSemaphore, 2> waitSempaphores {
                        *offscreenSemaphore,
                        *imageSemaphore,
                    };

                    Queue::SubmitInfo submitInfo;
                    VkPipelineStageFlags waitStages[] {
                        VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT,
                        VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT
                    };

                    submitInfo.waitSemaphoreCount = static_cast<uint32_t>(waitSempaphores.size());
                    submitInfo.pWaitSemaphores = waitSempaphores.data();
                    submitInfo.pWaitDstStageMask = waitStages;
                    submitInfo.commandBufferCount = 1;
                    submitInfo.pCommandBuffers = &commandPool->buffers()[imageIndex]->handle();
                    submitInfo.signalSemaphoreCount = 1;
                    submitInfo.pSignalSemaphores = &renderSemaphore->handle();
                    graphicsQueue.submit(submitInfo);
                    int breaker = 0;
                }

                Queue::PresentInfoKHR presentInfo;
                presentInfo.waitSemaphoreCount = 1;
                presentInfo.pWaitSemaphores = &renderSemaphore->handle();
                presentInfo.swapchainCount = 1;
                presentInfo.pSwapchains = &swapchain->handle();
                presentInfo.pImageIndices = &imageIndex;
                presentQueue.present(presentInfo);
            }

            window->swap_buffers();
        }

        device->wait_idle();

    } catch (const std::exception& e) {
        std::cout << std::endl << "==========================================" << std::endl;
        std::cout << e.what() << std::endl;
        std::cout << std::endl << "==========================================" << std::endl;
    }

    return 0;
}
