#include "Weapon.hpp"

Weapon::Weapon (std::string wp_type): type(wp_type)
{
} 

const std::string& Weapon::getType() const
{
    return (type);
}

void    Weapon::setType(std::string weaponName)
{
    type = weaponName;
}