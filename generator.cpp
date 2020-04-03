
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

int main(int argc, char* arv[])
{
    auto vkXmlFilePath = "D:/Users/purcellp/Documents/vk.xml";
    dst::vk::xml::Manifest vkXmlManifest(vkXmlFilePath);





    dst::cppgen::Module processHandlesModule;
    processHandlesModule.name = "process-handles";
    processHandlesModule.documentation = "Here's some documentation info with example usage";
    dst::cppgen::Namespace dstVkNamespace("dst::vk");
    for (const auto& handleItr : vkXmlManifest.handles) {
        const auto& handle = handleItr.second;
        dst::cppgen::Function processHandleFunction;
        processHandleFunction.documentation = "Processes a given " + handle.name;
        processHandleFunction.name = "process_" + vk_handle_function_name(handle.name);
        dst::cppgen::Function::Parameter parameter;
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
    std::ofstream("handles.hpp") << processHandlesModule.generate_declaration({
        { dst::cppgen::Include::Type::External, "vulkan/vulkan.hpp" }
    });
    std::ofstream("handles.cpp") << processHandlesModule.generate_definition({
        { dst::cppgen::Include::Type::Project, "handles.hpp" }
    });


#if 0
    std::vector<dst::cppgen::Function> functions;
    for (const auto& handleItr : vkXmlManifest.handles) {
        const auto& handle = handleItr.second;
        dst::cppgen::Function function;
        function.documentation = "Processes a given " + handle.name;
        function.name = "process_" + vk_handle_function_name(handle.name);
        dst::cppgen::Function::Parameter parameter;
        parameter.documentation = "The " + handle.name + " to process";
        parameter.type = handle.name;
        parameter.name = vk_handle_parameter_name(handle.name);
        function.parameters.push_back(parameter);
        parameter = { };
        parameter.documentation = "Whether or not to do the thing";
        parameter.type = "bool";
        parameter.name = "doTheThing";
        parameter.defaultValue = "true";
        function.parameters.push_back(parameter);
        functions.push_back(function);
    }
    std::stringstream header;
    std::stringstream source;
    header << std::endl;
    header << "#include \"vulkan/vulkan.h\"" << std::endl;
    header << std::endl;
    source << std::endl;
    source << "#include \"handles.hpp\"" << std::endl;
    source << std::endl;
    for (const auto& function : functions) {
        header << function.generate_documentation() << std::endl;
        header << function.generate_declaration() << std::endl;
        header << std::endl;
        source << function.generate_definition() << std::endl;
    }
    std::ofstream("handles.hpp") << header.str();
    std::ofstream("handles.cpp") << source.str();
#endif
    return 0;
}
