#include <string>
#include <iostream>

class Zombie {
    private  : 
        std::string _name;

    public :
        Zombie (std::string name);
        Zombie ();
        ~Zombie ();
        // Zombie& operator = (const Zombie& z)
        // {
        //     _name = z._name;
        //     std::cout << "operator = " << std::endl;
        //     return (*this);
        // }
        void announce(void);
};