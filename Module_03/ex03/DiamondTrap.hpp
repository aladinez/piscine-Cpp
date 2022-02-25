#ifndef _DIAMOND_HPP
#define _DIAMOND_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"


class DiamondTrap : public ScavTrap, public FragTrap
{
private:
    std::string _name;    
public:
    DiamondTrap(std::string name);
    DiamondTrap(const DiamondTrap& diamond);
    DiamondTrap& operator= (const DiamondTrap& diamond);
    
    ~DiamondTrap();


    void attack(std::string target);
    void whoAmI();
    // void getNames();
};

#endif

