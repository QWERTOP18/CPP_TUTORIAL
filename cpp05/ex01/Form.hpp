#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>
#include <string>

/* -------------------------------------------------------------------------- */
/*                                   CLASS :)                                 */
/* -------------------------------------------------------------------------- */

class Form
{
    private:

    /* ------ Members --------------------------------------------------- */
        const std::string _name;
        bool _isSigned;
        const int _gradeToSign;
        const int _gradeToExecute;
    /* ------------------------------------------------------------------ */

    public:
    /* ------ Constructors & Destructors -------------------------------- */
        Form();
        Form(const std::string &name, int gradeToSign, int gradeToExecute);
        Form(const Form &src);
        ~Form();
        Form &operator=(const Form &src);
    /* ---------------------------------------------------------------^^! */

    /* ----- Setters & Getters ------------------------------------------ */
        const std::string &getName() const;
        bool getIsSigned() const;
        int getGradeToSign() const;
        int getGradeToExecute() const;
        
    /* ----------------------------------------------------------------:D */
        

    /* ------ Members functions ------------------------------------------*/
        void beSigned(const Bureaucrat &bureaucrat);
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

std::ostream &operator<<(std::ostream &os, const Form &form);

#endif /* FORM_HPP */