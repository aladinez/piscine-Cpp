#include <iostream>
#include "iter.hpp"

template <typename T>
void print(T str)
{
    std::cout << str << std::endl;
}

int main()
{
    int tab1[] = {1, 2, 3, 4, 5};
    std::string tab2[] = {"hola", "los", "hermanos"};

    iter(tab1, 5, print);
    iter(tab2, 3, print);

    return 0;
}