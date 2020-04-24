#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat bill("Bill", 149);
	Bureaucrat boss("Boss", 1);
	try
	{
		Bureaucrat bad_bureaucrat("bad", 200);
	}
	catch (std::exception & e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	try
	{
		Bureaucrat good_bureaucrat("good", 0);
	}
	catch (std::exception & e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	try
	{
		std::cout << boss;
		boss.decrementGrade();
		std::cout << boss;
		boss.incrementGrade();
		std::cout << boss;
		boss.incrementGrade();
		std::cout << boss;
	}
	catch (std::exception & e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	try
	{
		std::cout << bill;
		bill.incrementGrade();
		std::cout << bill;
		bill.decrementGrade();
		std::cout << bill;
		bill.decrementGrade();
		std::cout << bill;
		bill.decrementGrade();
		std::cout << bill;
	}
	catch (std::exception & e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	return (0);
}
