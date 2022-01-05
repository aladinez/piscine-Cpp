#ifndef _FRAG_HPP
#define _FRAG_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
public:
    FragTrap();
    FragTrap(std::string name);
    FragTrap(const FragTrap& frag);
    FragTrap& operator = (const FragTrap& frag);
    ~FragTrap();
    void attack(std::string const & target);
    void highFivesGuys(void);
};

#endif