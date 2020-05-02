
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
#include "comparison-operators.generator.hpp"
#include "create-structure-copy-generator.hpp"
#include "structure-to-tuple.generator.hpp"

#include "tinyxml2.h"

int main(int argc, char* argv[])
{
    tinyxml2::XMLDocument vkXml;
    auto result = vkXml.LoadFile(DYNAMIC_STATIC_VK_XML_FILE_PATH);
    if (result == tinyxml2::XML_SUCCESS) {
        dst::vk::xml::Manifest vkXmlManifest(vkXml);
        dst::vk::cppgen::ComparisonOperatorsGenerator comparisonOpertorsGenerator(vkXmlManifest);
        dst::vk::cppgen::CreateStructureCopyGenerator createStructureCopyGenerator(vkXmlManifest);
        dst::vk::cppgen::StructureToTupleGenerator structureToTupleGenerator(vkXmlManifest);
    }
    return 0;
}
