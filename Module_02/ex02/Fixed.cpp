#include "Fixed.hpp"


Fixed::Fixed () :  _fixedValue(0)
{
    std::cout << "Default constructor called" << std::endl;
}
Fixed::~Fixed ()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed (const Fixed& fixed)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
}

Fixed::Fixed (const int a)
{
    std::cout << "Int constructor called" << std::endl;
    _fixedValue = (a << _fracBits);

}

Fixed::Fixed (const float f)
{
    std::cout << "Float constructor called" << std::endl;
    _fixedValue = f * (1 << _fracBits);

}


Fixed& Fixed::operator = (const Fixed& fixed)
{
    std::cout << "Assignation operator called" << std::endl;
    //do nothing if r value is the same object.
    if (this != &fixed)
    {
        _fixedValue = fixed._fixedValue;
    }
    return (*this);

}

Fixed Fixed::operator + (const Fixed& fixed)
{
    Fixed fx;
    fx.setRawBits(this->_fixedValue + fixed._fixedValue);
    return (fx);
}

Fixed Fixed::operator - (const Fixed& fixed)
{
    Fixed fx;
    fx.setRawBits(_fixedValue - fixed._fixedValue);
    return (fx);
}

Fixed Fixed::operator * (const Fixed& fixed)
{
    Fixed fx;
    fx.setRawBits(this->_fixedValue * fixed._fixedValue);
    std::cout << this->_fixedValue  << " == " << fx.getRawBits() << std::endl;
    return (fx);
}

Fixed Fixed::operator / (const Fixed& fixed)
{
    Fixed fx;
    fx.setRawBits(_fixedValue / fixed._fixedValue);
    return (fx);
}

std::ostream& operator << (std::ostream& os, const Fixed& fixed)
{
    os << fixed.toFloat();
    return os;
}


bool Fixed::operator > (const Fixed& fixed) const
{
    if (this->_fixedValue > fixed._fixedValue)
        return (true);
    return (false);
}

bool Fixed::operator < (const Fixed& fixed) const
{
    if (this->_fixedValue < fixed._fixedValue)
        return (true);
    return (false);
}

bool Fixed::operator >= (const Fixed& fixed) const
{
    if (this->_fixedValue >= fixed._fixedValue)
        return (true);
    return (false);
}

bool Fixed::operator <= (const Fixed& fixed) const
{
    if (this->_fixedValue <= fixed._fixedValue)
        return (true);
    return (false);
}

bool Fixed::operator == (const Fixed& fixed) const
{
    if (this->_fixedValue == fixed._fixedValue)
        return (true);
    return (false);
}

bool Fixed::operator != (const Fixed& fixed) const
{
    if (this->_fixedValue != fixed._fixedValue)
        return (true);
    return (false);
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

float Fixed::toFloat( void ) const
{
    return ((float)_fixedValue / (1 << _fracBits));
}