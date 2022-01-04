#include "ScavTrap.hpp"

int main()
{
    ScavTrap a("hello");
    a.attack("booo");
    a.beRepaired(10);
    a.takeDamage(80);
    ScavTrap b;
    b = a;
    b.attack("foo");
    return 0;
}