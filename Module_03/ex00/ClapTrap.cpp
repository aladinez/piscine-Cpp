#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name)
                                    , _HitPoints(10)
                                    ,_EnergyPoints(10)
                                    ,_AttackDamage(0)
{
    std::cout << "Constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;

}

void ClapTrap::attack(std::string const & target)
{
    _HitPoints++;
    std::cout << "ClapTrap " << _name << " attack " << target << ", causing " << _AttackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    _AttackDamage++;
    std::cout << "ClapTrap " << _name << " has been attacked, taking " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    _EnergyPoints += amount;
    std::cout << "ClapTrap " << _name << "got repaired, gaining " << amount << " of energy points" << std::endl;
}