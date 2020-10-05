
/*
==========================================
  Copyright (c) 2020 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "dynamic_static/core/time.hpp"
#include "dynamic_static/vk-xml-parser.hpp"
#include "create-structure-copy.generator.hpp"
#include "destroy-structure-copy.generator.hpp"
#include "managed-handles.generator.hpp"
#include "managed-structures.generator.hpp"
#include "structure-comparison-operators.generator.hpp"
#include "structure-to-tuple.generator.hpp"

#include "tinyxml2.h"

#include <iostream>

template <typename F>
void inline time(const std::string& fName, F f)
{
    dst::Timer timer;
    f();
    std::cout << fName << '\n';
    std::cout << "    " << timer.total<dst::Seconds<>>() << " s\n";
    std::cout << "    " << timer.total<dst::Milliseconds<>>() << " ms\n";
}

int main(int argc, char* argv[])
{
    tinyxml2::XMLDocument vkXml;
    auto result = vkXml.LoadFile(DYNAMIC_STATIC_VK_XML_FILE_PATH);
    if (result == tinyxml2::XML_SUCCESS) {
        dst::vk::xml::Manifest xmlManifest(vkXml);
        dst::Timer timer;
        using namespace dst::vk::cppgen;
        // time("generate_create_structure_copy", [&]() { generate_create_structure_copy(xmlManifest); });
        time("generate_comparison_operators", [&]() { generate_comparison_operators(xmlManifest); });
        // time("generate_destroy_structure_copy", [&]() { generate_destroy_structure_copy(xmlManifest); });
        // time("generate_managed_handles", [&]() { generate_managed_handles(xmlManifest); });
        // time("generate_managed_structures", [&]() { generate_managed_structures(xmlManifest); });
        time("generate_to_tuple", [&]() { generate_to_tuple(xmlManifest); });
        std::cout << "total\n";
        std::cout << "    " << timer.total<dst::Seconds<>>() << " s\n";
        std::cout << "    " << timer.total<dst::Milliseconds<>>() << " ms\n";
    }
    return 0;
}
