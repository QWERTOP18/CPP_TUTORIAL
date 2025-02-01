#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP


#include <iostream>
#include <string>

/* -------------------------------------------------------------------------- */
/*                                   CLASS :)                                 */
/* -------------------------------------------------------------------------- */

class WrongAnimal
{
    protected:
        /* ------ Members --------------------------------------------------- */

        std::string _type;
     
        /* ------------------------------------------------------------------ */

    public:
        /* ------ Constructors & Destructors -------------------------------- */

        WrongAnimal();
        WrongAnimal(std::string type);
        WrongAnimal(const WrongAnimal &Wronganimal);
        virtual ~WrongAnimal();

        WrongAnimal &operator=(const WrongAnimal &animal);

        /* ------------------------------------------------------------------ */

        /* ----- Setters & Getters ------------------------------------------ */

        std::string getType() const;

        /* ------------------------------------------------------------------ */
        

        /* ------ Members functions ------------------------------------------*/

        virtual void makeSound() const;

        /* ------------------------------------------------------------------ */

};


/* -------------------------------------------------------------------------- */
/*                              External functions                            */
/* -------------------------------------------------------------------------- */

#endif /* WRONGANIMAL_HPP */