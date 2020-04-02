#include <iostream>
#include "Human.hpp"

int		main(void)
{
	Human	bob;

	bob.action("melee", "Alice");
	bob.action("ranged", "Alice");
	bob.action("intimidate", "Alice");
	return (0);
}