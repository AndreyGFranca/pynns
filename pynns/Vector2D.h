#pragma once

namespace pynns{
 
    template<typename T>
    class Vector2D
    {
    
    public:
        Vector2D(T x, T y);
        ~Vector2D();
    
    private:
        T m_x, m_y;


    };
}