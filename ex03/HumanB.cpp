#include "HumanB.hpp"
#include <iostream>
#include <string>


HumanB::HumanB(std::string name) : name(name) , weapon(NULL) {}

void HumanB::attack(void) const
{
    if(weapon)
        std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
    else
        std::cout << this->name << " has no weapon to attack with!" << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}

HumanB::~HumanB() {}