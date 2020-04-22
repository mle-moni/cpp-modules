#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include <iostream>

int main()
{
	{
		ISpaceMarine* bob = new TacticalMarine;
		ISpaceMarine* jim = new AssaultTerminator;
		ISquad* vlc = new Squad;
		vlc->push(bob);
		vlc->push(jim);
		for (int i = 0; i < vlc->getCount(); ++i)
		{
			ISpaceMarine* cur = vlc->getUnit(i);
			cur->battleCry();
			cur->rangedAttack();
			cur->meleeAttack();
		}
		delete vlc;
	}

	std::cout << "\nMy tests\n\n";

	std::cout << "Creating squad1\n";
	Squad* squad1 = new Squad;
	squad1->push(new TacticalMarine);
	squad1->push(new TacticalMarine);
	squad1->push(new AssaultTerminator);

	std::cout << "Creating squad2\n";
	Squad* squad2 = new Squad(*squad1);
	std::cout << "Creating squad3\n";
	Squad* squad3 = new Squad;
	squad3->push(new AssaultTerminator);
	std::cout << "Deleting squad1\n";
	delete squad1;
	std::cout << "loop over squad2\n";
	for (int i = 0; i < squad2->getCount(); ++i)
	{
		squad2->getUnit(i)->meleeAttack();
	}
	std::cout << "squad3 = squad2\n";
	*squad3 = *squad2;
	std::cout << "Deleting squad2\n";
	delete squad2;
	std::cout << "loop over squad3\n";
	for (int i = 0; i < squad3->getCount(); ++i)
	{
		squad3->getUnit(i)->meleeAttack();
	}

	std::cout << "Deleting squad3\n";
	delete squad3;
	return 0;
}
