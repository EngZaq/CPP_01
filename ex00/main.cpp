#include "Zombie.hpp"

int main()
{
    std::cout << "=== Testing newZombie (heap allocation) ===" << std::endl;
    
    // Test 1: Normal heap zombie using newZombie
    Zombie* heapZombie = newZombie("HeapZombie");
    heapZombie->announce();
    delete heapZombie;
    
    std::cout << "\n=== Testing randomChump (stack allocation) ===" << std::endl;
    randomChump("StackZombie");    
    Zombie* z1 = newZombie("Alpha");
    Zombie* z2 = newZombie("Beta");
    Zombie* z3 = newZombie("Gamma");
    
    z1->announce();
    z2->announce();
    z3->announce();
    
    delete z1;
    delete z2;
    delete z3;
    
    std::cout << "\n=== End of main ===" << std::endl;
    return 0;
}