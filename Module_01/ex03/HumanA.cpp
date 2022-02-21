#include "HumanA.hpp"

HumanA::HumanA (std::string name, Weapon &wp): _weapon(wp), _name(name)
{
}

void HumanA::attack()
{
    std::cout << _name << " attacks with his " << _weapon.getType() << std::endl;
}

