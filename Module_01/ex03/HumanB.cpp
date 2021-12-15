#include "HumanB.hpp"

HumanB::HumanB (std::string userName): weapon(0), name(userName)
{
}

void HumanB::attack()
{
    std::cout << name << " attacks with his " << weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon& wp)
{
    weapon = &wp;
}

