
/*
==========================================
  Copyright (c) 2020 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "dynamic_static/core/filesystem.hpp"
#include "dynamic_static/cpp-generator.hpp"
#include "dynamic_static/vk-xml-parser.hpp"

#include "create-structure-copy-generator.hpp"

#include <fstream>
#include <string>
#include <vector>

inline std::string vk_handle_function_name(const std::string& vkHandleTypeName)
{
    std::string result;
    auto tokens = dst::string::split_camel_case(dst::string::remove(vkHandleTypeName, "Vk"));
    for (size_t i = 0; i < tokens.size(); ++i) {
        result += dst::string::to_lower(tokens[i]);
        if (i < tokens.size() - 1) {
            result += "_";
        }
    }
    return result;
}

inline std::string vk_handle_parameter_name(const std::string& vkHandleTypeName)
{
    std::string result;
    result = dst::string::remove(vkHandleTypeName, "Vk");
    result[0] = dst::string::to_lower(result[0]);
    return result;
}

int main(int argc, char* argv[])
{
    dst::vk::xml::Manifest vkXmlManifest;
    dst::vk::cppgen::CreateStructureCopyGenerator g(vkXmlManifest);
    // dst::vk::cppgen::CreateStructureCopyGenerator createStructureCopyGenerator(vkXmlManifest, "dynamic_static/vulkan/");
    // createStructureCopyGenerator.module.write(
    //     "generated/include/dynamic_static/vulkan/",
    //     "generated/source/dynamic_static/vulkan/"
    // );
    return 0;
}
