#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	std::cout << "EX00\n\n";
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
			std::cout << boss << "\n";
			boss.decrementGrade();
			std::cout << boss << "\n";
			boss.incrementGrade();
			std::cout << boss << "\n";
			boss.incrementGrade();
			std::cout << boss << "\n";
		}
		catch (std::exception & e)
		{
			std::cerr << "Error: " << e.what() << std::endl;
		}
		try
		{
			std::cout << bill << "\n";
			bill.incrementGrade();
			std::cout << bill << "\n";
			bill.decrementGrade();
			std::cout << bill << "\n";
			bill.decrementGrade();
			std::cout << bill << "\n";
			bill.decrementGrade();
			std::cout << bill << "\n";
		}
		catch (std::exception & e)
		{
			std::cerr << "Error: " << e.what() << std::endl;
		}
	}

	std::cout << "\nEX01\n\n";

	{
		try
		{
			Form from200("form200", 200);
		}
		catch (std::exception & e)
		{
			std::cerr << "Error: " << e.what() << std::endl;
		}

		try
		{
			Form from0("form0", 0);
		}
		catch (std::exception & e)
		{
			std::cerr << "Error: " << e.what() << std::endl;
		}

		Bureaucrat bill("Bill", 149);
		Bureaucrat boss("Boss", 1);

		Form	form150("form150", 150);
		Form	form50("form50", 50);
		Form	form5("form5", 5);

		std::cout << std::endl;

		bill.signForm(form5);
		bill.signForm(form50);
		bill.signForm(form150);
		std::cout << std::endl;
		boss.signForm(form5);
		boss.signForm(form50);
		boss.signForm(form150);
	}

	return (0);
}
