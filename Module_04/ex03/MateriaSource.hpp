#ifndef _MATERIA_SOURCE_HPP
#define _MATERIA_SOURCE_HPP
#include "IMateriaSource.hpp"


class MateriaSource : public IMateriaSource
{
    private:
        /* data */
    public:
        MateriaSource(/* args */);
        ~MateriaSource();


        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);
};

#endif