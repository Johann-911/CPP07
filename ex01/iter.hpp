#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>
#include <exception>
#include <stdbool.h>
#include <climits>
#include <utility>
#include <cmath>

template <typename T, typename F> void iter(T* x, const int length, F function)
{
    for(int index = 0; index < length; index++)
    {
        function(x[index]);
    }
}
template <typename T> void print(const T& x)
{
    std::cout << x << std::endl;
}

#endif