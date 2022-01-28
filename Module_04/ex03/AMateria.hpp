#ifndef _AMATERIA_HPP
#define _AMATERIA_HPP

#include <string>
// #include "ICharacter.hpp"

class ICharacter;

class AMateria
{
    protected:
        std::string _type;
    public:
        AMateria(std::string const &type);
        AMateria(const AMateria& amateria);
        AMateria& operator = (const AMateria& amateria);

        std::string const & getType() const; //Returns the materia type
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);

        virtual ~AMateria();
};

#endif
