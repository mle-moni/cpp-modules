#include <cctype>
#include <iostream>
#include "functions.h"

static int	print_char_conversions(std::string &str)
{
	/*
	** str[0] is a char,
	** so there will be no problems casting to 
	** int, float and double
	*/
	char	out_char = static_cast<char>( str[0] );
	int		out_int = static_cast<int>( out_char );
	float	out_float = static_cast<float>( out_char );
	double	out_double = static_cast<double>( out_char );

	print_char(out_char, 0);
	print_int(out_int, 0);
	print_float(out_float, 0);
	print_double(out_double, 0);
	return (0);
}

static int	deal_with_char(std::string &str)
{
	if (str.length() != 1) {
		std::cerr << "Parameter recognized as a char but not of size 1\n";
		return (1);
	}
	return (print_char_conversions(str));
}

static int	branching(std::string str)
{
	if (!str.length()) {
		std::cerr << "Parameter should not be empty\n";
		return (1);
	}
	if (look_like_num(str)) {
		if (deal_with_num(str)) {
			std::cerr << "Very strange, parameter could not be recognized\n";
			return (1);
		}
		return (0);
	}
	return (deal_with_char(str));
}

int			main(int ac, char **av)
{
	if (ac != 2) {
		std::cerr << "Bad number of arguments. Expected 1 but got "
		<< ac - 1 << "\n";
		return (1);
	}
	return (branching(av[1]));
}
