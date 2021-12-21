#include "Fixed.hpp"


Fixed::Fixed () :  _fixedValue(0)
{
    std::cout << "Constructor called" << std::endl;
}
Fixed::~Fixed ()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed (const Fixed& fixed) : _fixedValue(fixed._fixedValue)
{
     std::cout << "Copy constructor called" << std::endl;
}

int Fixed::getRawBits( void ) const
{
    return (_fixedValue);
}

void Fixed::setRawBits( int const raw )
{
    _fixedValue = raw;
}