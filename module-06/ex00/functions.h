#ifndef FUNCTIONS_H
# define FUNCTIONS_H

#include <iostream>

int		deal_with_num(const std::string &str);
int		look_like_num(const std::string &str);

void	print_char(char out_char, int special);
void	print_int(int out_int, int special);
void	print_float(float out_float, int special);
void	print_double(double out_double, int special);
void	print_special(const std::string &special_case);

#endif