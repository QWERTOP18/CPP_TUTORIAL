#include "Cat.hpp"

/* -------------------------------------------------------------------------- */
/*                                 Constructors                               */
/* -------------------------------------------------------------------- :( -- */

Cat::Cat() : Animal("Cat")
{ std::cout << "Cat default constructor called" << std::endl; }

Cat::Cat(std::string type) : Animal(type)
{ std::cout << "Cat type constructor called" << std::endl; }

Cat::Cat(const Cat &cat) : Animal(cat)
{ std::cout << "Cat copy constructor called" << std::endl; }

Cat::~Cat()
{ std::cout << "Cat destructor called" << std::endl; }

Cat &Cat::operator=(const Cat &cat)
{
    std::cout << "Cat assignation operator called" << std::endl;
    if (this == &cat)
        return *this;
    Animal::operator=(cat);
    return *this;
}

/* -------------------------------------------------------------------------- */
/*                              Setters & Getters                             */
/* -------------------------------------------------------------------------- */


/* -------------------------------------------------------------------------- */
/*                             Members functions                              */
/* -------------------------------------------------------------------------- */

void Cat::makeSound() const
{ std::cout << "Meow Meow ^^" << std::endl; }
