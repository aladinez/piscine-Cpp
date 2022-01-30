#ifndef _MATERIA_SOURCE_HPP
#define _MATERIA_SOURCE_HPP
#include "IMateriaSource.hpp"


class MateriaSource : public IMateriaSource
{
    private:
        AMateria* slot[4];
        int _count;

    public:
        MateriaSource(/* args */);
        ~MateriaSource();
        MateriaSource(const MateriaSource& m);
        MateriaSource& operator = (const MateriaSource& m);


        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);
};

#endif