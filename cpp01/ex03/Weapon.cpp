#include "Weapon.hpp"



Weapon::Weapon(const std::string &type) : type(type) {}
Weapon::~Weapon() {}

void Weapon::setType(const std::string &newType){this->type = newType;}
std::string Weapon::getType() const{return this->type;}
