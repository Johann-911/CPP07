#include "whatever.hpp"

int main()
{
    int a = 2;
    int b = 3;
    
    std::cout << "a begin : " << a << std::endl;
    std::cout << "b begin : " << b << std::endl;    
    swap(a, b); 
    std::cout << "a after : " << a << std::endl;
    std::cout << "b after : " << b << std::endl;    

    std::string c = "john1";
    std::string d = "john2";
    swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;    
    std::cout << min(a, b) << std::endl;
    std::cout << max(a, b) << std::endl;

    return 0;
}