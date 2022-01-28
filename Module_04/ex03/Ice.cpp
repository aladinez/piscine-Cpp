#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice() : AMateria("ice")
{
}

Ice::Ice(const Ice& ice) : AMateria("ice")
{
}

Ice& Ice::operator = (const Ice& ice)
{
    // While assigning a Materia to another, copying the type doesn’t make sense.
    return *this;
}


Ice::~Ice()
{
}

Ice* Ice::clone() const
{
    return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}