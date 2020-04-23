#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"


int main()
{
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		ICharacter* me = new Character("me");
		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		ICharacter* bob = new Character("bob");
		me->use(0, *bob);
		me->use(1, *bob);
		delete bob;
		delete me;
		delete src;
	}

	std::cout << "\nMy tests\n\n";

	MateriaSource* source = new MateriaSource();
	AMateria* tmp;
	tmp = source->createMateria("ice");
	source->learnMateria(new Ice());
	source->learnMateria(new Ice());
	source->learnMateria(new Ice());
	source->learnMateria(new Cure());
	Ice	*materia = new Ice();
	source->learnMateria(materia);
	tmp = source->createMateria("ice");

	Character* test = new Character("test");
	test->equip(tmp);
	Character* clone1 = new Character(*test);
	
	clone1->use(0, *test);

	test->unequip(0);
	delete tmp;
	MateriaSource* source2 = new MateriaSource();
	source2->learnMateria(new Ice());
	source2->learnMateria(new Ice());
	source2->learnMateria(new Ice());
	source2->learnMateria(new Ice());
	tmp = source2->createMateria("cure"); // source2 does not know this type of materia

	*source2 = *source;						// now source2 know the cure materia

	tmp = source2->createMateria("cure");
	test->equip(tmp);
	
	*clone1 = *test;

	clone1->use(0, *test);

	clone1->use(3, *test);
	clone1->use(30, *test);

	delete test;
	delete clone1;
	delete materia;
	delete source;
	delete source2;
	return 0;
}
