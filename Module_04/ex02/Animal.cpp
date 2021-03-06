#include "Animal.hpp"

Animal::Animal(std::string type) : _type(type)
{
    std::cout << "Animal : Constructor called" << std::endl;
}
Animal::~Animal()
{
    std::cout << "Animal : Destructor called" << std::endl;
}

Animal::Animal(const Animal& animal)
{
    std::cout << "Animal : Copy constructor called" << std::endl;
    *this = animal;
}
Animal& Animal::operator = (const Animal& animal)
{
    std::cout << "Animal : assignation operator overload called" << std::endl;
    _type = animal._type;
    return (*this);
}

std::string Animal::getType() const
{
    return (_type);
}