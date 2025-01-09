#include "Fixed.hpp"

/* -------------------------------------------------------------------------- */
/*                        Constructors & Destructors                          */
/* -------------------------------------------------------------------------- */
Fixed::Fixed()  : fixedPointValue(0)
{ std::cout << "Default constructor called" << std::endl; }
Fixed::Fixed( const int value ) : fixedPointValue( value << fractionalBits ) 
{ std::cout << "Int constructor called" << std::endl; }
Fixed::Fixed( const float value ) : fixedPointValue( roundf(value * (1 << fractionalBits)))
{ std::cout << "Float constructor called" << std::endl; }
Fixed::Fixed( const Fixed &src )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}
Fixed::~Fixed() 
{ std::cout << "Destructor called" << std::endl; }

Fixed&	Fixed::operator=( Fixed const &src ) 
{
	std::cout << "Copy assignement operator called" << std::endl;
	this->fixedPointValue = src.getRawBits();
	return *this;
}

/* -------------------------------------------------------------------------- */
/*                              Setters & Getters                             */
/* -------------------------------------------------------------------------- */

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
	return this->fixedPointValue;
}
void Fixed::setRawBits( int const raw )
{
    std::cout << "setRawBits member function called" << std::endl;
	this->fixedPointValue = raw;
}

/* -------------------------------------------------------------------------- */
/*                              Members functions                             */
/* -------------------------------------------------------------------------- */

float Fixed::toFloat( void ) const
{
	return (float)this->fixedPointValue / (1 << fractionalBits);
}
int Fixed::toInt( void ) const
{
	return this->fixedPointValue >> fractionalBits;
}



/* -------------------------------------------------------------------------- */
/*                              External functions                            */
/* -------------------------------------------------------------------------- */

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return out;
}