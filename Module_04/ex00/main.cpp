#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
    
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    delete j;
    delete i;
    delete meta;

    const WrongAnimal* meta1 = new WrongAnimal();
    const WrongAnimal* i1 = new WrongCat();

    std::cout << i1->getType() << " " << std::endl;
    i1->makeSound();
    meta1->makeSound();

    return 0;
}