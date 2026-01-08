#include "Zombie.hpp"
#include <iostream>
int main ()
{
    // Zombie* z = new Zombie("zaid");
    // z->announce();
    
    // randomChump("ali");
    // delete z;

    int N = 555;
    Zombie* horde = zombieHorde(N, "horde_zombie");
    for (int i = 0; i < N; i++)
    {
        horde[i].announce();
        std::cout << i << std::endl;
    }
    delete [] horde;
    return 0;
}