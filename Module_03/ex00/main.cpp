#include "ClapTrap.hpp"

int main()
{
    ClapTrap clap("Peper");

    clap.attack("robot");
    clap.takeDamage(9);
    clap.beRepaired(2);

    clap.attack("robot");
    clap.takeDamage(9);
    clap.beRepaired(2);
    return 0;
}