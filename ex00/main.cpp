#include "Zombie.hpp"

int main ()
{
    Zombie* z = newZombie("zaid");
    z->announce();
    {
        randomChump("ali");
    }
    
    z->announce();
    delete z;
    return 0;
}