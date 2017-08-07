
/*
==========================================
    Copyright (c) 2017 Dynamic_Static 
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

// Outputs physcial device info to standard out

#include "Dynamic_Static/Core/ToString.hpp"
#include "Dynamic_Static/Core/Version.hpp"
#include "Dynamic_Static/Graphics/Vulkan.hpp"

#include <iostream>

using namespace dst::vlkn;

static size_t gTab;
static std::string Tab(size_t count = 1)
{
    static constexpr size_t TabWidth = 4;
    return std::string(TabWidth * count, ' ');
}

template <typename T>
static std::string array_str(T* values, size_t count)
{
    std::string str;
    for (size_t i = 0; i < count; ++i) {
        str += dst::to_string(values[i]);
        if (i < count - 1) {
            str += ", ";
        }
    }

    return str;
}

std::string sample_count_flags_str(VkSampleCountFlags sampleCountFlags)
{
    std::string str;
    if (sampleCountFlags & VK_SAMPLE_COUNT_1_BIT) str += "1 | ";
    if (sampleCountFlags & VK_SAMPLE_COUNT_2_BIT) str += "2 | ";
    if (sampleCountFlags & VK_SAMPLE_COUNT_4_BIT) str += "4 | ";
    if (sampleCountFlags & VK_SAMPLE_COUNT_8_BIT) str += "8 | ";
    if (sampleCountFlags & VK_SAMPLE_COUNT_16_BIT) str += "16 | ";
    if (sampleCountFlags & VK_SAMPLE_COUNT_32_BIT) str += "32 | ";
    if (sampleCountFlags & VK_SAMPLE_COUNT_64_BIT) str += "64 | ";
    if (!str.empty()) {
        str = str.substr(0, str.size() - 3);
    }

    return "{ VK_SAMPLE_COUNT " + str + " }";
}

std::string size_str(VkDeviceSize size)
{
    VkDeviceSize B = size;
    double MB = B / 1000000.0;
    double GB = MB / 1000.0;
    return std::to_string(B) + " B = " + std::to_string(MB) + " MB = " + std::to_string(GB) + " GB";
}

static void print_properties(const PhysicalDevice& physicalDevice, bool printLimits, bool printSparseProperties);
static void print_sparse_properties(const PhysicalDevice& physicalDevice);
static void print_limits(const PhysicalDevice& physicalDevice);
static void print_features(const PhysicalDevice& physicalDevice);
static void print_memory_properties(const PhysicalDevice& physicalDevice);

int main()
{
    bool printLimits = true;
    bool printSparseProperties = true;
    bool printFeatures = true;
    bool printMemoryProperties = true;

    std::vector<std::string> layers;
    std::vector<std::string> extensions;
    auto instance = dst::vlkn::create<Instance>(layers, extensions);
    size_t deviceCount = instance->physical_devices().size();
    std::cout << std::endl;
    std::cout << "Vulkan Devices (" + dst::to_string(deviceCount) + ")" << std::endl;
    std::cout << std::endl;
    for (const auto& physicalDevice : instance->physical_devices()) {
        gTab = 1;
        std::cout << Tab(gTab++) << physicalDevice->name() << std::endl << std::endl;
        print_properties(*physicalDevice, printLimits, printSparseProperties);

        if (printFeatures) {
            std::cout << std::endl;
            print_features(*physicalDevice);
        }

        if (printMemoryProperties) {
            std::cout << std::endl;
            print_memory_properties(*physicalDevice);
        }

        std::cout << std::endl;
    }

    return 0;
}

void print_properties(const PhysicalDevice& physicalDevice, bool printLimits, bool printSparseProperties)
{
    const auto& properties = physicalDevice.properties();

    dst::Version apiVersion {
        VK_VERSION_MAJOR(properties.apiVersion),
        VK_VERSION_MINOR(properties.apiVersion),
        VK_VERSION_PATCH(properties.apiVersion)
    };

    dst::Version driverVersion {
        VK_VERSION_MAJOR(properties.driverVersion),
        VK_VERSION_MINOR(properties.driverVersion),
        VK_VERSION_PATCH(properties.driverVersion)
    };

    std::cout << Tab(gTab++) << "Properties -" << std::endl;
    std::cout << Tab(gTab) << "apiVersion    : " << dst::to_string(apiVersion) << std::endl;
    std::cout << Tab(gTab) << "driverVersion : " << dst::to_string(driverVersion) << std::endl;
    std::cout << Tab(gTab) << "vendorID      : " << dst::to_string(properties.vendorID) << std::endl;
    std::cout << Tab(gTab) << "deviceID      : " << dst::to_string(properties.deviceID) << std::endl;
    std::cout << Tab(gTab) << "deviceType    : " << dst::to_string(properties.deviceType) << std::endl;

    if (printLimits) {
        std::cout << std::endl;
        print_limits(physicalDevice);
    }

    if (printSparseProperties) {
        std::cout << std::endl;
        print_sparse_properties(physicalDevice);
    }

    --gTab;
}

void print_sparse_properties(const PhysicalDevice& physicalDevice)
{
    const auto& sparseLimits = physicalDevice.properties().sparseProperties;
    std::cout << Tab(gTab++) << "Sparse Properties -" << std::endl;
    std::cout << Tab(gTab) << "residencyStandard2DBlockShape            : " << sparseLimits.residencyStandard2DBlockShape << std::endl;
    std::cout << Tab(gTab) << "residencyStandard2DMultisampleBlockShape : " << sparseLimits.residencyStandard2DMultisampleBlockShape << std::endl;
    std::cout << Tab(gTab) << "residencyStandard3DBlockShape            : " << sparseLimits.residencyStandard3DBlockShape << std::endl;
    std::cout << Tab(gTab) << "residencyAlignedMipSize                  : " << sparseLimits.residencyAlignedMipSize << std::endl;
    std::cout << Tab(gTab) << "residencyNonResidentStrict               : " << sparseLimits.residencyNonResidentStrict << std::endl;
    --gTab;
}

void print_limits(const PhysicalDevice& physicalDevice)
{
    const auto& limits = physicalDevice.properties().limits;
    std::cout << Tab(gTab++) << "Limits -" << std::endl;
    std::cout << Tab(gTab) << "maxImageDimension1D                            : " << limits.maxImageDimension1D << std::endl;
    std::cout << Tab(gTab) << "maxImageDimension2D                            : " << limits.maxImageDimension2D << std::endl;
    std::cout << Tab(gTab) << "maxImageDimension3D                            : " << limits.maxImageDimension3D << std::endl;
    std::cout << Tab(gTab) << "maxImageDimensionCube                          : " << limits.maxImageDimensionCube << std::endl;
    std::cout << Tab(gTab) << "maxImageArrayLayers                            : " << limits.maxImageArrayLayers << std::endl;
    std::cout << Tab(gTab) << "maxTexelBufferElements                         : " << limits.maxTexelBufferElements << std::endl;
    std::cout << Tab(gTab) << "maxUniformBufferRange                          : " << limits.maxUniformBufferRange << std::endl;
    std::cout << Tab(gTab) << "maxStorageBufferRange                          : " << limits.maxStorageBufferRange << std::endl;
    std::cout << Tab(gTab) << "maxPushConstantsSize                           : " << limits.maxPushConstantsSize << std::endl;
    std::cout << Tab(gTab) << "maxMemoryAllocationCount                       : " << limits.maxMemoryAllocationCount << std::endl;
    std::cout << Tab(gTab) << "maxSamplerAllocationCount                      : " << limits.maxSamplerAllocationCount << std::endl;
    std::cout << Tab(gTab) << "bufferImageGranularity                         : " << limits.bufferImageGranularity << std::endl;
    std::cout << Tab(gTab) << "sparseAddressSpaceSize                         : " << limits.sparseAddressSpaceSize << std::endl;
    std::cout << Tab(gTab) << "maxBoundDescriptorSets                         : " << limits.maxBoundDescriptorSets << std::endl;
    std::cout << Tab(gTab) << "maxPerStageDescriptorSamplers                  : " << limits.maxPerStageDescriptorSamplers << std::endl;
    std::cout << Tab(gTab) << "maxPerStageDescriptorUniformBuffers            : " << limits.maxPerStageDescriptorUniformBuffers << std::endl;
    std::cout << Tab(gTab) << "maxPerStageDescriptorStorageBuffers            : " << limits.maxPerStageDescriptorStorageBuffers << std::endl;
    std::cout << Tab(gTab) << "maxPerStageDescriptorSampledImages             : " << limits.maxPerStageDescriptorSampledImages << std::endl;
    std::cout << Tab(gTab) << "maxPerStageDescriptorStorageImages             : " << limits.maxPerStageDescriptorStorageImages << std::endl;
    std::cout << Tab(gTab) << "maxPerStageDescriptorInputAttachments          : " << limits.maxPerStageDescriptorInputAttachments << std::endl;
    std::cout << Tab(gTab) << "maxPerStageResources                           : " << limits.maxPerStageResources << std::endl;
    std::cout << Tab(gTab) << "maxDescriptorSetSamplers                       : " << limits.maxDescriptorSetSamplers << std::endl;
    std::cout << Tab(gTab) << "maxDescriptorSetUniformBuffers                 : " << limits.maxDescriptorSetUniformBuffers << std::endl;
    std::cout << Tab(gTab) << "maxDescriptorSetUniformBuffersDynamic          : " << limits.maxDescriptorSetUniformBuffersDynamic << std::endl;
    std::cout << Tab(gTab) << "maxDescriptorSetStorageBuffers                 : " << limits.maxDescriptorSetStorageBuffers << std::endl;
    std::cout << Tab(gTab) << "maxDescriptorSetStorageBuffersDynamic          : " << limits.maxDescriptorSetStorageBuffersDynamic << std::endl;
    std::cout << Tab(gTab) << "maxDescriptorSetSampledImages                  : " << limits.maxDescriptorSetSampledImages << std::endl;
    std::cout << Tab(gTab) << "maxDescriptorSetStorageImages                  : " << limits.maxDescriptorSetStorageImages << std::endl;
    std::cout << Tab(gTab) << "maxDescriptorSetInputAttachments               : " << limits.maxDescriptorSetInputAttachments << std::endl;
    std::cout << Tab(gTab) << "maxVertexInputAttributes                       : " << limits.maxVertexInputAttributes << std::endl;
    std::cout << Tab(gTab) << "maxVertexInputBindings                         : " << limits.maxVertexInputBindings << std::endl;
    std::cout << Tab(gTab) << "maxVertexInputAttributeOffset                  : " << limits.maxVertexInputAttributeOffset << std::endl;
    std::cout << Tab(gTab) << "maxVertexInputBindingStride                    : " << limits.maxVertexInputBindingStride << std::endl;
    std::cout << Tab(gTab) << "maxVertexOutputComponents                      : " << limits.maxVertexOutputComponents << std::endl;
    std::cout << Tab(gTab) << "maxTessellationGenerationLevel                 : " << limits.maxTessellationGenerationLevel << std::endl;
    std::cout << Tab(gTab) << "maxTessellationPatchSize                       : " << limits.maxTessellationPatchSize << std::endl;
    std::cout << Tab(gTab) << "maxTessellationControlPerVertexInputComponents : " << limits.maxTessellationControlPerVertexInputComponents << std::endl;
    std::cout << Tab(gTab) << "maxTessellationControlPerVertexOutputComponents: " << limits.maxTessellationControlPerVertexOutputComponents << std::endl;
    std::cout << Tab(gTab) << "maxTessellationControlPerPatchOutputComponents : " << limits.maxTessellationControlPerPatchOutputComponents << std::endl;
    std::cout << Tab(gTab) << "maxTessellationControlTotalOutputComponents    : " << limits.maxTessellationControlTotalOutputComponents << std::endl;
    std::cout << Tab(gTab) << "maxTessellationEvaluationInputComponents       : " << limits.maxTessellationEvaluationInputComponents << std::endl;
    std::cout << Tab(gTab) << "maxTessellationEvaluationOutputComponents      : " << limits.maxTessellationEvaluationOutputComponents << std::endl;
    std::cout << Tab(gTab) << "maxGeometryShaderInvocations                   : " << limits.maxGeometryShaderInvocations << std::endl;
    std::cout << Tab(gTab) << "maxGeometryInputComponents                     : " << limits.maxGeometryInputComponents << std::endl;
    std::cout << Tab(gTab) << "maxGeometryOutputComponents                    : " << limits.maxGeometryOutputComponents << std::endl;
    std::cout << Tab(gTab) << "maxGeometryOutputVertices                      : " << limits.maxGeometryOutputVertices << std::endl;
    std::cout << Tab(gTab) << "maxGeometryTotalOutputComponents               : " << limits.maxGeometryTotalOutputComponents << std::endl;
    std::cout << Tab(gTab) << "maxFragmentInputComponents                     : " << limits.maxFragmentInputComponents << std::endl;
    std::cout << Tab(gTab) << "maxFragmentOutputAttachments                   : " << limits.maxFragmentOutputAttachments << std::endl;
    std::cout << Tab(gTab) << "maxFragmentDualSrcAttachments                  : " << limits.maxFragmentDualSrcAttachments << std::endl;
    std::cout << Tab(gTab) << "maxFragmentCombinedOutputResources             : " << limits.maxFragmentCombinedOutputResources << std::endl;
    std::cout << Tab(gTab) << "maxComputeSharedMemorySize                     : " << limits.maxComputeSharedMemorySize << std::endl;
    std::cout << Tab(gTab) << "maxComputeWorkGroupCount[3]                    : " << array_str(limits.maxComputeWorkGroupCount, 3) << std::endl;
    std::cout << Tab(gTab) << "maxComputeWorkGroupInvocations                 : " << limits.maxComputeWorkGroupInvocations << std::endl;
    std::cout << Tab(gTab) << "maxComputeWorkGroupSize[3]                     : " << array_str(limits.maxComputeWorkGroupSize, 3) << std::endl;
    std::cout << Tab(gTab) << "subPixelPrecisionBits                          : " << limits.subPixelPrecisionBits << std::endl;
    std::cout << Tab(gTab) << "subTexelPrecisionBits                          : " << limits.subTexelPrecisionBits << std::endl;
    std::cout << Tab(gTab) << "mipmapPrecisionBits                            : " << limits.mipmapPrecisionBits << std::endl;
    std::cout << Tab(gTab) << "maxDrawIndexedIndexValue                       : " << limits.maxDrawIndexedIndexValue << std::endl;
    std::cout << Tab(gTab) << "maxDrawIndirectCount                           : " << limits.maxDrawIndirectCount << std::endl;
    std::cout << Tab(gTab) << "maxSamplerLodBias                              : " << limits.maxSamplerLodBias << std::endl;
    std::cout << Tab(gTab) << "maxSamplerAnisotropy                           : " << limits.maxSamplerAnisotropy << std::endl;
    std::cout << Tab(gTab) << "maxViewports                                   : " << limits.maxViewports << std::endl;
    std::cout << Tab(gTab) << "maxViewportDimensions[2]                       : " << array_str(limits.maxViewportDimensions, 2) << std::endl;
    std::cout << Tab(gTab) << "viewportBoundsRange[2]                         : " << array_str(limits.viewportBoundsRange, 2) << std::endl;
    std::cout << Tab(gTab) << "viewportSubPixelBits                           : " << limits.viewportSubPixelBits << std::endl;
    std::cout << Tab(gTab) << "minMemoryMapAlignment                          : " << limits.minMemoryMapAlignment << std::endl;
    std::cout << Tab(gTab) << "minTexelBufferOffsetAlignment                  : " << limits.minTexelBufferOffsetAlignment << std::endl;
    std::cout << Tab(gTab) << "minUniformBufferOffsetAlignment                : " << limits.minUniformBufferOffsetAlignment << std::endl;
    std::cout << Tab(gTab) << "minStorageBufferOffsetAlignment                : " << limits.minStorageBufferOffsetAlignment << std::endl;
    std::cout << Tab(gTab) << "minTexelOffset                                 : " << limits.minTexelOffset << std::endl;
    std::cout << Tab(gTab) << "maxTexelOffset                                 : " << limits.maxTexelOffset << std::endl;
    std::cout << Tab(gTab) << "minTexelGatherOffset                           : " << limits.minTexelGatherOffset << std::endl;
    std::cout << Tab(gTab) << "maxTexelGatherOffset                           : " << limits.maxTexelGatherOffset << std::endl;
    std::cout << Tab(gTab) << "minInterpolationOffset                         : " << limits.minInterpolationOffset << std::endl;
    std::cout << Tab(gTab) << "maxInterpolationOffset                         : " << limits.maxInterpolationOffset << std::endl;
    std::cout << Tab(gTab) << "subPixelInterpolationOffsetBits                : " << limits.subPixelInterpolationOffsetBits << std::endl;
    std::cout << Tab(gTab) << "maxFramebufferWidth                            : " << limits.maxFramebufferWidth << std::endl;
    std::cout << Tab(gTab) << "maxFramebufferHeight                           : " << limits.maxFramebufferHeight << std::endl;
    std::cout << Tab(gTab) << "maxFramebufferLayers                           : " << limits.maxFramebufferLayers << std::endl;
    std::cout << Tab(gTab) << "framebufferColorSampleCounts                   : " << sample_count_flags_str(limits.framebufferColorSampleCounts) << std::endl;
    std::cout << Tab(gTab) << "framebufferDepthSampleCounts                   : " << sample_count_flags_str(limits.framebufferDepthSampleCounts) << std::endl;
    std::cout << Tab(gTab) << "framebufferStencilSampleCounts                 : " << sample_count_flags_str(limits.framebufferStencilSampleCounts) << std::endl;
    std::cout << Tab(gTab) << "framebufferNoAttachmentsSampleCounts           : " << sample_count_flags_str(limits.framebufferNoAttachmentsSampleCounts) << std::endl;
    std::cout << Tab(gTab) << "maxColorAttachments                            : " << limits.maxColorAttachments << std::endl;
    std::cout << Tab(gTab) << "sampledImageColorSampleCounts                  : " << sample_count_flags_str(limits.sampledImageColorSampleCounts) << std::endl;
    std::cout << Tab(gTab) << "sampledImageIntegerSampleCounts                : " << sample_count_flags_str(limits.sampledImageIntegerSampleCounts) << std::endl;
    std::cout << Tab(gTab) << "sampledImageDepthSampleCounts                  : " << sample_count_flags_str(limits.sampledImageDepthSampleCounts) << std::endl;
    std::cout << Tab(gTab) << "sampledImageStencilSampleCounts                : " << sample_count_flags_str(limits.sampledImageStencilSampleCounts) << std::endl;
    std::cout << Tab(gTab) << "storageImageSampleCounts                       : " << sample_count_flags_str(limits.storageImageSampleCounts) << std::endl;
    std::cout << Tab(gTab) << "maxSampleMaskWords                             : " << limits.maxSampleMaskWords << std::endl;
    std::cout << Tab(gTab) << "timestampComputeAndGraphics                    : " << limits.timestampComputeAndGraphics << std::endl;
    std::cout << Tab(gTab) << "timestampPeriod                                : " << limits.timestampPeriod << std::endl;
    std::cout << Tab(gTab) << "maxClipDistances                               : " << limits.maxClipDistances << std::endl;
    std::cout << Tab(gTab) << "maxCullDistances                               : " << limits.maxCullDistances << std::endl;
    std::cout << Tab(gTab) << "maxCombinedClipAndCullDistances                : " << limits.maxCombinedClipAndCullDistances << std::endl;
    std::cout << Tab(gTab) << "discreteQueuePriorities                        : " << limits.discreteQueuePriorities << std::endl;
    std::cout << Tab(gTab) << "pointSizeRange[2]                              : " << array_str(limits.pointSizeRange, 2) << std::endl;
    std::cout << Tab(gTab) << "lineWidthRange[2]                              : " << array_str(limits.lineWidthRange, 2) << std::endl;
    std::cout << Tab(gTab) << "pointSizeGranularity                           : " << limits.pointSizeGranularity << std::endl;
    std::cout << Tab(gTab) << "lineWidthGranularity                           : " << limits.lineWidthGranularity << std::endl;
    std::cout << Tab(gTab) << "strictLines                                    : " << limits.strictLines << std::endl;
    std::cout << Tab(gTab) << "standardSampleLocations                        : " << limits.standardSampleLocations << std::endl;
    std::cout << Tab(gTab) << "optimalBufferCopyOffsetAlignment               : " << limits.optimalBufferCopyOffsetAlignment << std::endl;
    std::cout << Tab(gTab) << "optimalBufferCopyRowPitchAlignment             : " << limits.optimalBufferCopyRowPitchAlignment << std::endl;
    std::cout << Tab(gTab) << "nonCoherentAtomSize                            : " << limits.nonCoherentAtomSize << std::endl;
    --gTab;
}

void print_features(const PhysicalDevice& physicalDevice)
{
    const auto& features = physicalDevice.features();
    std::cout << Tab(gTab++) << "Features -" << std::endl;
    std::cout << Tab(gTab) << "robustBufferAccess                      : " << features.robustBufferAccess << std::endl;
    std::cout << Tab(gTab) << "fullDrawIndexUint32                     : " << features.fullDrawIndexUint32 << std::endl;
    std::cout << Tab(gTab) << "imageCubeArray                          : " << features.imageCubeArray << std::endl;
    std::cout << Tab(gTab) << "independentBlend                        : " << features.independentBlend << std::endl;
    std::cout << Tab(gTab) << "geometryShader                          : " << features.geometryShader << std::endl;
    std::cout << Tab(gTab) << "tessellationShader                      : " << features.tessellationShader << std::endl;
    std::cout << Tab(gTab) << "sampleRateShading                       : " << features.sampleRateShading << std::endl;
    std::cout << Tab(gTab) << "dualSrcBlend                            : " << features.dualSrcBlend << std::endl;
    std::cout << Tab(gTab) << "logicOp                                 : " << features.logicOp << std::endl;
    std::cout << Tab(gTab) << "multiDrawIndirect                       : " << features.multiDrawIndirect << std::endl;
    std::cout << Tab(gTab) << "drawIndirectFirstInstance               : " << features.drawIndirectFirstInstance << std::endl;
    std::cout << Tab(gTab) << "depthClamp                              : " << features.depthClamp << std::endl;
    std::cout << Tab(gTab) << "depthBiasClamp                          : " << features.depthBiasClamp << std::endl;
    std::cout << Tab(gTab) << "fillModeNonSolid                        : " << features.fillModeNonSolid << std::endl;
    std::cout << Tab(gTab) << "depthBounds                             : " << features.depthBounds << std::endl;
    std::cout << Tab(gTab) << "wideLines                               : " << features.wideLines << std::endl;
    std::cout << Tab(gTab) << "largePoints                             : " << features.largePoints << std::endl;
    std::cout << Tab(gTab) << "alphaToOne                              : " << features.alphaToOne << std::endl;
    std::cout << Tab(gTab) << "multiViewport                           : " << features.multiViewport << std::endl;
    std::cout << Tab(gTab) << "samplerAnisotropy                       : " << features.samplerAnisotropy << std::endl;
    std::cout << Tab(gTab) << "textureCompressionETC2                  : " << features.textureCompressionETC2 << std::endl;
    std::cout << Tab(gTab) << "textureCompressionASTC_LDR              : " << features.textureCompressionASTC_LDR << std::endl;
    std::cout << Tab(gTab) << "textureCompressionBC                    : " << features.textureCompressionBC << std::endl;
    std::cout << Tab(gTab) << "occlusionQueryPrecise                   : " << features.occlusionQueryPrecise << std::endl;
    std::cout << Tab(gTab) << "pipelineStatisticsQuery                 : " << features.pipelineStatisticsQuery << std::endl;
    std::cout << Tab(gTab) << "vertexPipelineStoresAndAtomics          : " << features.vertexPipelineStoresAndAtomics << std::endl;
    std::cout << Tab(gTab) << "fragmentStoresAndAtomics                : " << features.fragmentStoresAndAtomics << std::endl;
    std::cout << Tab(gTab) << "shaderTessellationAndGeometryPointSize  : " << features.shaderTessellationAndGeometryPointSize << std::endl;
    std::cout << Tab(gTab) << "shaderImageGatherExtended               : " << features.shaderImageGatherExtended << std::endl;
    std::cout << Tab(gTab) << "shaderStorageImageExtendedFormats       : " << features.shaderStorageImageExtendedFormats << std::endl;
    std::cout << Tab(gTab) << "shaderStorageImageMultisample           : " << features.shaderStorageImageMultisample << std::endl;
    std::cout << Tab(gTab) << "shaderStorageImageReadWithoutFormat     : " << features.shaderStorageImageReadWithoutFormat << std::endl;
    std::cout << Tab(gTab) << "shaderStorageImageWriteWithoutFormat    : " << features.shaderStorageImageWriteWithoutFormat << std::endl;
    std::cout << Tab(gTab) << "shaderUniformBufferArrayDynamicIndexing : " << features.shaderUniformBufferArrayDynamicIndexing << std::endl;
    std::cout << Tab(gTab) << "shaderSampledImageArrayDynamicIndexing  : " << features.shaderSampledImageArrayDynamicIndexing << std::endl;
    std::cout << Tab(gTab) << "shaderStorageBufferArrayDynamicIndexing : " << features.shaderStorageBufferArrayDynamicIndexing << std::endl;
    std::cout << Tab(gTab) << "shaderStorageImageArrayDynamicIndexing  : " << features.shaderStorageImageArrayDynamicIndexing << std::endl;
    std::cout << Tab(gTab) << "shaderClipDistance                      : " << features.shaderClipDistance << std::endl;
    std::cout << Tab(gTab) << "shaderCullDistance                      : " << features.shaderCullDistance << std::endl;
    std::cout << Tab(gTab) << "shaderFloat64                           : " << features.shaderFloat64 << std::endl;
    std::cout << Tab(gTab) << "shaderInt64                             : " << features.shaderInt64 << std::endl;
    std::cout << Tab(gTab) << "shaderInt16                             : " << features.shaderInt16 << std::endl;
    std::cout << Tab(gTab) << "shaderResourceResidency                 : " << features.shaderResourceResidency << std::endl;
    std::cout << Tab(gTab) << "shaderResourceMinLod                    : " << features.shaderResourceMinLod << std::endl;
    std::cout << Tab(gTab) << "sparseBinding                           : " << features.sparseBinding << std::endl;
    std::cout << Tab(gTab) << "sparseResidencyBuffer                   : " << features.sparseResidencyBuffer << std::endl;
    std::cout << Tab(gTab) << "sparseResidencyImage2D                  : " << features.sparseResidencyImage2D << std::endl;
    std::cout << Tab(gTab) << "sparseResidencyImage3D                  : " << features.sparseResidencyImage3D << std::endl;
    std::cout << Tab(gTab) << "sparseResidency2Samples                 : " << features.sparseResidency2Samples << std::endl;
    std::cout << Tab(gTab) << "sparseResidency4Samples                 : " << features.sparseResidency4Samples << std::endl;
    std::cout << Tab(gTab) << "sparseResidency8Samples                 : " << features.sparseResidency8Samples << std::endl;
    std::cout << Tab(gTab) << "sparseResidency16Samples                : " << features.sparseResidency16Samples << std::endl;
    std::cout << Tab(gTab) << "sparseResidencyAliased                  : " << features.sparseResidencyAliased << std::endl;
    std::cout << Tab(gTab) << "variableMultisampleRate                 : " << features.variableMultisampleRate << std::endl;
    std::cout << Tab(gTab) << "inheritedQueries                        : " << features.inheritedQueries << std::endl;
    --gTab;
}

void print_memory_properties(const PhysicalDevice& physicalDevice)
{
    const auto& memoryProperties = physicalDevice.memory_properties();
    std::cout << Tab(gTab++) << "Memory Properties -" << std::endl;
    std::cout << Tab(gTab++) << "memoryTypeCount : " << memoryProperties.memoryTypeCount << std::endl;
    for (size_t i = 0; i < memoryProperties.memoryTypeCount; ++i) {
        std::cout << Tab(gTab++) << "heapIndex : " << memoryProperties.memoryTypes[i].heapIndex << std::endl;
        std::cout << Tab(gTab++) << "propertyFlags -" << std::endl;
        auto flags = memoryProperties.memoryTypes[i].propertyFlags;
        if (flags & VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT)     std::cout << Tab(gTab) << "VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT" << std::endl;
        if (flags & VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT)     std::cout << Tab(gTab) << "VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT" << std::endl;
        if (flags & VK_MEMORY_PROPERTY_HOST_COHERENT_BIT)    std::cout << Tab(gTab) << "VK_MEMORY_PROPERTY_HOST_COHERENT_BIT" << std::endl;
        if (flags & VK_MEMORY_PROPERTY_HOST_CACHED_BIT)      std::cout << Tab(gTab) << "VK_MEMORY_PROPERTY_HOST_CACHED_BIT" << std::endl;
        if (flags & VK_MEMORY_PROPERTY_LAZILY_ALLOCATED_BIT) std::cout << Tab(gTab) << "VK_MEMORY_PROPERTY_LAZILY_ALLOCATED_BIT" << std::endl;
        std::cout << std::endl;
        --gTab;
        --gTab;
    }
    --gTab;

    std::cout << std::endl;
    std::cout << Tab(gTab++) << "memoryHeapCount : " << memoryProperties.memoryHeapCount << std::endl;
    for (size_t i = 0; i < memoryProperties.memoryHeapCount; ++i) {
        std::cout << Tab(gTab++) << "size : " << size_str(memoryProperties.memoryHeaps[i].size) << std::endl;
        std::cout << Tab(gTab++) << "flags -" << std::endl;
        auto flags = memoryProperties.memoryHeaps[i].flags;
        if (flags & VK_MEMORY_HEAP_DEVICE_LOCAL_BIT)       std::cout << Tab(gTab) << "VK_MEMORY_HEAP_DEVICE_LOCAL_BIT" << std::endl;
        if (flags & VK_MEMORY_HEAP_MULTI_INSTANCE_BIT_KHX) std::cout << Tab(gTab) << "VK_MEMORY_HEAP_MULTI_INSTANCE_BIT_KHX" << std::endl;
        std::cout << std::endl;
        --gTab;
        --gTab;
    }
    --gTab;
    --gTab;
}
