#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
    Animal *anims[50];
    for (int i = 0; i < 25; i++)
        anims[i] = new Dog();
    for (int i = 25; i < 50; i++)
        anims[i] = new Cat();
    
    for (int i = 0; i < 50; i++)
        delete anims[i];


    // deep copy test : 
    std::cout << "============== Deep Copy test ==============" << std::endl;
    Dog a;
    a.SetDog("dog11111");
    Dog b;
    b = a;
    b.SetDog("dog2222222");

    a.GetDog();
    b.GetDog();





    return 0;
}