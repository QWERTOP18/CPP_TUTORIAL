#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>
#include <string>
#include <cmath>



/* -------------------------------------------------------------------------- */
/*                                   CLASS :)                                 */
/* -------------------------------------------------------------------------- */

class ClapTrap
{
    protected:
        /* ------ Members --------------------------------------------------- */
        std::string _name;
        std::string _type;
        int _hitPoints;
        int _energyPoints;
        int _attackDamage;
        /* ------------------------------------------------------------------ */

    public:
        /* ------ Constructors & Destructors -------------------------------- */
        ClapTrap();
        ClapTrap(const std::string &name);
        ClapTrap(const ClapTrap &src);
        ~ClapTrap();
        ClapTrap &operator=(const ClapTrap &src);
        /* ------------------------------------------------------------------ */

        /* ----- Setters & Getters ------------------------------------------ */

        /* ------------------------------------------------------------------ */
        

        /* ------ Members functions ------------------------------------------*/
        bool isAlive() const;
        bool isTired() const;
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        /* ------------------------------------------------------------------ */

};


/* -------------------------------------------------------------------------- */
/*                              External functions                            */
/* -------------------------------------------------------------------------- */



# define RESET "\033[0m"
# define RED "\033[31m"
# define GREEN "\033[32m"
# define YELLOW "\033[33m"
# define BLUE "\033[34m"
# define MAGENTA "\033[35m"
# define CYAN "\033[36m"
# define WHITE "\033[37m"

# define BG_RED "\033[41m"
# define BG_GREEN "\033[42m"
# define BG_YELLOW "\033[43m"
# define BG_BLUE "\033[44m"
# define BG_MAGENTA "\033[45m"
# define BG_CYAN "\033[46m"
# define BG_WHITE "\033[47m"

# define BOLD "\033[1m"
# define UNDERLINE "\033[4m"
# define BLINK "\033[5m"
# define REVERSED "\033[7m"
# define HIDDEN "\033[8m"

#endif /* CLAPTRAP_H */