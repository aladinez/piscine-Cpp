#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int main()
{
    randomChump("MED");
    Zombie *zombie = Zombie("youssef");
    zombie[0].announce();
    zombie[1].announce();
    delete [] zombie ;
}