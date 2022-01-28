#ifndef _ICE_HPP
#define _ICE_HPP
#include "AMateria.hpp"
#include <iostream>

class Ice : public AMateria
{
    public:
        Ice();
        Ice(const Ice& ice);
        Ice& operator = (const Ice& ice);

        Ice* clone() const;
        void use(ICharacter& target);

        ~Ice();
};


#endif