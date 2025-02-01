#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>

/* -------------------------------------------------------------------------- */
/*                                   CLASS :)                                 */
/* -------------------------------------------------------------------------- */

class Bureaucrat
{
    private:

    /* ------ Members --------------------------------------------------- */
        const std::string _name;
        int _grade;
    /* ------------------------------------------------------------------ */

    public:
    /* ------ Constructors & Destructors -------------------------------- */
        Bureaucrat();
        Bureaucrat(const std::string &name, int grade);
        ~Bureaucrat();
        Bureaucrat(const Bureaucrat &src);
        Bureaucrat &operator=(const Bureaucrat &src);
    /* ---------------------------------------------------------------^^! */

    /* ----- Setters & Getters ------------------------------------------ */
        const std::string &getName() const;
        int getGrade() const;
    /* ----------------------------------------------------------------:D */
        

    /* ------ Members functions ------------------------------------------*/
        void incrementGrade();
        void decrementGrade();
    /* ------------------------------------------------------------lucky? */

        class GradeTooHighException : public std::exception
        {
        public:
            const char *what() const throw();
        };

        class GradeTooLowException : public std::exception
        {
        public:
            const char *what() const throw();
        };

};


/* -------------------------------------------------------------------------- */
/*                              External functions                            */
/* -------------------------------------------------------------------------- */

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat);


#endif /* BUREAUCRAT_HPP */