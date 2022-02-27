#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure() : AMateria("cure")
{
}

Cure::Cure(const Cure&) : AMateria("cure")
{
}

Cure& Cure::operator = (const Cure&)
{
    // While assigning a Materia to another, copying the type doesn’t make sense.
    return *this;
}


Cure::~Cure()
{
}

Cure* Cure::clone() const
{
    return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
    std::cout <<  "* heals "<< target.getName() << "\'s wounds *" << std::endl;
}