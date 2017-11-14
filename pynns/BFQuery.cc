#include "BFQuery.h"
#include<iostream>


pynns::BFQuery::BFQuery(std::vector<std::vector<float>> a)
{
    m_data = a;
}

pynns::BFQuery::~BFQuery() { }

float pynns::BFQuery::nearest_neighbor(float p)
{
    float short_dist = distance(m_data[0], m_data[1]);

    for(unsigned i = 0; i < m_data.size(); ++i) {
        for(unsigned j = 0; j < m_data.size(); ++j) {
            if (i != j)
            {
                float dist = distance(m_data[i], m_data[j]);
                std::cout << dist << std::endl;
                if(dist < short_dist)
                {
                    short_dist = dist; 
                }
            }            
        }
    }

    return short_dist;

}

float pynns::BFQuery::distance(std::vector<float> p1, std::vector<float> p2)
{
    float diff_x = p1[0] - p2[0];
    float diff_y = p1[1] - p2[1];
    return std::sqrt(diff_x*diff_x + diff_y*diff_y);
}



void init_bfquery(pybind11::module& m)
{
    pybind11::class_<pynns::BFQuery>(m, "BFQuery")
        .def(pybind11::init<std::vector<std::vector<float>>> ())
        .def("nearest_neighbor", &pynns::BFQuery::nearest_neighbor);
}








