#include "Fixed.hpp"

int main()
{
    Fixed b (42.42f);
    std::cout << b.toInt() << std::endl;
    return 0;
}