#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed()
{
	std::cout << "Default constructor called\n";
	bits = 0;
}

Fixed::Fixed(const Fixed& obj)
{
	std::cout << "Copy constructor called\n";
	bits = obj.bits;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

Fixed&	Fixed::operator=(const Fixed& obj)
{
	std::cout << "Assignation operator called\n";
	bits = obj.bits;
	return (*this);
}

int		Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called\n";
	return (bits);
}

void	Fixed::setRawBits(const int raw)
{
	std::cout << "setRawBits member function called\n";
	bits = raw;
}
