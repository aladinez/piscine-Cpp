#ifndef _WEAPON_HPP
#define _WEAPON_HPP

#include <string>


class Weapon {
    private : 
        std::string _type;
    
    public : 
        Weapon (std::string);
        const std::string& getType() const;
        void    setType(std::string);
};

#endif