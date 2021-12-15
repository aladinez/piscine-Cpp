#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *z_ptr = new Zombie [N];

    for (int i = 0; i < N; i++)
    {
        z_ptr[i] = Zombie(name + (char)(48 + i));
        // TODO : give each object a name, - calling the parameterized constructor - or creating a setter in the class.
    }
    return (z_ptr);
}