#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    // Zombie z(name);
    Zombie *z_ptr = new Zombie[N];

    for (int i = 0; i < N, i++)
    {
        // TODO : give each object a name, - calling the parameterized constructor - or creating a setter in the class.
    }

    // z_ptr[0] = z;
    // z_ptr[1] = z;
    return (z_ptr);
}