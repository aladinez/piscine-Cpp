#include "Dog.hpp"

Dog::Dog() : Animal("Dog"), _brain(new Brain())
{
    std::cout << "Dog : Constructor called" << std::endl;
}

Dog::Dog (const Dog& doggy) : Animal(doggy)
{
    std::cout << "=======" << _brain << std::endl;
    std::cout << "Dog : Copy Constructor called" << std::endl;
    delete _brain;
    _brain = new Brain(*(doggy._brain));
}

Dog& Dog::operator = (const Dog& doggy)
{
    std::cout << "Dog : Assignment operator overload called" << std::endl;
    if (this != &doggy)
    {
        _type = doggy._type;
        delete _brain;
        _brain = new Brain(*(doggy._brain));
    }
    return *this;
}

Dog::~Dog()
{
    delete _brain;
    std::cout << "Dog : Destructor called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Whoooof whooof" << std::endl;
}

void Dog::GetDog() const
{
    std::cout << "_brain address : "<< _brain << std::endl;
    std::cout << "_brain [0] value : "<< _brain->_ideas[0] << std::endl;
}

void Dog::SetDog(std::string text) const
{
    _brain->_ideas[0] = text;
}

