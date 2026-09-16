#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>
#include <string>
#include <exception>
#include <stdbool.h>
#include <climits>
#include <utility>
#include <cmath>

template <typename T> void swap(T& x, T& y)
{
    std::swap(x, y);
}

template <typename T> T min(T x, T y)
{
    return (x < y) ? x : y;
}

template <typename T> T max(T x, T y)
{
    return (x > y) ? x : y;
}

#endif