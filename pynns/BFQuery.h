#pragma once

#include <vector>

namespace pynns {
    class BFQuery
    {
    public:
        BFQuery();
        ~BFQuery();


        template <typename T> 
        void store_data(std::vector<T> const& coord) /*noexcept*/;

    private:

        template<typename T>
        std::vector<T> m_data;
        
    };

}