#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>
#include <exception>
#include <stdbool.h>
#include <climits>
#include <utility>
#include <cmath>

template <typename T>
class Array
{
    private: 
        T* _data;
        unsigned int _size;    
    public:
        Array();
        Array(unsigned int n);
        Array(const Array &copy);
        Array &operator=(const Array &copy);
        ~Array();


    T& operator[](unsigned int index);
    const T& operator[](unsigned int index) const;
    
    unsigned int size() const;
};



#endif
