
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

inline void generate_get_stype(const xml::Manifest& xmlManifest)
{
    using namespace dst::cppgen;
    using namespace dst::vk::xml;
    std::filesystem::path includePath(DYNAMIC_STATIC_GRAPHICS_VULKAN_GENERATED_INCLUDE_PATH);
    File(includePath / "get-stype.hpp") << SourceBlock(R"(
        /*
        ==========================================
            Copyright (c) 2020 Dynamic_Static
            Patrick Purcell
                Licensed under the MIT license
            http://opensource.org/licenses/MIT
        ==========================================
        */

        #pragma once

        #include "dynamic_static/graphics/vulkan/defines.hpp"

        #include <cassert>
        #include <type_traits>

        namespace dst {
        namespace vk {

        /**
        TODO : Documentation
        */
        template <typename VulkanStructureType>
        inline constexpr VkStructureType get_stype()
        {
            $<UNFILTERED_STRUCTURES>
            $<condition="HAS_STRUCTURE_TYPE_ENUM">
            $<COMPILE_GUARDS>
            #ifdef ${COMPILE_GUARD}
            $</>
            if constexpr (std::is_same_v<VulkanStructureType, ${STRUCTURE_NAME}>) {
                return ${STRUCTURE_TYPE_ENUM};
            }
            $<COMPILE_GUARDS:reverse=true>
            #endif // ${COMPILE_GUARD}
            $</>
            $</>
            $</>
            assert(false && "TODO : Error message");
        }

        } // namespace vk
        } // namespace dst
    )", {
        get_unfiltered_structure_source_blocks(xmlManifest)
    });
}

} // namespace cppgen
} // namespace vk
} // namespace dst
