#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include "OfficeBlock.hpp"
#include "CentralBureaucracy.hpp"

#include <ctime>
#include <cstdlib>

int main()
{
	std::srand(std::time(NULL));
	CentralBureaucracy test;

	#define NAMES_LEN 29

	std::string names[] = {
		"Bob",
		"Leo",
		"Paul",
		"Jacques",
		"Jean",
		"Damien",
		"Bill",
		"Mayeul",
		"Manuel",
		"Bertrand",
		"Benoit",
		"Chloe",
		"Noemie",
		"Celine",
		"Anne",
		"Agnes",
		"Pauline",
		"Oscar",
		"Pascal",
		"Lucas",
		"Martin",
		"Eliot",
		"Louis",
		"Louise",
		"Salomon",
		"Marie",
		"Theo",
		"Romain",
		"Hugo"
	};

	Bureaucrat*	all[42];

	for (int i = 0; i < 42; i++) {
		int grade = std::rand() % 150;
		grade++;
		all[i] = new Bureaucrat(names[std::rand() % NAMES_LEN], grade);
		test.feed(all[i]);
	}

	#define PEOPLE_IN_QUEUE 1000

	for (int i = 0; i < PEOPLE_IN_QUEUE; i++) {
		test.queueUp(names[std::rand() % NAMES_LEN]);
	}
	
	test.doBureaucracy();

	for (int i = 0; i < 42; i++) {
		delete all[i];
	}
	return (0);
}
