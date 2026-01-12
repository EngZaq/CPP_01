#include "HumanA.hpp"
#include <iostream>
#include <string>


HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon){}


void HumanA::attack(void) const
{
    std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}

HumanA::~HumanA() {}
