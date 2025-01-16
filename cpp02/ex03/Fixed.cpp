#include "Fixed.hpp"

/* -------------------------------------------------------------------------- */
/*                        Constructors & Destructors                          */
/* -------------------------------------------------------------------------- */
Fixed::Fixed() : fixedPointValue(0)
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
bool Fixed::operator>(const Fixed& other) const { return this->fixedPointValue > other.fixedPointValue; }
bool Fixed::operator<(const Fixed& other) const { return this->fixedPointValue < other.fixedPointValue; }
bool Fixed::operator>=(const Fixed& other) const { return this->fixedPointValue >= other.fixedPointValue; }
bool Fixed::operator<=(const Fixed& other) const { return this->fixedPointValue <= other.fixedPointValue; }
bool Fixed::operator==(const Fixed& other) const { return this->fixedPointValue == other.fixedPointValue; }
bool Fixed::operator!=(const Fixed& other) const { return this->fixedPointValue != other.fixedPointValue; }

Fixed Fixed::operator+(const Fixed& other) const { return Fixed(this->toFloat() + other.toFloat()); }
Fixed Fixed::operator-(const Fixed& other) const { return Fixed(this->toFloat() - other.toFloat()); }
Fixed Fixed::operator*(const Fixed& other) const { return Fixed(this->toFloat() * other.toFloat()); }
Fixed Fixed::operator/(const Fixed& other) const { return Fixed(this->toFloat() / other.toFloat()); }

Fixed &Fixed::operator++()
{
	++this->fixedPointValue;
	return *this;
}

/* post-increment needs copy instance! */
Fixed Fixed::operator++(int)
{
	Fixed tmp (*this);
    operator++();
    return tmp;
}
Fixed &Fixed::operator--()
{
	--this->fixedPointValue;
	return *this;
}
Fixed Fixed::operator--(int)
{
	Fixed tmp (*this);
    operator--();
    return tmp;
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
/*                               Static functions                             */
/* -------------------------------------------------------------------------- */
Fixed& Fixed::min(Fixed& a, Fixed& b) { return (a < b) ? a : b; }

const Fixed& Fixed::min(const Fixed& a, const Fixed& b) { return (a < b) ? a : b; }

Fixed& Fixed::max(Fixed& a, Fixed& b) { return (a > b) ? a : b; }

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) { return (a > b) ? a : b; }


/* -------------------------------------------------------------------------- */
/*                              External functions                            */
/* -------------------------------------------------------------------------- */

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return out;
}