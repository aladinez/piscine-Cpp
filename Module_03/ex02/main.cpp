#include "FragTrap.hpp"

int main()
{
    FragTrap a("hello");
    a.attack("booo");
    a.beRepaired(10);
    a.takeDamage(80);
    FragTrap b;
    b = a;
    b.attack("foo");
    b = FragTrap("newww");
    b.attack("foo");
     
    b.highFivesGuys();


    return 0;
}