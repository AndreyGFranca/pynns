#pragma once

#include <vector>

namespace pynns {
    template<typename T>
    class BFQuery
    {
    public:
        BFQuery();
        ~BFQuery();

        void store_data(std::vector<T> coords) /*noexcept*/;
        void query(T coord, unsigned int k);

    private:

        std::vector<T> m_data;
        
    };

}