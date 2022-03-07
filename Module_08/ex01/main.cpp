#include "Span.hpp"
#include <iostream>


int main()
{
    // std::vector<int> vec;
    // srand(time(NULL));
    // for (int i = 1; i < 10; i++)
    //     vec.push_back(rand() % 1000);

    // std::sort(vec.begin(), vec.end());
    // for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it)
    //     std::cout << *it << '\n' ;
    
    // Span sp1(10);
    // try
    // {
    //     sp1.addNumber(vec.begin(), vec.end());
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }

    Span sp = Span(5);
    try
    {
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    
    return 0;
}