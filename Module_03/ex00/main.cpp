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

    std::cout << std::endl;

    clap.attack("robot");
    clap.takeDamage(9);
    clap.beRepaired(2); // not executed, no more energy.

    std::cout << std::endl;

    clap.attack("robot");
    clap.takeDamage(9);
    clap.beRepaired(2);
    return 0;
}