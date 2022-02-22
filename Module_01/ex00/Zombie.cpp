#include "Zombie.hpp"

Zombie::Zombie (){
    std::cout << "default Constructor Called" << std::endl;
}

Zombie::Zombie (std::string name){
    std::cout << "Constructor Called" << std::endl;
    _name = name;
}

Zombie::~Zombie (){
    std::cout << "destructor called : " << _name << std::endl;
}

void Zombie::announce(void){
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}