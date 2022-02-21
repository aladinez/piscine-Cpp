#include "HumanB.hpp"

HumanB::HumanB (std::string name): _weapon(0), _name(name)
{
}

void HumanB::attack()
{
    std::cout << _name << " attacks with his " << _weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon& wp)
{
    _weapon = &wp;
}

