#include <iostream>

class ClapTrap
{
    private:
        std::string _name;
        int _HitPoints;
        int _EnergyPoints;
        int _AttackDamage;
    public:
        ClapTrap(std::string name);
        ~ClapTrap();
        void attack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};
