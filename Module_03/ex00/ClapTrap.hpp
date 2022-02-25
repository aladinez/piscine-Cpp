#ifndef _CLAP_HPP
#define _CLAP_HPP

#include <iostream>

class ClapTrap
{
    // TODO : orthodox class
    private:
        std::string _name;
        int _HitPoints;
        int _EnergyPoints;
        int _AttackDamage;
    public:
        ClapTrap();
        ClapTrap(std::string);
        ClapTrap(const ClapTrap& clap);
        ClapTrap& operator = (const ClapTrap& clap);
        ~ClapTrap();
        void attack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif