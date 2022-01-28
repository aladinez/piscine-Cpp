#include "Dog.hpp"

Dog::Dog() : Animal("Dog"), _brain(new Brain())
{
    std::cout << "Dog : Constructor called" << std::endl;
}

Dog::Dog (const Dog& doggy) : Animal(doggy), _brain(new Brain())
{
    std::cout << "Dog : Copy Constructor called" << std::endl;
    // shallow copy
    // _brain = doggy._brain;
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
    std::cout << "_brain [0] value : "<< _brain->GetBrain() << std::endl;
}

void Dog::SetDog(std::string text) 
{
    _brain->SetBrain(text);
}
