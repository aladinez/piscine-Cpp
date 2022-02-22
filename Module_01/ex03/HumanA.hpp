#ifndef _HUMANA_HPP
#define _HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanA 
{
    private :
        Weapon &_weapon;
        std::string _name;
        
    public :
        HumanA (std::string, Weapon&);
        void attack();


};

#endif