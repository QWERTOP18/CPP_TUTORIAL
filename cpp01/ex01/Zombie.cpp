#include "Zombie.hpp"

Zombie::Zombie(){}

Zombie::~Zombie()
{
    std::cout << "R.I.P " << this->name << " again:<" << std::endl;
}

void Zombie::setName(const std::string name)
{
    this->name = name;
}

void Zombie::announce() const 
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
