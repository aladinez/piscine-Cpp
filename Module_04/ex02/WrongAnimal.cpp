#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal : Constructor called" << std::endl;
}
WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal : Destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& wrong)
{
    std::cout << "WrongAnimal : Copy constructor called" << std::endl;
    *this = wrong;
}
WrongAnimal& WrongAnimal::operator = (const WrongAnimal& wrong)
{
    std::cout << "WrongAnimal : assignation operator overload called" << std::endl;
    _type = wrong._type;
    return (*this);
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal sound" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return (_type);
}

