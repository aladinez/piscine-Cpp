#include "ScavTrap.hpp"

int main()
{
    ScavTrap a("hello");

    std::cout << std::endl;
    
    a.attack("booo");
    a.beRepaired(10);
    a.takeDamage(80);
    
    std::cout << std::endl;

    ScavTrap b;
    std::cout << std::endl;

    b = a;
    b.attack("foo");
    b = ScavTrap("newww");
    b.attack("foo");

    std::cout << std::endl;
     
    b.guardGate();
    a.guardGate();


    return 0;
}