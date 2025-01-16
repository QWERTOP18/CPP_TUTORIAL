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
        
        bool operator>(const Fixed& other) const;
		bool operator<(const Fixed& other) const;
		bool operator>=(const Fixed& other) const;
		bool operator<=(const Fixed& other) const;
		bool operator==(const Fixed& other) const;
		bool operator!=(const Fixed& other) const;
		
		Fixed operator+(const Fixed& other) const;
		Fixed operator-(const Fixed& other) const;
		Fixed operator*(const Fixed& other) const;
		Fixed operator/(const Fixed& other) const;

		Fixed &operator++();
		Fixed operator++(int);
		Fixed &operator--();
		Fixed operator--(int);
        /* ------------------------------------------------------------------ */

        /* ----- Setters & Getters ------------------------------------------ */
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        /* ------------------------------------------------------------------ */

        /* ------ Members functions ------------------------------------------*/
        float toFloat( void ) const;
        int toInt( void ) const;
        static Fixed &min(Fixed &a, Fixed &b);
		static const Fixed &min(const Fixed &a, const Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);
		static const Fixed &max(const Fixed &a, const Fixed &b);
        /* ------------------------------------------------------------------ */

};


/* -------------------------------------------------------------------------- */
/*                              External functions                            */
/* -------------------------------------------------------------------------- */

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif