#include <iostream>
#include "Pony.hpp"

void	ponyOnTheHeap(void)
{
	Pony	*joe = new Pony("Joe");
	joe->stop();
	joe->run(10);
	joe->stop();
	joe->neigh();
	delete joe;
}

void	ponyOnTheStack(void)
{
	Pony	jack("Jack");
	jack.stop();
	jack.run(10);
	jack.stop();
	jack.neigh();
}

int		main(void)
{
	std::cout << "on the stack\n";
	ponyOnTheStack();
	std::cout << "on the heap\n";
	ponyOnTheHeap();
	std::cin.get();
	return (0);
}