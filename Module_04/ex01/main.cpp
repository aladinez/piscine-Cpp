#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
    Animal *anims[4];
    for (int i = 0; i < 2; i++)
        anims[i] = new Dog();
    for (int i = 2; i < 4; i++)
        anims[i] = new Cat();
    
    for (int i = 0; i < 4; i++)
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



    //-----------LEAKS------------//
    // const Animal* j = new Dog();
    // const Animal* i = new Cat();
    // delete j;//should not create a leak
    // delete i;

    // while (1)
    //     ;



    return 0;
}