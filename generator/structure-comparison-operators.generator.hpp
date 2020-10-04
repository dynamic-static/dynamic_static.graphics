
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

inline void generate_comparison_operator_declarations(const xml::Manifest& xmlManifest)
{
    using namespace dst::cppgen;
    using namespace dst::vk::xml;
    std::filesystem::path includePath(DYNAMIC_STATIC_GRAPHICS_VULKAN_GENERATED_INCLUDE_PATH);
    File(includePath / "comparison-operators.hpp") << SourceBlock(R"(
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

    namespace dst {
    namespace vk {

    $<UNFILTERED_STRUCTURES>
    $<COMPILE_GUARDS>
    #ifdef ${COMPILE_GUARD}
    $</>
    bool operator==(const ${STRUCTURE_NAME}& lhs, const ${STRUCTURE_NAME}& rhs);
    bool operator!=(const ${STRUCTURE_NAME}& lhs, const ${STRUCTURE_NAME}& rhs);
    bool operator<(const ${STRUCTURE_NAME}& lhs, const ${STRUCTURE_NAME}& rhs);
    bool operator<=(const ${STRUCTURE_NAME}& lhs, const ${STRUCTURE_NAME}& rhs);
    bool operator>(const ${STRUCTURE_NAME}& lhs, const ${STRUCTURE_NAME}& rhs);
    bool operator>=(const ${STRUCTURE_NAME}& lhs, const ${STRUCTURE_NAME}& rhs);
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

inline void generate_comparison_operator_definitions(const xml::Manifest& xmlManifest, const std::string& fileName, const std::string& operator0, const std::string& operator1)
{
    using namespace dst::cppgen;
    using namespace dst::vk::xml;
    std::filesystem::path sourcePath(DYNAMIC_STATIC_GRAPHICS_VULKAN_GENERATED_SOURCE_PATH);
    File(sourcePath / fileName) << SourceBlock(R"(
    /*
    ==========================================
        Copyright (c) 2020 Dynamic_Static
        Patrick Purcell
            Licensed under the MIT license
        http://opensource.org/licenses/MIT
    ==========================================
    */

    #include "dynamic_static/graphics/vulkan/generated/comparison-operators.hpp"
    #include "dynamic_static/graphics/vulkan/detail/structure-to-tuple.hpp"

    namespace dst {
    namespace vk {

    $<UNFILTERED_STRUCTURES:"\n">
    $<COMPILE_GUARDS>
    #ifdef ${COMPILE_GUARD}
    $</>
    bool operator${OPERATOR_0}(const ${STRUCTURE_NAME}& lhs, const ${STRUCTURE_NAME}& rhs)
    {
        return to_tuple(lhs) ${OPERATOR_0} to_tuple(rhs);
    }

    bool operator${OPERATOR_1}(const ${STRUCTURE_NAME}& lhs, const ${STRUCTURE_NAME}& rhs)
    {
        return to_tuple(lhs) ${OPERATOR_1} to_tuple(rhs);
    }
    $<COMPILE_GUARDS:reverse=true>
    #endif // ${COMPILE_GUARD}
    $</>
    $</>

    } // namespace vk
    } // namespace dst
    )", {
        get_unfiltered_structure_source_blocks(xmlManifest),
        SourceBlock("OPERATOR_0", operator0),
        SourceBlock("OPERATOR_1", operator1)
    });
}

inline void generate_comparison_operators(const xml::Manifest& xmlManifest)
{
    generate_comparison_operator_declarations(xmlManifest);
    generate_comparison_operator_definitions(xmlManifest, "equality-operators.cpp", "==", "!=");
    generate_comparison_operator_definitions(xmlManifest, "less-than-operators.cpp", "<", "<=");
    generate_comparison_operator_definitions(xmlManifest, "greater-than-operators.cpp", ">", ">=");
}

} // namespace cppgen
} // namespace vk
} // namespace dst
