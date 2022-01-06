#ifndef _WRONG_HPP
#define _WRONG_HPP
#include <iostream>

class WrongAnimal
{
protected:
    std::string _type;
public:
    WrongAnimal();
    WrongAnimal(const WrongAnimal& wrong);
    WrongAnimal& operator = (const WrongAnimal& wrong);
    ~WrongAnimal();
    void makeSound() const;
    std::string getType() const;
};

#endif