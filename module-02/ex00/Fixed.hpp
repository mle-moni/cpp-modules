#ifndef FIXED_H
#define FIXED_H

class Fixed
{
private:
	int					bits;
	static const int 	fractional_bits = 8;
public:
	Fixed();
	Fixed(const Fixed& obj);
	~Fixed();
	Fixed&	operator=(const Fixed& obj);

	int		getRawBits() const;
	void	setRawBits(const int raw);
};

#endif