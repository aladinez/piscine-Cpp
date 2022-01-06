#include "Cat.hpp"

Cat::Cat() : Animal("Cat"), _brain(new Brain())
{
    std::cout << "Cat : Constructor called" << std::endl;
}

Cat::Cat (const Cat& cat) : Animal(cat)
{
    std::cout << "Cat : Copy Constructor called" << std::endl;
}
Cat& Cat::operator = (const Cat& cat)
{
    _type = cat._type;
    return *this;
}

Cat::~Cat()
{
    delete _brain;
    std::cout << "Cat : Destructor called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Meowwwww" << std::endl;
}

