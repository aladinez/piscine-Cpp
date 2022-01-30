#ifndef _CURE_HPP
#define _CURE_HPP
#include "AMateria.hpp"
#include <iostream>

class Cure : public AMateria
{
    public:
        Cure();
        Cure(const Cure&);
        Cure& operator = (const Cure&);

        Cure* clone() const;
        void use(ICharacter& target);

        ~Cure();
};


#endif