#include "Character.hpp"

Character::Character(std::string name) : _name(name), _Scount(0), _Acount(0), _Asize(10)
{
    for (int i = 0; i < 4; i++)
        slot[i] = NULL;

    address = new AMateria*[_Asize];
    for (int i = 0; i < 10; i++)
        address[i] = NULL;
}

Character::Character(const Character& c) : _name(c._name), _Scount(c._Scount), _Acount(0), _Asize(10)
{
    for (int i = 0; i < c._Scount; i++)
        slot[i] = c.slot[i]->clone();

    for (int i = _Scount; i < 4; i++)
        slot[i] = NULL;

    address = new AMateria*[_Asize];
    for (int i = 0; i < 10; i++)
        address[i] = NULL;
}

Character& Character::operator = (const Character& c)
{
    if (this != &c)
    {
        _name = c._name;
        _Scount = c._Scount;
        _Acount = 0;
        _Asize = 10;

        // delete all
        for (int i = 0; i < 4; i++)
        {
            delete slot[i];
            slot[i] = NULL;
        }

        for (int i = 0; address[i] != NULL; i++)
            delete address[i];
        delete [] address;

        // replace slot
        for (int i = 0; i < _Scount; i++)
            slot[i] = c.slot[i]->clone();

        // realloc for adresses to free
        address = new AMateria*[_Asize];
        for (int i = 0; i < 10; i++)
            address[i] = NULL;
    }
    return *this;
}


Character::~Character()
{
    for (int i = 0; i < 4; i++)
        delete slot[i];

    for (int i = 0; address[i] != NULL; i++)
        delete address[i];
    delete [] address;
}

std::string const & Character::getName() const
{
    return (_name);
}

void Character::equip(AMateria* m)
{
    if (_Scount < 4 && m != NULL)
    {
        slot[_Scount] = m->clone();
        _Scount++;
    }
}


void Character::save_address(int idx)
{
    if (_Acount < _Asize)
            address[_Acount] = slot[idx];
    else
    {
        AMateria** new_address;
        _Asize += 10;
        new_address = new AMateria*[_Asize];
        for (int i = 0; i < _Asize; i++)
        {
            if (i < _Asize - 10)
                new_address[i] = address[i];
            else
                new_address[i] = NULL;
        }
        delete [] address;
        address = new_address;
        address[_Acount] = slot[idx];
    }
    _Acount++;
}


void Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4 && slot[idx] != NULL)
    {
        this->save_address(idx);
        slot[idx] = NULL;
    }
}

void Character::use(int idx, ICharacter& target)
{
    if (idx >= 0 && idx < 4 && slot[idx] != NULL)
        slot[idx]->use(target);
}

