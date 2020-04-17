#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <cmath>

// My implementation of fixed number representation.
class Fixed
{
private:
	int					bits;
	static const int 	fractional_bits = 8;
	static const int	shift_factor = 256; // (2^8)
public:
	Fixed();
	Fixed(const Fixed& obj);
	Fixed(const int num);
	Fixed(const float num);
	~Fixed();
	Fixed&	operator=(const Fixed& obj);
	bool	operator>(const Fixed& obj) const;
	bool	operator<(const Fixed& obj) const;
	bool	operator==(const Fixed& obj) const;
	bool	operator>=(const Fixed& obj) const;
	bool	operator<=(const Fixed& obj) const;
	bool	operator!=(const Fixed& obj) const;

	Fixed	operator+(const Fixed& obj) const;
	Fixed	operator+(int	num) const;
	Fixed	operator+(float	num) const;

	Fixed	operator-(const Fixed& obj) const;
	Fixed	operator-(int	num) const;
	Fixed	operator-(float	num) const;

	Fixed	operator*(const Fixed& obj) const;
	Fixed	operator*(int	num) const;
	Fixed	operator*(float	num) const;

	Fixed	operator/(const Fixed& obj) const;
	Fixed	operator/(int	num) const;
	Fixed	operator/(float	num) const;

	/* increment and decrement */

	Fixed&	operator++(void);
	Fixed	operator++(int);
	Fixed&	operator--(void);
	Fixed	operator--(int);

	int		getRawBits() const;
	void	setRawBits(const int raw);
	float	toFloat( void ) const;
	int		toInt( void ) const;

	static const Fixed &min(const Fixed &a, const Fixed &b);
	static Fixed &min(Fixed &a, Fixed &b);

	static const Fixed &max(const Fixed &a, const Fixed &b);
	static Fixed &max(Fixed &a, Fixed &b);
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed_num);
std::ostream &operator<<(std::ostream &out, const Fixed &fixed_num);

#endif