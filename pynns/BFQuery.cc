#include "BFQuery.h"
#include<iostream>


pynns::BFQuery::BFQuery(std::vector<std::vector<float>> a)
{
    m_data = a;
}

pynns::BFQuery::~BFQuery() { }

std::vector<float> pynns::BFQuery::nearest_neighbor(const std::vector<float>& p)
{
    float short_dist = distance(p, m_data[0]);
    std::vector<float> nn = m_data[0];
    for(unsigned i = 0; i < m_data.size(); ++i) {
        float dist = distance(p, m_data[i]);
        if(dist < short_dist)
        {
            nn = m_data[i];
            short_dist = dist; 
        }
    }
    return nn;

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








