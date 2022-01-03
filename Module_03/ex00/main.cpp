#include "ClapTrap.hpp"

int main()
{
    ClapTrap a;
    ClapTrap clap("Peper");
    ClapTrap b(clap);
    a = b;

    clap.attack("robot");
    clap.takeDamage(9);
    clap.beRepaired(2);

    clap.attack("robot");
    clap.takeDamage(9);
    clap.beRepaired(2);
    return 0;
}