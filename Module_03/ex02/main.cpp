#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main()
{
    FragTrap a("hello");

    std::cout << std::endl;
    
    a.attack("booo");
    a.beRepaired(10);
    a.takeDamage(80);
    
    std::cout << std::endl;

    FragTrap b;
    std::cout << std::endl;

    b = a;
    b.attack("foo");
    b = FragTrap("newww");
    b.attack("foo");

    std::cout << std::endl;
     
    b.highFivesGuys();
    a.highFivesGuys();

    return 0;
}