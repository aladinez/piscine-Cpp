#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
    // Animal hola;
    // Animal *anim = new Animal();
    Animal *anim = new Dog();
    anim->makeSound();
    std::cout << anim->getType();

    return 0;
}
