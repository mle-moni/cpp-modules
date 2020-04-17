#include "Fixed.hpp"

Fixed::Fixed()
{
	bits = 0;
}

Fixed::Fixed(const Fixed& obj)
{
	bits = obj.bits;
}

Fixed::Fixed(const int num)
{
	bits = num;
	bits *= shift_factor;
}

Fixed::Fixed(const float num)
{
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
}

Fixed&	Fixed::operator=(const Fixed& obj)
{
	bits = obj.bits;
	return (*this);
}

/* comparison operators */

bool	Fixed::operator>(const Fixed& obj) const
{
	return (bits > obj.bits);
}

bool	Fixed::operator<(const Fixed& obj) const
{
	return (bits < obj.bits);
}

bool	Fixed::operator==(const Fixed& obj) const
{
	return (bits == obj.bits);
}

bool	Fixed::operator>=(const Fixed& obj) const
{
	return (bits >= obj.bits);
}

bool	Fixed::operator<=(const Fixed& obj) const
{
	return (bits <= obj.bits);
}

bool	Fixed::operator!=(const Fixed& obj) const
{
	return (bits != obj.bits);
}

/* arithmetic operators */

Fixed	Fixed::operator+(const Fixed& obj) const
{
	Fixed	ret;

	ret.bits = (bits + obj.bits);
	return (ret);
}

Fixed	Fixed::operator+(int	num) const
{
	Fixed	obj(num);

	return (*this + obj);
}

Fixed	Fixed::operator+(float	num) const
{
	Fixed	obj(num);

	return (*this + obj);
}

Fixed	Fixed::operator-(const Fixed& obj) const
{
	Fixed	ret;

	ret.bits = (bits - obj.bits);
	return (ret);
}

Fixed	Fixed::operator-(int	num) const
{
	Fixed	obj(num);

	return (*this - obj);
}

Fixed	Fixed::operator-(float	num) const
{
	Fixed	obj(num);

	return (*this - obj);
}

Fixed	Fixed::operator*(const Fixed& obj) const
{
	float	val = obj.toFloat();

	return (*this * val);
}

Fixed	Fixed::operator*(int	num) const
{
	Fixed	ret(num);

	ret.bits = bits * num;
	return (ret);
}

Fixed	Fixed::operator*(float	num) const
{
	float	val = this->toFloat();

	val *= num;
	return (Fixed(val));
}

Fixed	Fixed::operator/(const Fixed& obj) const
{
	float	val = obj.toFloat();

	return (*this / val);
}

Fixed	Fixed::operator/(int	num) const
{
	Fixed	ret(num);

	ret.bits = bits / num;
	return (ret);
}

Fixed	Fixed::operator/(float	num) const
{
	float	val = this->toFloat();

	val /= num;
	return (Fixed(val));
}

/* increment and decrement */

Fixed&	Fixed::operator++(void)
{
	bits++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed copy(*this);

	Fixed::operator++();
	return (copy);
}

Fixed&	Fixed::operator--(void)
{
	bits--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed copy(*this);

	Fixed::operator--();
	return (copy);
}

int		Fixed::getRawBits() const
{
	return (bits);
}

void	Fixed::setRawBits(const int raw)
{
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

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a.bits < b.bits)
		return (b);
	return (a);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    if (a.bits <= b.bits)
		return (a);
	return (b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a.bits < b.bits)
		return (b);
	return (a);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
    if (a.bits <= b.bits)
		return (a);
	return (b);
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed_num)
{
	return (out << fixed_num.toFloat());
}
