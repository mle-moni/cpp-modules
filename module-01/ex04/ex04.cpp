#include <iostream>

int		main(void)
{
	std::string		str("HI THIS IS BRAIN");
	std::string		*ptr = &str;
	std::string&	ref = str;

	std::cout << "From ptr: " << *ptr << "\n";
	std::cout << "From ref: " << ref << "\n";

	return (0);
}
