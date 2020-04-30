
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

#include "create-structure-copy-generator.hpp"
#include "structure-to-tuple.generator.hpp"

int main(int argc, char* argv[])
{
    dst::vk::xml::Manifest vkXmlManifest;
    dst::vk::cppgen::CreateStructureCopyGenerator createStructureCopyGenerator(vkXmlManifest);
    dst::vk::cppgen::StructureToTupleGenerator structureToTupleGenerator(vkXmlManifest);
    return 0;
}
