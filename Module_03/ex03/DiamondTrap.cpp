#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name", 100, 50, 30), ScavTrap(), FragTrap(), _name(name)
{
    std::cout << "DiamondTrap : Constructor with called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap : Destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& diamond)
: ClapTrap(diamond), ScavTrap(diamond), FragTrap(diamond)
{
    std::cout << "DiamondTrap: Copy constructor called" << std::endl;
    // *this = diamond;   
    _name = diamond._name;
}

DiamondTrap& DiamondTrap::operator= (const DiamondTrap& diamond)
{
    _name = diamond._name;
    ClapTrap::operator=(diamond);
    std::cout << "DiamondTrap: assignation opertator overload called" << std::endl;
    return (*this);
}

void DiamondTrap::attack(std::string target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
    std::cout << "Diamond name : " << _name << std::endl;
    std::cout << "Claptrap name : " << ClapTrap::_name << std::endl;
}
