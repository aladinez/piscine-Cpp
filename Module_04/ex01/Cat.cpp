#include "Cat.hpp"

Cat::Cat() : Animal("Cat"), _brain(new Brain())
{
    std::cout << "Cat : Constructor called" << std::endl;
}

Cat::Cat (const Cat& cat) : Animal(cat)
{
    std::cout << "Cat : Copy Constructor called" << std::endl;
    delete _brain;
    _brain = new Brain(*(cat._brain));
}
Cat& Cat::operator = (const Cat& cat)
{
    std::cout << "Cat : Assignment operator overload called" << std::endl;
    if (this != &cat)
    {
        _type = cat._type;
        delete _brain;
        _brain = new Brain(*(cat._brain));
    }
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

