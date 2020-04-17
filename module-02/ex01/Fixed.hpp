#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <cmath>

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

	int		getRawBits() const;
	void	setRawBits(const int raw);
	float	toFloat( void ) const;
	int		toInt( void ) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed_num);

#endif