#include <exception>
#include <iostream>
#include <vector>
#include <list>
#include "easyfind.hpp"

void		test1(void)
{
	std::vector<int> container({2, 3, 5, 7, 11, 13, 17, 19});
	try {
		int	found = easyfind(container, 13);
		std::cout << "Value " << found << " found in container\n";
	} catch (const std::exception &err) {
		std::cerr << err.what() << "\n";
	}
	try {
		int	notFound = easyfind(container, 42);
		std::cout << "Value " << notFound << " found in container\n";
	} catch (const std::exception &err) {
		std::cerr << err.what() << "\n";
	}
}

void		test2(void)
{
	std::list<int> container({2, 3, 5, 7, 11, 13, 17, 19});
	try {
		int	found = easyfind(container, 13);
		std::cout << "Value " << found << " found in container\n";
	} catch (const std::exception &err) {
		std::cerr << err.what() << "\n";
	}
	try {
		int	notFound = easyfind(container, 42);
		std::cout << "Value " << notFound << " found in container\n";
	} catch (const std::exception &err) {
		std::cerr << err.what() << "\n";
	}
}

const char	*CouldNotFindOccurence::what() const throw()
{
	return ("Could not find occurence in container");
}

int			main(void)
{
	std::cout << "testing with std::vector\n";
	test1();
	std::cout << "\ntesting with std::list\n";
	test2();
	return (0);
}
