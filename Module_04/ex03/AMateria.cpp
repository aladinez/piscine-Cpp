#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) : _type(type)
{
}

AMateria::~AMateria()
{
}

AMateria::AMateria(const AMateria& amateria) : _type(amateria._type)
{
}

AMateria& AMateria::operator = (const AMateria& amateria)
{
    _type = amateria._type;
    return *this;
}

std::string const& AMateria::getType() const 
{
    return (_type);
}

void AMateria::use(ICharacter&){}
