#include "easyfind.hpp"
#include <iostream>
#include <algorithm>
#include <vector>
#include <list>


int main()
{
    int myints[] = { 10, 20, 30, 40 };
    std::vector<int> contain(myints, myints + 4);
    std::vector<int>::iterator it;

    std::list<int> my_list(myints, myints + 4);
    std::list<int>::iterator it2;

    try
    {
        it2 =  easyfind(my_list, 40);
        std::cout << *it2 << std::endl;
        it = easyfind(contain, 548);
        std::cout << *it << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}