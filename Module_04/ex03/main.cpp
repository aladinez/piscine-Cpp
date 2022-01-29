#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main ()
{
    AMateria* mat = new Cure();
    Character* kar = new Character("hola");

    kar->equip(mat);
    kar->equip(mat);
    kar->equip(mat);
    kar->equip(mat);
    kar->equip(mat);
    kar->use(2, *kar);

    Character* kar2 = new Character("hola 33");

    *kar2 = *kar;

    kar->display();
    kar2->display();

    kar->unequip(0);
    kar->unequip(1);
    kar->unequip(2);
    kar->unequip(3);
    kar2->use(0, *kar);
    kar2->use(1, *kar2);
    kar2->use(2, *kar2);

    delete mat;
    delete kar;

    return 0;
}