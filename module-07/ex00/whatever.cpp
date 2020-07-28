#include <iostream>

template <typename T>
void	swap(T &ref1, T &ref2)
{
	T	tmp = ref1;

	ref1 = ref2;
	ref2 = tmp;
}
template <typename T>
T		&min(T &ref1, T &ref2)
{
	if (ref1 < ref2) {
		return (ref1);
	}
	return (ref2);
}
template <typename T>
T		&max(T &ref1, T &ref2)
{
	if (ref1 > ref2) {
		return (ref1);
	}
	return (ref2);
}

int		main(void)
{
	int a = 2;
	int b = 3;

	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return (0);
}