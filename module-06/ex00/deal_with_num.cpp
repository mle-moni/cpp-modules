#include "functions.h"
#include <cstddef>
#include <stdlib.h>
#include <climits>
#include <ctype.h>
#include <string>
#include <cfloat>

static int	number_of_dots(const std::string &str)
{
	int		i = 0;
	int		dot_number = 0;
	int		len = str.length();
	while (i < len) {
		if (str[i] == '.') {
			dot_number++;
		}
		i++;
	}
	return (dot_number);
}

int			look_like_num(const std::string &str)
{
	if (str[0] == '-' || str[0] == '+') {
		return (str.length() != 1);
	}
	if (std::isdigit(str[0])) {
		return (1);
	}
	if (str == "nan" || str == "nanf") {
		return (1);
	}
	return (0);
}

static bool	deal_with_float(const std::string &str)
{
	if (str == "-inf" || str == "+inf") {
		return (false);
	}
	if (str[str.length() - 1] != 'f') {
		return (false);
	}
	int dot_number = number_of_dots(str);
	if (dot_number > 1) {
		std::cerr << "Float should contain 1 dot max\n";
		return (true);
	}
	if (str == "+inff") {
		print_special("+inf");
	} else if (str == "-inff") {
		print_special("-inf");
	} else if (str == "nanf") {
		print_special("nan");
	} else {
		float 	out_float = strtod(str.c_str(), nullptr);
		char	out_char = static_cast<char>(out_float);
		double	out_double = static_cast<double>(out_float);
		int		out_int = static_cast<int>(out_float);

		double	int_max = static_cast<double>(INT_MAX);
		double	int_min = static_cast<double>(INT_MIN);
		bool	int_will_overflow = out_double < int_min || out_double > int_max;
		bool	char_will_overflow = out_double < -128.0 || out_double > 127.0;
		if (int_will_overflow || out_double != out_int) {
			print_char(out_char, 1);
			print_int(out_int, 1);
			print_float(out_float, 0);
			print_double(out_double, 0);
		} else {
			print_char(out_char, char_will_overflow);
			print_int(out_int, 0);
			print_float(out_float, 0);
			print_double(out_double, 0);
		}
	}
	return (true);
}

static bool	deal_with_double(const std::string &str)
{
	int dot_number = number_of_dots(str);
	if (dot_number == 0) {
		if (str != "+inf" && str != "-inf" && str != "nan") {
			return (false);
		}
	} else if (dot_number > 1) {
		std::cerr << "Double should contain 1 dot max\n";
		return (true);
	}
	if (str == "+inf") {
		print_special("+inf");
	} else if (str == "-inf") {
		print_special("-inf");
	} else if (str == "nan") {
		print_special("nan");
	} else {
		double 	out_double = strtod(str.c_str(), nullptr);
		char	out_char = static_cast<char>(out_double);
		float	out_float = static_cast<float>(out_double);
		int		out_int = static_cast<int>(out_double);

		double	int_max = static_cast<double>(INT_MAX);
		double	int_min = static_cast<double>(INT_MIN);
		double	float_min = static_cast<double>(FLT_MIN);
		double	float_max = static_cast<double>(FLT_MAX);
		bool	int_will_overflow = out_double < int_min || out_double > int_max;
		bool	char_will_overflow = out_double < -128.0 || out_double > 127.0;
		bool	float_will_overflow = out_double < float_min || out_double > float_max;
		if (int_will_overflow || out_double != out_int) {
			print_char(out_char, 1);
			print_int(out_int, 1);
			print_float(out_float, 0);
			print_double(out_double, 0);
		} else {
			print_char(out_char, char_will_overflow);
			print_int(out_int, 0);
			print_float(out_float, float_will_overflow);
			print_double(out_double, 0);
		}
	}
	return (true);
}

static bool	deal_with_int(const std::string &str)
{
	int		out_int = std::stoi(str);
	float 	out_float = static_cast<float>(out_int);
	char	out_char = static_cast<char>(out_int);
	double	out_double = static_cast<double>(out_int);

	bool	char_will_overflow = out_double < -128.0 || out_double > 127.0;
	print_char(out_char, char_will_overflow);
	print_int(out_int, 0);
	print_float(out_float, 0);
	print_double(out_double, 0);
	return (true);
}

int			deal_with_num(const std::string &str)
{
	if (deal_with_float(str) || deal_with_double(str) || deal_with_int(str)) {
		return (0);
	}
	// an error occured as all deal_with_*type* functions failed
	return (1);
}