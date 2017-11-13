#include "BFQuery.h"

pynns::BFQuery::BFQuery()
{

}

void pynns::BFQuery::store_data(std::vector<float> coords) /*noexcept*/
{
    // pybind11::print("Executando funcao store_data");
    //m_data = coords;
}

void pynns::BFQuery::query(float coord, unsigned int k)
{
    for (size_t i = 0; i < m_data.size(); ++i)
    {
        for (size_t j = 0; j < m_data.size(); ++i)
        {

        }
    }
}

void init_bfquery(pybind11::module& m)
{
    pybind11::class_<pynns::BFQuery>(m, "BFQuery")
        .def(pybind11::init<>())
        .def("store_data", &pynns::BFQuery::store_data);
}








