#include "Array.hpp"

template <typename T>
Array<T>::Array()
{
    _size = 0;
    _data = NULL;
}

template <typename T>
Array<T>::Array(unsigned int n) : _data(NULL) , _size(n)
{
    if(n > 0)
        _data = new T[n]();
}
 

template <typename T>
Array<T>::Array(const Array &copy) : _size(copy._size)
{
    _data = new T[_size]();
    for(int i = 0; i < _size; i++)
    {
        _data[i] = copy._data[i];      
    }
}
template <typename T>
Array<T> &Array<T>::operator=(const Array<T> &copy)
{
    if(this != &copy)
    {
        delete[] _data;
        _data = NULL;
        _size = copy._size;
        _data = new T[_size]();
        for(int i = 0; i < _size; i++)
        {
            _data[i] = copy._data[i];
        }
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


template <typename T>
T& Array<T>::operator[](unsigned int index)
{
    if(index >= _size)
        throw std::out_of_range("index out of range");
    return _data[index];
}

template <typename T>
const T& Array<T>::operator[](unsigned int index) const
{
    if(index >= _size)
        throw std::out_of_range("index out of range");
    return _data[index];
}