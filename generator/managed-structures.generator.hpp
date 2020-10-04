
/*
==========================================
  Copyright (c) 2020 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "dynamic_static/cpp-generator.hpp"
#include "dynamic_static/vk-xml-parser.hpp"
#include "utilities.hpp"

namespace dst {
namespace vk {
namespace cppgen {

/**
TODO : Documentation
*/
inline void generate_managed_structures(const xml::Manifest& xmlManifest)
{
    using namespace dst::cppgen;
    using namespace dst::vk::xml;
    std::filesystem::path includePath(DYNAMIC_STATIC_GRAPHICS_VULKAN_GENERATED_INCLUDE_PATH);
    File(includePath / "managed-structures.hpp") << SourceBlock(R"(
    /*
    ==========================================
        Copyright (c) 2020 Dynamic_Static
        Patrick Purcell
            Licensed under the MIT license
        http://opensource.org/licenses/MIT
    ==========================================
    */

    #pragma once

    #include "dynamic_static/graphics/vulkan/detail/managed.hpp"
    #include "dynamic_static/graphics/vulkan/detail/managed-structure.hpp"
    #include "dynamic_static/graphics/vulkan/defines.hpp"

    namespace dst {
    namespace vk {

    $<UNFILTERED_STRUCTURES:"\n">
    $<COMPILE_GUARDS>
    #ifdef ${COMPILE_GUARD}
    $</>
    template <>
    class Managed<${STRUCTURE_NAME}>
        : public detail::ManagedStructure<${STRUCTURE_NAME}>
    {
    public:
        using detail::ManagedStructure<${STRUCTURE_NAME}>::ManagedStructure<${STRUCTURE_NAME}>;
    };
    $<COMPILE_GUARDS:reverse=true>
    #endif // ${COMPILE_GUARD}
    $</>
    $</>

    } // namespace vk
    } // namespace dst
    )", {
        get_unfiltered_structure_source_blocks(xmlManifest)
    });
}

} // namespace cppgen
} // namespace vk
} // namespace dst
