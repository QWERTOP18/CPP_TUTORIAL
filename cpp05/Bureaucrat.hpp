#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <cmath>

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
        Bureaucrat(std::string, int grade);
        ~Bureaucrat();
        Bureaucrat(const Bureaucrat &src);
        Bureaucrat &operator=(const Bureaucrat &src);
        /* ---------------------------------------------------------------^^! */

        /* ----- Setters & Getters ------------------------------------------ */
        const std::string &getName() const;
        int getGrade() const;
        /* ----------------------------------------------------------------:D */
        

        /* ------ Members functions ------------------------------------------*/

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



#endif /* BUREAUCRAT_HPP */