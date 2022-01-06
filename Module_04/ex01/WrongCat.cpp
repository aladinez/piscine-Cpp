#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
    _type = "WrongCat";
    std::cout << "WrongCat : Constructor called" << std::endl;
}

WrongCat::WrongCat (const WrongCat& cat) : WrongAnimal(cat)
{
    std::cout << "WrongCat : Copy Constructor called" << std::endl;
}
WrongCat& WrongCat::operator = (const WrongCat& cat)
{
    _type = cat._type;
    return *this;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat : Destructor called" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "Wrong Meowwwww" << std::endl;
}

