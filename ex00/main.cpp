#include "Zombie.hpp"

int main ()
{
    Zombie* z = newZombie("zaid");
    z->announce();
    delete z;

    randomChump("ali");
    return 0;
}