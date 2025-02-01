#include "Bureaucrat.hpp"

/* -------------------------------------------------------------------------- */
/*                                 Constructors                               */
/* -------------------------------------------------------------------- :( -- */

Bureaucrat::Bureaucrat()
    : _name("NONAME"),_grade(150)
{
    std::cout << "NONAME" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) 
    : _name(name)
{
    if (grade < 1)
        throw GradeTooHighException();
    if (grade > 150)
        throw GradeTooLowException();
    _grade = grade;
    std::cout << name << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) : _name(src._name), _grade(src._grade) 
{

}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &src)
{
    if (this == &src)
        return *this;
    // _name = src._name;
    _grade = src._grade;
    return *this;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << _name << " was graduated!!!" << std::endl;
}

/* -------------------------------------------------------------------------- */
/*                              Setters & Getters                             */
/* -------------------------------------------------------------------------- */

const std::string &Bureaucrat::getName() const {
    return _name;
}

int Bureaucrat::getGrade() const {
    return _grade;
}

/* -------------------------------------------------------------------------- */
/*                             Members functions                              */
/* -------------------------------------------------------------------------- */

void Bureaucrat::incrementGrade()
{
    if (_grade <= 1)
        throw GradeTooHighException();
    _grade--;

}
void Bureaucrat::decrementGrade()
{
    if (_grade >= 150)
        throw GradeTooLowException();
    _grade++;
}



/* -------------------------------------------------------------------------- */
/*                             External functions                             */
/* -------------------------------------------------------------------------- */

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade too high!!";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade too low!!";
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat)
{
    os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
    return os;
}