#ifndef _WRONG_CAT_HPP
#define _WRONG_CAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
        WrongCat();
        WrongCat(const WrongCat& cat);
        WrongCat& operator = (const WrongCat& cat);
        ~WrongCat();
        void makeSound() const;
};

#endif