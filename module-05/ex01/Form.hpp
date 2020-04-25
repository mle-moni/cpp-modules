#ifndef FORM_H
#define FORM_H

#include <iostream>

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	const std::string	_name;
	const int			_grade_required;
	bool				_signed;
	Form();
public:
	Form(const std::string& name, const int& grade_required);
	Form(const Form& obj);
	~Form();
	Form& operator=(const Form& obj);

	class GradeTooHighException: public Bureaucrat::GradeTooHighException
	{
	};
	class GradeTooLowException: public Bureaucrat::GradeTooLowException
	{
	};

	const std::string&	getName() const;
	bool				getSigned() const;
	int					getGradeRequired() const;

	void				beSigned(const Bureaucrat& obj);
};

std::ostream& operator<<(std::ostream& stream, const Form& obj);

#endif