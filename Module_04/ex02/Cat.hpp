#ifndef _CAT_HPP
#define _CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain* _brain;
    public:
        Cat();
        Cat(const Cat& cat);
        Cat& operator = (const Cat& cat);
        ~Cat();
        void makeSound() const;
};

#endif