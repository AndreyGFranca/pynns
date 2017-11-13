#pragma once

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <vector>

namespace pynns {

    class BFQuery
    {
    public:
        BFQuery();
        ~BFQuery();

        void store_data(std::vector<float> coords) /*noexcept*/;
        void query(float coord, unsigned int k);
        void test(){
            
        }


    private:

        std::vector<float> m_data;
        
    };

    
}

void init_bfquery(pybind11::module& m);
