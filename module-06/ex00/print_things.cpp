#include "functions.h"
#include <string>
#include <limits>
#include <iomanip>

void	print_char(char out_char, int special)
{
	if (special) {
		std::cout << "char: " << "impossible" << "\n";
		return ;
	}
	if (!std::isprint(out_char)) {
		std::cout << "char: " << "Non displayable" << "\n";
	} else {
		std::cout << "char: " << out_char << "\n";
	}
}

void	print_int(int out_int, int special)
{
	if (special) {
		std::cout << "int: " << "impossible" << "\n";
		return ;
	}
	std::cout << "int: " << out_int << "\n";
}

void	print_float(float out_float, int special)
{
	if (special) {
		std::cout << "float: " << "impossible" << "\n";
		return ;
	}
	std::cout << "float: ";
	if (out_float == ((float)(int)out_float)) {
		std::cout << std::fixed << std::setprecision(1) << out_float;
	} else {
		std::cout << out_float;
	}
	std::cout << "f\n";
}

void	print_double(double out_double, int special)
{
	if (special) {
		std::cout << "double: " << "impossible" << "\n";
		return ;
	}
	std::cout << "double: ";
	if (out_double == ((double)(int)out_double)) {
		std::cout << std::fixed <<std::setprecision(1) << out_double;
	} else {
		std::cout << out_double;
	}
	std::cout << "\n";
}

void print_special(const std::string &special_case) {
  std::cout << "char: impossible\n";
  std::cout << "int: impossible\n";
  std::cout << "float: " << special_case << "f\n";
  std::cout << "double: " << special_case << "\n";
}
