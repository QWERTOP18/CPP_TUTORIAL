#include "WrongAnimal.hpp"

/* -------------------------------------------------------------------------- */
/*                                 Constructors                               */
/* -------------------------------------------------------------------- :( -- */

WrongAnimal::WrongAnimal() : _type("WrongAnimal")
{ std::cout << "WrongAnimal default constructor called" << std::endl; }

WrongAnimal::WrongAnimal(std::string type) : _type(type)
{ std::cout << "WrongAnimal type constructor called" << std::endl; }

WrongAnimal::WrongAnimal(const WrongAnimal &WrongAnimal) : _type(WrongAnimal._type)
{ std::cout << "WrongAnimal copy constructor called" << std::endl; }

WrongAnimal::~WrongAnimal()
{ std::cout << "WrongAnimal destructor called" << std::endl; }

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &WrongAnimal)
{
    std::cout << "WrongAnimal assignation operator called" << std::endl;
    if (this == &WrongAnimal)
        return *this;
    this->_type = WrongAnimal._type;
    return *this;
}

/* -------------------------------------------------------------------------- */
/*                              Setters & Getters                             */
/* -------------------------------------------------------------------------- */

std::string WrongAnimal::getType() const
{ return this->_type; }

/* -------------------------------------------------------------------------- */
/*                             Members functions                              */
/* -------------------------------------------------------------------------- */

void WrongAnimal::makeSound() const
{ std::cout << "WrongAnimal sound" << std::endl; }