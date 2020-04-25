#include "Intern.hpp"

Intern::Intern()
{
	copies[0] = new ShrubberyCreationForm("copy");
	copies[1] = new RobotomyRequestForm("copy");
	copies[2] = new PresidentialPardonForm("copy");
	string_indexes[0] = "shrubbery creation";
	string_indexes[1] = "robotomy request";
	string_indexes[2] = "presidential pardon";
}

Intern::Intern(const Intern& obj): Intern()
{
	(void)obj;
}

Intern::~Intern()
{
	delete copies[0]; 
	delete copies[1]; 
	delete copies[2];
}

Intern& Intern::operator=(const Intern& obj)
{
	(void)obj;
	return (*this);
}

const char*	Intern::CouldNotResolveRequestException::what() const throw()
{
	return ("CouldNotResolveRequestException");
}

Form*		Intern::makeForm(const std::string& request, const std::string& target)
{
	for (int i = 0; i < 3; i++) {
		if (string_indexes[i] == request) {
			return (copies[i]->new_form(target));
		}
	}
	throw Intern::CouldNotResolveRequestException();
}
