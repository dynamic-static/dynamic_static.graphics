
/*
==========================================
  Copyright (c) 2016-2018 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "Dynamic_Static/Graphics/Vulkan/Defines.hpp"

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    /*
    * Common base for all Vulkan Instance child objects.
    */
    class InstanceChild
    {
    private:
        Instance* mInstance { nullptr };

    protected:
        /*
        * Constructs an instance of Instance::Child.
        * @param [in] instance This Instance::Child's Instance
        */
        InstanceChild(Instance* instance);

    public:
        /*
        * Destroys this instance of Instance::Child.
        */
        virtual ~InstanceChild() = 0;

    public:
        /*
        * Gets this Instance::Child's Instance.
        * @return This Instance::Child's Instance
        */
        Instance& get_instance();

        /*
        * Gets this Instance::Child's Instance.
        * @return This Instance::Child's Instance
        */
        const Instance& get_instance() const;
    };

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
