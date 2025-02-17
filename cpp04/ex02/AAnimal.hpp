#ifndef AANIMAL_HPP
#define AANIMAL_HPP


#include <iostream>
#include <string>

/* -------------------------------------------------------------------------- */
/*                                   CLASS :)                                 */
/* -------------------------------------------------------------------------- */

class AAnimal
{
    protected:
        /* ------ Members --------------------------------------------------- */

        std::string type;
     
        /* ------------------------------------------------------------------ */

    public:
        /* ------ Constructors & Destructors -------------------------------- */

        AAnimal();
        AAnimal(std::string type);
        AAnimal(const AAnimal &AAnimal);
        virtual ~AAnimal();

        AAnimal &operator=(const AAnimal &AAnimal);

        /* ------------------------------------------------------------------ */

        /* ----- Setters & Getters ------------------------------------------ */

        std::string getType() const;

        /* ------------------------------------------------------------------ */
        

        /* ------ Members functions ------------------------------------------*/

        virtual void makeSound() const = 0;

        /* ------------------------------------------------------------------ */

};


/* -------------------------------------------------------------------------- */
/*                              External functions                            */
/* -------------------------------------------------------------------------- */

#endif /* AAnimal_HPP */