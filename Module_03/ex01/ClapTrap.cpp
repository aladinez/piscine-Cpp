#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name, int hit, int energy, int attack) :
_name(name), _HitPoints(hit), _EnergyPoints(energy), _AttackDamage(attack)
{
    std::cout << "ClapTrap: Parameterized Constructor called" << std::endl;
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
    if (_HitPoints > 0 && _EnergyPoints > 0)
    {
        _EnergyPoints--;
        std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _AttackDamage << " points of damage!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_HitPoints > 0 && _EnergyPoints > 0)
    {
        if (_HitPoints - amount < 0)
            _HitPoints = 0;
        else
            _HitPoints -= amount;
        std::cout << "ClapTrap " << _name << " has been attacked, losing " << amount << " of hit points!" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_HitPoints > 0 && _EnergyPoints > 0)
    {
        _EnergyPoints--;
        _HitPoints += amount;
        std::cout << "ClapTrap " << _name << " got repaired, gaining " << amount << " of hit points !" << std::endl;
    }
}