#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name, int hit, int energy, int attack) :
_name(name), _HitPoints(hit), _EnergyPoints(energy), _AttackDamage(attack)
{
    std::cout << "ClapTrap: Parameterized Constructor called" << std::endl;
}

ClapTrap::ClapTrap() :
_name("ClapTrap"), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0)
{
    std::cout << "ClapTrap: Default Constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& clap)
{
    std::cout << "ClapTrap: Copy constructor called" << std::endl;
    *this = clap;
}

ClapTrap& ClapTrap::operator = (const ClapTrap& clap)
{
    _name = clap._name;
    _HitPoints = clap._HitPoints;
    _EnergyPoints = clap._EnergyPoints;
    _AttackDamage = clap._AttackDamage;
    std::cout << "ClapTrap: assignation opertator overload called" << std::endl;
    return (*this);
}


ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap: Destructor called" << std::endl;
}

void ClapTrap::attack(std::string const & target)
{
    std::cout << "ClapTrap " << _name << " attack " << target << ", causing " << _AttackDamage << " points of damage!" << std::endl;
    _HitPoints++;
    _AttackDamage++;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_EnergyPoints - amount < 0)
        _EnergyPoints = 0;
    else
        _EnergyPoints -= amount;
    std::cout << "ClapTrap " << _name << " has been attacked, losing " << amount << " of energy points!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    _EnergyPoints += amount;
    std::cout << "ClapTrap " << _name << " got repaired, gaining " << amount << " of energy points !" << std::endl;
}