#include "Fixed.hpp"


Fixed::Fixed () :  _fixedValue(0)
{
    std::cout << "Default constructor called" << std::endl;
}
Fixed::~Fixed ()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed (const Fixed& fixed) : _fixedValue(fixed._fixedValue)
{
    std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed (const int a)
{
    _fixedValue = (a << _fracBits);
}

Fixed::Fixed (const float f)
{
    _fixedValue = f * (1 << _fracBits);
}





Fixed& Fixed::operator = (const Fixed& fixed)
{
    _fixedValue = fixed._fixedValue;
    std::cout << "Assignation operator called" << std::endl;
    return (*this);

}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (_fixedValue);
}

void Fixed::setRawBits( int const raw )
{
    std::cout << "setRawBits member function called" << std::endl;
    _fixedValue = raw;
}

int Fixed::toInt( void ) const
{
    return (_fixedValue >> _fracBits);
}