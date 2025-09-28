#include "Zombie.hpp"

int main ()
{
    Zombie* z = new Zombie("zaid");
    z->announce();
    delete z;

    randomChump("ali");

    int N = 5;
    Zombie* horde = zombieHorde(N, "horde_zombie");
    for (int i = 0; i < N; i++)
    {
        horde[i].announce();
    }
    delete [] horde;
    return 0;
}