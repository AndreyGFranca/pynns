#include <pybind11/pybind11.h>


PYBIND11_MODULE(_pyaget, m) 
{


#ifdef VERSION_INFO
    m.attr("__version__") = VERSION_INFO;
#else
    m.attr("__version__") = "dev";
#endif
}