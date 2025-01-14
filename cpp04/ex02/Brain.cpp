#include "Brain.hpp"

/* -------------------------------------------------------------------------- */
/*                          Constructors & Destructors                        */
/* -------------------------------------------------------------------------- */

Brain::Brain()
{ std::cout << "Brain default constructor called" << std::endl; }

Brain::Brain(const Brain &brain)
{
    std::cout << "Brain copy constructor called" << std::endl;
    for (int i = 0; i < 100; i++)
        this->ideas[i] = brain.ideas[i];
}
Brain::~Brain()
{ std::cout << "Brain destructor called" << std::endl; }

Brain &Brain::operator=(const Brain &brain)
{
    std::cout << "Brain assignation operator called" << std::endl;
    if (this == &brain)
        return *this;
    for (int i = 0; i < 100; i++)
        this->ideas[i] = brain.ideas[i];
    return *this;
}


/* -------------------------------------------------------------------------- */
/*                              Setters & Getters                             */
/* -------------------------------------------------------------------------- */


void Brain::setIdea(std::string idea, int index)
{ this->ideas[index] = idea; }
std::string Brain::getIdea(int index) const
{ return this->ideas[index]; }


/* -------------------------------------------------------------------------- */
/*                             Members functions                              */
/* -------------------------------------------------------------------------- */
