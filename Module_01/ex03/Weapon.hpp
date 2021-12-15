#ifndef _WEAPON_
#define _WEAPON_

#include <string>


class Weapon {
    private : 
        std::string type;
    
    public : 
        Weapon (std::string);
        const std::string& getType() const;
        void    setType(std::string);
};

#endif