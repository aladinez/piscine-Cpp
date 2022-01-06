#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
    
    Brain a;
    a._ideas[0] = "00000000000000000000000";
    a._ideas[1] = "11111111111111111111111111111111111111";
    Brain b;
    b = a;
    // To ASK : b(a) ==> who's gonna be called, copy constructor or ass operator ?
    std::cout << b._ideas[0] + b._ideas[1] << std::endl;

    Dog j;
    j.SetDog("dog11111");
    Dog i(j);
    // i = j;
    i.SetDog("dog2222");
    j.GetDog();
    i.GetDog();
    // delete j;//should not create a leak
    // delete i;

    return 0;
}