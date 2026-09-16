#include "iter.hpp"


int main()
{
    int i[] = {1, 2, 3, 4};

    iter(i, 4, print<int>);
    return 0;
}