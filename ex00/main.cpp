#include "Zombie.hpp"

int main ()
{
    Zombie* z = new Zombie("zaid");
    z->announce();
    delete z;

    randomChump("ali");
    return 0;
}