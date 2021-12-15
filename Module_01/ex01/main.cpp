#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int main()
{
    Zombie *zombie = zombieHorde(3, "youssef");
    // zombie[0].announce();
    // zombie[1].announce();
    delete [] zombie ;
}