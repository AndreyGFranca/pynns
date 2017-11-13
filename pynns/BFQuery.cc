#include "BFQuery.h"
#include <limits>


pynns::BFQuery::BFQuery(std::vector<std::vector<float>> coords)
{
    m_coords = coords;
}

pynns::BFQuery::~BFQuery() { }


void pynns::BFQuery::store_data(std::vector<float> coords) /*noexcept*/
{
    //m_coords = coords;
}

float pynns::BFQuery::nearest_neighbor_query(float coord, unsigned int k )
{
    float short_distance = 100.0;
    for (size_t i = 0; i < m_coords.size(); ++i)
    {
        for (size_t j = 0; j < m_coords.size(); ++j)
        {
            float dist = distance(m_coords[i], m_coords[j]);
            if(distance(dist < short_distance)){
                short_distance = dist; 
            }
        }
    }

    return short_distance;
}


float pynns::BFQuery::distance(std::vector<float> coord1, std::vector<float> coord2)
{

    float diff_x = coord1[0] - coord2[0];
    float diff_y = coord1[1] - coord2[1];
    return std::sqrt((diff_x*diff_x) + (diff_y*diff_y));
    // return std::sqrt((coord1.at(0)* coord1.at(0) - coord2.at(0)* coord2.at(0))
        // + (coord1.at(1)* coord1.at(1) - coord2.at(1)* coord2.at(1)));
}


void init_bfquery(pybind11::module& m)
{
    pybind11::class_<pynns::BFQuery>(m, "BFQuery")
        .def(pybind11::init<>())
        .def("store_data", &pynns::BFQuery::store_data);
}








