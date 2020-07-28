#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#define DEBUG 1

Base	*generate(void)
{
	int random_int = std::rand() % 3;
	if (random_int == 0) {
		if (DEBUG) {
			std::cout << "created A\n";
		}
		return (new A);
	} else if (random_int == 1) {
		if (DEBUG) {
			std::cout << "created B\n";
		}
		return (new B);
	} else {
		if (DEBUG) {
			std::cout << "created C\n";
		}
		return (new C);
	}
}

void	identify_from_pointer(Base *p)
{
	A	*test1 = dynamic_cast<A*>(p);
	if (test1) {
		std::cout << "A\n";
		return;
	}
	B	*test2 = dynamic_cast<B*>(p);
	if (test2) {
		std::cout << "B\n";
		return;
	}
	C	*test3 = dynamic_cast<C*>(p);
	if (test3) {
		std::cout << "C\n";
	}
}

void	identify_from_reference( Base &p)
{
	try
	{
		A &test1 = dynamic_cast<A&>(p);
		(void)test1;
		std::cout << "A\n";
		return;
	}
	catch (const std::bad_cast &)
	{}
	try
	{
		B &test2 = dynamic_cast<B&>(p);
		(void)test2;
		std::cout << "B\n";
		return;
	}
	catch (const std::bad_cast &)
	{}
	try
	{
		C &test3 = dynamic_cast<C&>(p);
		(void)test3;
		std::cout << "C\n";
		return;
	}
	catch (const std::bad_cast &)
	{}
}

int		main(void)
{
	std::srand(std::time(nullptr));
	Base	*pointer = generate();

	std::cout << "Identifying from pointer:\n";
	identify_from_pointer(pointer);
	std::cout << "Identifying from reference:\n";
	identify_from_reference(*pointer);
	return (0);
}