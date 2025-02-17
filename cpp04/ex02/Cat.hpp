#ifndef CAT_HPP
#define CAT_HPP
#include "AAnimal.hpp"
#include "Brain.hpp"

#include <iostream>
#include <string>

/* -------------------------------------------------------------------------- */
/*                                   CLASS :)                                 */
/* -------------------------------------------------------------------------- */

class Cat : public AAnimal
{
    private:

        /* ------ Members --------------------------------------------------- */
        Brain* _brain;
        /* ------------------------------------------------------------------ */

    public:
        /* ------ Constructors & Destructors -------------------------------- */

        Cat();
        Cat(std::string type);
        Cat(const Cat &cat);
        ~Cat();

        Cat &operator=(const Cat &cat);

        /* ------------------------------------------------------------------ */

        /* ----- Setters & Getters ------------------------------------------ */

        /* ------------------------------------------------------------------ */
        

        /* ------ Members functions ------------------------------------------*/

        void makeSound() const;

        /* ------------------------------------------------------------------ */

};


/* -------------------------------------------------------------------------- */
/*                              External functions                            */
/* -------------------------------------------------------------------------- */

#endif /* CAT_HPP */