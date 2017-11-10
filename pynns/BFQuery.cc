#include "BFQuery.h"

template <class T> 
pynns::BFQuery<T>::BFQuery()
{

}

template <class T> 
void pynns::BFQuery<T>::store_data(std::vector<T> coords) /*noexcept*/
{
    m_data = coords;
}

template<class T>
void pynns::BFQuery<T>::query(T coord, unsigned int k)
{
    for (int i = 0; i < m_data.size; ++i)
    {
        for (int j = 0; j < m_data.size; ++i)
        {

        }
    }
}








