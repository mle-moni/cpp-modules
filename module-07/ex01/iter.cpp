#include <iostream>

template<typename T>
void	iter(T *array, int len, void (&fn)(T&))
{
	for (int i = 0; i < len; i++) {
		fn(array[i]);
	}
}

template<typename T>
void	print_ln(T &arg)
{
	std::cout << arg << "\n";
}

int		main(void)
{
	int		arr_int[4] = {11, 12, 145, 166};
	iter(arr_int, 4, print_ln);

	std::cout << "\n---------------------------\n\n";

	char	arr_char[4] = {'H', 'e', 'y', '!'};
	iter(arr_char, 4, print_ln);

	std::cout << "\n---------------------------\n\n";
	
	double	arr_double[6] = {12.33, 140.0, 25, 77.9927, 0.5, 3.141592};
	iter(arr_double, 6, print_ln);
	return (0);
}
