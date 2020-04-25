#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	Bureaucrat bill("Bill", 149);
	Bureaucrat boss("Boss", 1);

	ShrubberyCreationForm	tree_form("home");
	RobotomyRequestForm		robot_form("Bob");
	PresidentialPardonForm	pardon("Ronald");


	std::cout << "try to exec unsigned form: ";
	try {
		tree_form.execute(boss);
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	tree_form.beSigned(boss);
	tree_form.execute(boss);
	std::cout << "try the command: 'cat home_shrubbery'\n";

	robot_form.beSigned(boss);

	std::cout << "try to exec with too low grade: ";
	try
	{
		robot_form.execute(bill);
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	robot_form.execute(boss);
	robot_form.execute(boss);

	boss.executeForm(robot_form);
	bill.executeForm(robot_form);

	bill.executeForm(pardon);
	boss.executeForm(pardon);

	boss.signForm(pardon);

	bill.executeForm(pardon);
	boss.executeForm(pardon);

	return (0);
}
