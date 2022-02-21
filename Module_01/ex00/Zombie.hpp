#ifndef _ZOMBIE_HPP
#define _ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie {
    private  : 
        std::string _name;

    public :
        Zombie (std::string name);
        ~Zombie ();
        void announce(void);
};

#endif