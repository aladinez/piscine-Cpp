#ifndef _DOG_HPP
#define _DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>


class Dog : public Animal
{
    private:
        Brain* _brain;
    public:
        Dog();
        Dog(const Dog&);
        Dog& operator = (const Dog&);
        ~Dog();
        void makeSound() const;
        void GetDog() const;
        void SetDog(std::string);
};


#endif