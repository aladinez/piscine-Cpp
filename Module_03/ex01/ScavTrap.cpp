#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20)
{
    std::cout << "ScavTrap: Parameterized Constructor called" << std::endl;
}

ScavTrap::ScavTrap() : ClapTrap("ScavTrap", 100, 50, 20)
{
    std::cout << "ScavTrap: Default Constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& clap)
{
    std::cout << "ScavTrap: Copy constructor called" << std::endl;
    *this = clap;
}

ScavTrap& ScavTrap::operator = (const ScavTrap& clap)
{
    _name = clap._name;
    _HitPoints = clap._HitPoints;
    _EnergyPoints = clap._EnergyPoints;
    _AttackDamage = clap._AttackDamage;
    std::cout << "ScavTrap: assignation opertator overload called" << std::endl;
    return (*this);
}


ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap: Destructor called" << std::endl;
}

void ScavTrap::attack(std::string const & target)
{
    std::cout << "ScavTrap " << _name << " attack " << target << ", causing " << _AttackDamage << " points of damage!" << std::endl;
    _HitPoints++;
    _AttackDamage++;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << _name << " have entered in Gate keeper mode" << std::endl;
}