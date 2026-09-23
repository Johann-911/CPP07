#include "Array.hpp"

int main()
{

    try
    {
        Array<int> a;
        std::cout << a.size() << std::endl;
        
        Array<int> b(5);
        std::cout << b.size() << std::endl;
        for(unsigned int i = 0; i < b.size(); i++)
            b[i] = i * 2;
        std::cout << b[4] << std::endl;

        Array<std::string> s1;
        std::cout << a.size() << std::endl;
        Array<std::string> s2(3);
        s2[1] = "Hello";
        s2[2] = "world";
        std::cout << "s2[1] : " << s2[1] << std::endl;
        std::cout << "s2[2] : " << s2[2] << std::endl;
        try
        {
            std::cout << " try to access out of bound s2[8]" << std::endl;
            std::cout << s2[8] << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << " error : " << e.what() << std::endl;
        }
        
    }    
    catch(const std::exception& e)
    {
        std::cerr << " error caught : " << e.what() << std::endl;
    }
    return 0;

}