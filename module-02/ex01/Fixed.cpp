#include "Fixed.hpp"

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

Fixed::Fixed(const int num)
{
	std::cout << "Int constructor called\n";
	bits = num;
	bits *= shift_factor;
}

Fixed::Fixed(const float num)
{
	std::cout << "Float constructor called\n";
	int		int_part = (int)num;
	float	frac_partf = num - (float)int_part;
	frac_partf *= shift_factor;
	int		frac_part = (int)roundf(frac_partf);

	bits = int_part;
	bits *= shift_factor;
	bits += frac_part;
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

float	Fixed::toFloat(void) const
{
	float	int_part = float(bits / shift_factor);
	float	frac_part = float(bits % shift_factor);

	frac_part /= shift_factor;
	return (int_part + frac_part);
}

int		Fixed::toInt(void) const
{
	return (bits / shift_factor);
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed_num)
{
	return (out << fixed_num.toFloat());
}
