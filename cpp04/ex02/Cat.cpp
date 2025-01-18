#include "Cat.hpp"

/* -------------------------------------------------------------------------- */
/*                                 Constructors                               */
/* -------------------------------------------------------------------- :( -- */

Cat::Cat() : AAnimal("Cat")
{ 
    _brain = new Brain();
    std::cout << "Cat default constructor called" << std::endl; 
}

Cat::Cat(std::string type) : AAnimal(type)
{ 
    _brain = new Brain();
    std::cout << "Cat type constructor called" << std::endl; 
}

Cat::Cat(const Cat &cat) : AAnimal(cat)
{ 
    _brain = new Brain();
    std::cout << "Cat copy constructor called" << std::endl; 
}

Cat::~Cat()
{ 
    delete _brain;
    std::cout << "Cat destructor called" << std::endl; 
}

Cat &Cat::operator=(const Cat &cat)
{
    std::cout << "Cat assignation operator called" << std::endl;
    if (this == &cat)
        return *this;
    AAnimal::operator=(cat);
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
