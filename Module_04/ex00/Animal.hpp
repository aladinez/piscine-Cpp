#ifndef _ANIMAL_HPP
#define _ANIMAL_HPP
#include <iostream>

class Animal
{
protected:
    std::string _type;
public:
    Animal();
    Animal(const Animal& animal);
    Animal& operator = (const Animal& animal);
    ~Animal();
    virtual void makeSound() const;
    std::string getType() const;
};



#endif