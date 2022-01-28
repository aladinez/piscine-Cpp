// Links : https://www.learncpp.com/cpp-tutorial/virtual-functions/

#ifndef _ANIMAL_HPP
#define _ANIMAL_HPP
#include <iostream>

class Animal
{
protected:
    std::string _type;
public:
    Animal(std::string type="");
    Animal(const Animal& animal);
    Animal& operator = (const Animal& animal);
    virtual ~Animal();
    virtual void makeSound() const = 0;
    std::string getType() const;
};

#endif