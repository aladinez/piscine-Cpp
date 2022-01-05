#ifndef _DOG_HPP
#define _DOG_HPP

#include "Animal.hpp"
#include <iostream>


class Dog : public Animal
{
    public:
        Dog();
        Dog(const Dog&);
        Dog& operator = (const Dog&);
        ~Dog();
        void makeSound() const;
};


#endif