#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int main()
{
    int N = 3;
    Zombie *zombie = zombieHorde(N, "youssef");
    
    for (int i = 0; i < N; i++)
    {
        zombie[i].announce();
    }
    delete [] zombie ;
    return 0;
}