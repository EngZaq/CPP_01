#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    if(N <= 0 )
        return NULL;
    Zombie *zaids = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        zaids[i] = Zombie(name);
    }
    return zaids;
}