#include "HumanA.hpp"

HumanA::HumanA (std::string userName, Weapon &userWeapon): weapon(userWeapon), name(userName)
{
}

void HumanA::attack()
{
    std::cout << name << " attacks with his " << weapon.getType() << std::endl;
}

