#include <iostream>
#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;


	std::cout << "\n\nMy tests\n\n";
	Fixed	test(50);
	std::cout << test << " + 2\n";
	test = test + 2;
	std::cout << test << " - 9.58\n";
	test = test - 9.58f;
	std::cout << test << "\n\n";
	test = Fixed(50);
	std::cout << test << " * 2\n";
	test = test * 2;
	std::cout << test << " / 3.33\n";
	test = test / 3.33f;
	std::cout << test << " / 2\n";
	test = test / 2;
	std::cout << test << "\n";
	Fixed	aa;
	aa.operator=(a);
	if (a == aa) {
		std::cout << a << " == " << aa << "\n";
	}
	return 0;
}
