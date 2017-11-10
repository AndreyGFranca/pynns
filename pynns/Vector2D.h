#pragma once

namespace pynns{
 
    class Vector2D
    {
    
    public:
        template<typename T>
        Vector2D(T x, T y);
        ~Vector2D();
    
    private:
        template<typename T>
        T m_x, m_y;


    };
}