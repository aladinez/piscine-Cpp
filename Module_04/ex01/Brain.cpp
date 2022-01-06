#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain : Constructor called" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain : Destructor called" << std::endl;
}

Brain::Brain (const Brain& brain)
{
    std::cout << "Brain : Copy constructor called" << std::endl;

    *this = brain;
}

Brain& Brain::operator = (const Brain& brain)
{
    std::cout << "Brain : assignation operator overload called" << std::endl;
    std::cout << sizeof(std::string) << std::endl;
    for (size_t i = 0; i < sizeof(brain._ideas)/sizeof(std::string); i++)
        _ideas[i] = brain._ideas[i];
    return *this;
}

