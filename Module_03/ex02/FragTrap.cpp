#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30)
{
    std::cout << "FragTrap: Parameterized Constructor called" << std::endl;
}

FragTrap::FragTrap() : ClapTrap("FragTrap", 100, 100, 30)
{
    std::cout << "FragTrap: Default Constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& clap)
: ClapTrap(clap)
{
    std::cout << "FragTrap: Copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator = (const FragTrap& clap)
{
    _name = clap._name;
    _HitPoints = clap._HitPoints;
    _EnergyPoints = clap._EnergyPoints;
    _AttackDamage = clap._AttackDamage;
    std::cout << "FragTrap: assignation opertator overload called" << std::endl;
    return (*this);
}


FragTrap::~FragTrap()
{
    std::cout << "FragTrap: Destructor called" << std::endl;
}

void FragTrap::attack(std::string const & target)
{
    if (_HitPoints > 0 && _EnergyPoints > 0)
    {
        _EnergyPoints--;;
        std::cout << "FragTrap " << _name << " attack " << target << ", causing " << _AttackDamage << " points of damage!" << std::endl;
    }
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "High five bro!" << std::endl;
}