#include "Zombie.hpp"

Zombie* newZombie( std::string name );
void randomChump( std::string name );

int main()
{
    randomChump("MED");
    Zombie *zombie = newZombie("youssef");
    zombie->announce();
    delete zombie;
}