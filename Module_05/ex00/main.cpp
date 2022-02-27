#include "Bureaucrat.hpp"
#include  <iostream>


int main()
{
    try
    {
        // Bureaucrat("foo", -200);
        Bureaucrat a("bar", 100);
        Bureaucrat b = a;
        b.decrement();
        std::cout << b << std::endl;
        b.increment();
        b.increment();
        std::cout << b << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << "EXCEPTION : " << e.what() << std::endl;
    }
    return 0;
}