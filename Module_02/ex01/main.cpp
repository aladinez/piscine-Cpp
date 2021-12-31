#include "Fixed.hpp"

int main()
{
    Fixed b (42.42f);
    float a(43.54f);
    std::cout << b.toFloat() << std::endl;
    std::cout << a << std::endl;
    return 0;
}
