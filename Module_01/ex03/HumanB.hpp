#include "Weapon.hpp"
#include <iostream>

class HumanB
{
    private :
        Weapon *_weapon;
        std::string _name;
    public :
        HumanB (std::string);
        void attack();
        void setWeapon(Weapon&);
};