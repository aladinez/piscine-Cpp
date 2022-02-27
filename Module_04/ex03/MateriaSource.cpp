#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : slot(), _count(0)
{
}

MateriaSource::~MateriaSource()
{
    for(int i = 0; i < 4; i++)
        delete slot[i];
}

MateriaSource::MateriaSource(const MateriaSource& m) : slot()
{
    *this = m;
}

MateriaSource& MateriaSource::operator = (const MateriaSource& m)
{
    if (this != &m)
    {
        _count = m._count;
        for(int i = 0; i < 4; i++)
            delete slot[i];

        for (int i = 0; i < 4; i++)
            slot[i] = m.slot[i]->clone();
    }
    return *this;
}

void MateriaSource::learnMateria(AMateria* m)
{
    if (_count < 4 && m != NULL)
    {
        slot[_count] = m->clone();
        _count++;
    }
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = _count - 1; i >= 0; i--)
    {
        if (slot[i]->getType() == type)
            return (slot[i]->clone());
    }
    return 0;
}