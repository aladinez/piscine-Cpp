#ifndef _ICE_HPP
#define _ICE_HPP
#include "AMateria.hpp"
#include <iostream>

class Ice : public AMateria
{
    public:
        Ice();
        Ice(const Ice&);
        Ice& operator = (const Ice&);

        Ice* clone() const;
        void use(ICharacter& target);

        ~Ice();
};


#endif