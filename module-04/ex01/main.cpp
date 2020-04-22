#include <iostream>
#include "Character.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"

int main()
{
	{
		Character* me = new Character("me");
		std::cout << *me;
		Enemy* b = new RadScorpion();
		AWeapon* pr = new PlasmaRifle();
		AWeapon* pf = new PowerFist();
		me->equip(pr);
		std::cout << *me;
		me->equip(pf);
		me->attack(b);
		std::cout << *me;
		me->equip(pr);
		std::cout << *me;
		me->attack(b);
		std::cout << *me;
		me->attack(b);
		std::cout << *me;

		delete pf;
		delete me;
	}

	std::cout << "\nMy tests\n\n";
	
	Character* mayeul = new Character("Mayeul");
	std::cout << *mayeul;
	Enemy* scorpion = new RadScorpion();
	Enemy* mutant = new SuperMutant();
	AWeapon* pr = new PlasmaRifle();
	
	std::cout << "\n";

	mayeul->attack(mutant);
	std::cout << *mayeul;
	mayeul->equip(pr);
	std::cout << *mayeul;
	mayeul->attack(scorpion);
	std::cout << *mayeul;
	mayeul->attack(scorpion);
	std::cout << *mayeul;
	mayeul->attack(scorpion);
	std::cout << *mayeul;
	mayeul->attack(scorpion);
	std::cout << *mayeul;
	mayeul->attack(mutant);
	std::cout << *mayeul;
	mayeul->attack(mutant);
	std::cout << *mayeul;
	mayeul->attack(mutant);
	std::cout << *mayeul;
	mayeul->attack(mutant);
	std::cout << *mayeul;
	mayeul->attack(mutant);
	std::cout << *mayeul;
	mayeul->recoverAP();
	mayeul->recoverAP();
	mayeul->recoverAP();
	mayeul->recoverAP();
	mayeul->recoverAP();
	std::cout << *mayeul;
	mayeul->attack(mutant);
	std::cout << *mayeul;
	mayeul->attack(mutant);
	std::cout << *mayeul;
	mayeul->attack(mutant);
	std::cout << *mayeul;
	mayeul->attack(mutant);
	std::cout << *mayeul;
	mayeul->attack(mutant);
	std::cout << *mayeul;
	mayeul->attack(mutant);
	std::cout << *mayeul;

	delete mayeul;
	
	return 0;
}
