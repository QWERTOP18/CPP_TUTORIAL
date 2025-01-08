#include "HumanB.hpp"

HumanB::HumanB(const std::string &name) : name(name), weapon(NULL)  {}

HumanB::~HumanB() {}

void HumanB::setWeapon(Weapon &weapon) { this->weapon = &weapon;}

void HumanB::attack()
{
    if (weapon == NULL)
        std::cout << name << " is not being armed :("<< std::endl;
    else
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
    
}