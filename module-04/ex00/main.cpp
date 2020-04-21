#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "NaiveHuman.hpp"

int main()
{
	{
		Sorcerer robert("Robert", "the Magnificent");
		Victim jim("Jimmy");
		Peon joe("Joe");
		std::cout << robert << jim << joe;
		robert.polymorph(jim);
		robert.polymorph(joe);
	}

	std::cout << "\nMy tests:\n";

	Sorcerer gandalf("Gandalf", "the Grey");
	NaiveHuman	bob("Bob");
	std::cout << bob << gandalf;
	gandalf.polymorph(bob);

	return 0;
}
