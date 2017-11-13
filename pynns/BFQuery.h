#pragma once

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <vector>

namespace pynns {

    class BFQuery
    {
    public:
        BFQuery(std::vector< std::vector<float> > coords);
        ~BFQuery();

        void store_data(std::vector<float> coords);
        float nearest_neighbor_query(float coord, unsigned int k);
        float distance(std::vector<float> coord1, std::vector<float> coord2);


    private:

        

        std::vector<float> m_data;
        std::vector<std::vector<float>> m_coords;
        
    };

    
}

void init_bfquery(pybind11::module& m);
