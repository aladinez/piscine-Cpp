#ifndef _CHARACTER_HPP
#define _CHARACTER_HPP
#include "ICharacter.hpp"


class Character : public ICharacter
{
private:
    std::string _name;
    AMateria* slot[4];
    AMateria** address;
    int _Scount;
    int _Acount;
    int _Asize;


public:
    Character(std::string);

    std::string const & getName() const;
    void equip(AMateria* m);
    void unequip(int idx);
    void save_address(int idx);
    void use(int idx, ICharacter& target);
    ~Character();
};



#endif