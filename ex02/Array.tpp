#include "Array.hpp"

template <typename T>
Array<T>::Array()
{
    _size = 0;
    _data = NULL;
}

template <typename T>
Array<T>::Array(unsigned int n) : _size(n)
{
    _data = new T[n]();
}
 

template <typename T>
Array<T>::Array(const Array &copy) : _size(copy._size)
{
    _data = new T[_size]();
}
template <typename T>
Array &Array<T>::operator=(const Array &copy)
{
    if(this != &copy)
    {
        this = &copy;
    }
    return *this;
}

template <typename T>
Array<T>::~Array()
{
    delete[] _data;
}


template <typename T>
unsigned int Array<T>::size() const
{
    return this->_size;
}

