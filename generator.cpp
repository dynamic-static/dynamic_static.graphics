
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

#include <fstream>
#include <string>
#include <vector>

#include <iostream>

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
    for (int i = 0; i < argc; ++i) {
        std::cout << argv[i] << std::endl;
    }


    auto vkXmlFilePath = "D:/Users/purcellp/Documents/vk.xml";
    //recompile
    dst::vk::xml::Manifest vkXmlManifest(vkXmlFilePath);
    using namespace dst::cppgen;
    Module processHandlesModule;
    processHandlesModule.headerIncludes.insert({ Include::Type::External, "vulkan/vulkan.h" });
    processHandlesModule.sourceIncludes.insert({ Include::Type::Project, "process-handles.hpp" });
    processHandlesModule.name = "process-handles";
    processHandlesModule.documentation = "Here's some documentation info with example usage";
    Namespace dstVkNamespace("dst::vk");
    for (const auto& handleItr : vkXmlManifest.handles) {
        const auto& handle = handleItr.second;
        Function processHandleFunction;
        processHandleFunction.documentation = "Processes a given " + handle.name;
        processHandleFunction.name = "process_" + vk_handle_function_name(handle.name);
        Function::Parameter parameter;
        parameter.documentation = "The " + handle.name + " to process";
        parameter.type = handle.name;
        parameter.name = vk_handle_parameter_name(handle.name);
        processHandleFunction.parameters.push_back(parameter);
        parameter = { };
        parameter.documentation = "Whether or not to do the thing";
        parameter.type = "bool";
        parameter.name = "doTheThing";
        parameter.defaultValue = "true";
        processHandleFunction.parameters.push_back(parameter);
        dstVkNamespace.functions.push_back(processHandleFunction);
    }
    processHandlesModule.namespaces.push_back(dstVkNamespace);
    processHandlesModule.write(".", ".");
    return 0;
}
