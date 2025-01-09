#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>


/* -------------------------------------------------------------------------- */
/*                                   CLASS :)                                 */
/* -------------------------------------------------------------------------- */
class Fixed
{
    private:

        /* ------ Members --------------------------------------------------- */
        int					fixedPointValue;
		static const int	fractionalBits = 8;
        /* ------------------------------------------------------------------ */

    public:

        /* ------ Constructors & Destructors -------------------------------- */
        Fixed();
        ~Fixed();
        Fixed( const int value ) ;
        Fixed( const float value ) ;
        Fixed( const Fixed &src ) ;
        
        Fixed&	operator=( Fixed const &src );
        /* ------------------------------------------------------------------ */

        /* ----- Setters & Getters ------------------------------------------ */
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        /* ------------------------------------------------------------------ */

        /* ------ Members functions ------------------------------------------*/
        float toFloat( void ) const;
        int toInt( void ) const;
        /* ------------------------------------------------------------------ */

};


/* -------------------------------------------------------------------------- */
/*                              External functions                            */
/* -------------------------------------------------------------------------- */

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif