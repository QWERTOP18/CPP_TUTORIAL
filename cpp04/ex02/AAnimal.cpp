#include "AAnimal.hpp"

/* -------------------------------------------------------------------------- */
/*                          Constructors & Destructors                        */
/* -------------------------------------------------------------------------- */

AAnimal::AAnimal() : type("AAnimal")
{ std::cout << "AAnimal default constructor called" << std::endl; }

AAnimal::AAnimal(std::string type) : type(type)
{ std::cout << "AAnimal type constructor called" << std::endl; }

AAnimal::AAnimal(const AAnimal &AAnimal) : type(AAnimal.type)
{ std::cout << "AAnimal copy constructor called" << std::endl; }

AAnimal::~AAnimal()
{ std::cout << "AAnimal destructor called" << std::endl; }

AAnimal &AAnimal::operator=(const AAnimal &AAnimal)
{
    std::cout << "AAnimal assignation operator called" << std::endl;
    if (this == &AAnimal)
        return *this;
    this->type = AAnimal.type;
    return *this;
}

/* -------------------------------------------------------------------------- */
/*                              Setters & Getters                             */
/* -------------------------------------------------------------------------- */

std::string AAnimal::getType() const
{ return this->type; }

/* -------------------------------------------------------------------------- */
/*                             Members functions                              */
/* -------------------------------------------------------------------------- */

// void AAnimal::makeSound() const
// { std::cout << "AAnimal sound" << std::endl; }