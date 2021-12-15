#include "Weapon.hpp"
#include <iostream>

class HumanA 
{
    private :
        Weapon &weapon;
        std::string name;
        
    public :
        HumanA (std::string userName, Weapon &userWeapon);
        void attack();


};