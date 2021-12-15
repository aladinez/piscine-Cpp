#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie (){
    std::cout << "default Constructor Called" << std::endl;
}

Zombie::Zombie (std::string name){
    std::cout << "Parameterized Constructor Called" << std::endl;
    _name = name;
}

Zombie::~Zombie (){
    std::cout << "destroctor called : " << _name << std::endl;
}

void Zombie::announce(void){
    std::cout << _name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
