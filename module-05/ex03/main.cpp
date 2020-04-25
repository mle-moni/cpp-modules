#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	Bureaucrat bill("Bill", 149);
	Bureaucrat boss("Boss", 1);

	Intern		slave;

	Form*	tree_form = slave.makeForm("shrubbery creation", "home");
	Form*	robot_form = slave.makeForm("robotomy request", "Bob");
	Form*	pardon = slave.makeForm("presidential pardon", "Ronald");


	std::cout << "try to exec unsigned form: ";
	try {
		(*tree_form).execute(boss);
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	(*tree_form).beSigned(boss);
	(*tree_form).execute(boss);
	std::cout << "try the command: 'cat home_shrubbery'\n";

	(*robot_form).beSigned(boss);

	std::cout << "try to exec with too low grade: ";
	try
	{
		(*robot_form).execute(bill);
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	(*robot_form).execute(boss);
	(*robot_form).execute(boss);

	boss.executeForm(*robot_form);
	bill.executeForm(*robot_form);

	bill.executeForm(*pardon);
	boss.executeForm(*pardon);

	boss.signForm(*pardon);

	bill.executeForm(*pardon);
	boss.executeForm(*pardon);

	delete tree_form;
	delete robot_form;
	delete pardon;

	try
	{
		slave.makeForm("form that do not exist", "me");
	}
	catch (std::exception& e)
	{
		std::cout << "Error while making form: " << e.what() << "\n";
	}
	return (0);
}
