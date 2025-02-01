#include "Animal.hpp"

/* -------------------------------------------------------------------------- */
/*                                 Constructors                               */
/* -------------------------------------------------------------------- :( -- */

Animal::Animal() : _type("Animal")
{ std::cout << "Animal default constructor called" << std::endl; }

Animal::Animal(std::string type) : _type(type)
{ std::cout << "Animal type constructor called" << std::endl; }

Animal::Animal(const Animal &animal) : _type(animal._type)
{ std::cout << "Animal copy constructor called" << std::endl; }

Animal::~Animal()
{ std::cout << "Animal destructor called" << std::endl; }

Animal &Animal::operator=(const Animal &animal)
{
    std::cout << "Animal assignation operator called" << std::endl;
    if (this == &animal)
        return *this;
    this->_type = animal._type;
    return *this;
}

/* -------------------------------------------------------------------------- */
/*                              Setters & Getters                             */
/* -------------------------------------------------------------------------- */

std::string Animal::getType() const
{ return this->_type; }

/* -------------------------------------------------------------------------- */
/*                             Members functions                              */
/* -------------------------------------------------------------------------- */

void Animal::makeSound() const
{ std::cout << "Animal sound" << std::endl; }