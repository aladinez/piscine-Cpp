#include "Character.hpp"
#include "Ice.hpp"

int main ()
{
    AMateria* mat = new Ice();
    ICharacter* kar = new Character("hola");

    kar->equip(mat);
    kar->equip(mat);
    kar->equip(mat);
    kar->equip(mat);
    kar->equip(mat);

    // kar->unequip(0);
    // kar->unequip(1);
    // kar->unequip(2);
    // kar->unequip(3);

    delete mat;
    delete kar;

    return 0;
}