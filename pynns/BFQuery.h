#pragma once

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <vector>

namespace pynns {

    class BFQuery
    {
    public:
        BFQuery(std::vector<std::vector<float>> a);
        ~BFQuery();        

        std::vector<float>  nearest_neighbor(const std::vector<float>& p);
        float distance(std::vector<float> p1, std::vector<float> p2);

    private:

        std::vector<std::vector<float>> m_data;
        
    };

    
}

void init_bfquery(pybind11::module& m);
