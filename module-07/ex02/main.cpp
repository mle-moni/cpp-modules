#include <exception>
#include <iostream>
#include "Array.hpp"

template<typename T>
void	print_array(std::string str, Array<T> &arr)
{
	std::cout << "printing ";
	std::cout << str << "\n";
	std::cout << "-------\n";
	unsigned int size = arr.size();
	for (unsigned int i = 0; i < size; i++) {
		std::cout << arr[i] << "\n";
	}
	std::cout << "-------\n";
}

int		main(void)
{
	Array<int> test(3);

	test[1] = 45;

	print_array("array no 1:", test);
	std::cout << "trying to acces index 555\n";
	try
	{
		std::cout << test[555] << "\n";
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what();
	}

	Array<int> test2(test);
	test2[0] = 33;
	print_array("array no 2 (copied from array 1 and then edited)", test2);
	print_array("array no 1 to prove that it is not modified by the edit of the copy", test);
	Array<std::string> test3(2);
	print_array("string array of size 2", test3);
	test3[0] = std::string("Hey");
	test3[1] = std::string(":)");
	print_array("string array of size 2, with values", test3);
	Array<char>	test4;
	print_array("empty array", test4);
	std::cout << "empty array size() returns " << test4.size() << "\n";
	return (0);
}
