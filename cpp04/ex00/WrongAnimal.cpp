#include "WrongAnimal.hpp"

/* -------------------------------------------------------------------------- */
/*                                 Constructors                               */
/* -------------------------------------------------------------------- :( -- */

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{ std::cout << "WrongAnimal default constructor called" << std::endl; }

WrongAnimal::WrongAnimal(std::string type) : type(type)
{ std::cout << "WrongAnimal type constructor called" << std::endl; }

WrongAnimal::WrongAnimal(const WrongAnimal &WrongAnimal) : type(WrongAnimal.type)
{ std::cout << "WrongAnimal copy constructor called" << std::endl; }

WrongAnimal::~WrongAnimal()
{ std::cout << "WrongAnimal destructor called" << std::endl; }

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &WrongAnimal)
{
    std::cout << "WrongAnimal assignation operator called" << std::endl;
    if (this == &WrongAnimal)
        return *this;
    this->type = WrongAnimal.type;
    return *this;
}

/* -------------------------------------------------------------------------- */
/*                              Setters & Getters                             */
/* -------------------------------------------------------------------------- */

std::string WrongAnimal::getType() const
{ return this->type; }

/* -------------------------------------------------------------------------- */
/*                             Members functions                              */
/* -------------------------------------------------------------------------- */

void WrongAnimal::makeSound() const
{ std::cout << "WrongAnimal sound" << std::endl; }