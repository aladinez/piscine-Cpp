#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "Dog : Constructor called" << std::endl;
}

Dog::Dog (const Dog& doggy) : Animal(doggy)
{
    std::cout << "Dog : Copy Constructor called" << std::endl;
}
Dog& Dog::operator = (const Dog& doggy)
{
    _type = doggy._type;
    return *this;
}

Dog::~Dog()
{
    std::cout << "Dog : Destructor called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Whoooof whooof" << std::endl;
}

