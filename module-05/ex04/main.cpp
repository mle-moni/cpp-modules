#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include "OfficeBlock.hpp"

int main()
{
	Intern idiotOne;
	Bureaucrat hermes = Bureaucrat("Hermes Conrad", 25);
	Bureaucrat bob = Bureaucrat("Bobby Bobson", 50);

	Bureaucrat bill = Bureaucrat("Bill Boule", 150);
	OfficeBlock ob;
	ob.setIntern(&idiotOne);
	ob.setSigner(&bob);
	ob.setExecutor(&hermes);

	try
	{
		ob.doBureaucracy("form that does not exist", "Tom");
	}
	catch (Bureaucrat::GradeTooLowException & e)
	{
		std::cout << "Oh, no, bureaucrat's grade was too low :c" << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

	try
	{
		ob.doBureaucracy("presidential pardon", "Tom");
	}
	catch (Bureaucrat::GradeTooLowException & e)
	{
		std::cout << "Oh, no, bureaucrat's grade was too low :c" << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}


	try
	{
		ob.doBureaucracy("robotomy request", "Tom");
	}
	catch (Bureaucrat::GradeTooLowException & e)
	{
		std::cout << "Oh, no, his grade was too low :c" << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	

	try
	{
		ob.setExecutor(&bill);
		ob.doBureaucracy("robotomy request", "Ronald");
	}
	catch (Bureaucrat::GradeTooLowException & e)
	{
		std::cout << "Oh, no, his grade was too low :c" << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	return (0);
}
