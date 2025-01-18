#include "WrongCat.hpp"

/* -------------------------------------------------------------------------- */
/*                                 Constructors                               */
/* -------------------------------------------------------------------- :( -- */

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{ std::cout << "WrongCat default constructor called" << std::endl; }

WrongCat::WrongCat(std::string type) : WrongAnimal(type)
{ std::cout << "WrongCat type constructor called" << std::endl; }

WrongCat::WrongCat(const WrongCat &WrongCat) : WrongAnimal(WrongCat)
{ std::cout << "WrongCat copy constructor called" << std::endl; }

WrongCat::~WrongCat()
{ std::cout << "WrongCat destructor called" << std::endl; }

WrongCat &WrongCat::operator=(const WrongCat &WrongCat)
{
    std::cout << "WrongCat assignation operator called" << std::endl;
    if (this == &WrongCat)
        return *this;
    WrongAnimal::operator=(WrongCat);
    return *this;
}

/* -------------------------------------------------------------------------- */
/*                              Setters & Getters                             */
/* -------------------------------------------------------------------------- */


/* -------------------------------------------------------------------------- */
/*                             Members functions                              */
/* -------------------------------------------------------------------------- */

void WrongCat::makeSound() const
{ std::cout << "Two Two One One ^^" << std::endl; }
