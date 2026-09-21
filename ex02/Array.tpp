#include "Array.hpp"

Array::Array()
{
}

Array::Array(unsigned int n) : _size(n)
{
}


Array::Array(const Array &copy) : _size(copy._size)
{    
}

Array &Array::operator=(const Array &copy)
{
    if(this != &copy)
    {
        this = &copy;
    }
    return *this;
}

Array::~Array()
{
}


unsigned int Array::size() const
{
    return this->_size;
}

