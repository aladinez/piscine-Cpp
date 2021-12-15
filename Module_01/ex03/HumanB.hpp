#include "Weapon.hpp"
#include <iostream>

class HumanB
{
    private :
        Weapon *weapon;
        std::string name;
    public :
        HumanB (std::string userName);
        void attack();
        void setWeapon(Weapon& wp);
};