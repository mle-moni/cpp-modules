#ifndef INTERN_H
#define INTERN_H

#include <iostream>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
private:
	Form*		copies[3];
	std::string	string_indexes[3];
public:
	Intern();
	Intern(const Intern& obj);
	~Intern();
	Intern& operator=(const Intern& obj);

	Form*	makeForm(const std::string& request, const std::string& target);

	class BadFormNameException: public std::exception
	{
		virtual const char* what() const throw();
	};
};

#endif