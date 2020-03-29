
/*
==========================================
  Copyright (c) 2020 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "dynamic_static/core/defines.hpp"

#include <string>

namespace dst {
namespace vk {

/**
TODO : Documentation
*/
class ApiElement
{
public:
    template <typename ApiElementType>
    class Manifest;

    /**
    TODO : Documentation
    */
    virtual ~ApiElement();

    std::string name;         //!< TODO : Documentation
    std::string alias;        //!< TODO : Documentation
    std::string extension;    //!< TODO : Documentation
    std::string compileGuard; //!< TODO : Documentation
};

} // namespace vk
} // namespace dst
