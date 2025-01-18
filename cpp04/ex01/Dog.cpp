#include "Dog.hpp"

/* -------------------------------------------------------------------------- */
/*                                 Constructors                               */
/* -------------------------------------------------------------------- :( -- */

Dog::Dog() : Animal("Dog")
{ 
    _brain = new Brain();    
    std::cout << "Dog default constructor called" << std::endl; 
}

Dog::Dog(std::string type) : Animal(type)
{ 
    _brain = new Brain();    
    std::cout << "Dog type constructor called" << std::endl; 
}

Dog::Dog(const Dog &dog) : Animal(dog)
{ 
    _brain = new Brain();    
    std::cout << "Dog copy constructor called" << std::endl; 
}

Dog::~Dog()
{ 
    std::cout << "Dog destructor called" << std::endl; 
    delete _brain;    
}

Dog &Dog::operator=(const Dog &dog)
{
    std::cout << "Dog assignation operator called" << std::endl;
    if (this == &dog)
        return *this;
    Animal::operator=(dog);
    return *this;
}


/* -------------------------------------------------------------------------- */
/*                              Setters & Getters                             */
/* -------------------------------------------------------------------------- */


/* -------------------------------------------------------------------------- */
/*                             Members functions                              */
/* -------------------------------------------------------------------------- */

void Dog::makeSound() const
{ std::cout << "Woof Woof wang wang !!!" << std::endl; }
