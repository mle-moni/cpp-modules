#ifndef FORM_H
#define FORM_H

#include <iostream>

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	const std::string	_name;
	const std::string	_target;
	const int			_grade_required;
	const int			_grade_to_exec;
	bool				_signed;
	Form();
public:
	Form(const std::string& name, const int& grade_required,
	const int& grade_to_exec, const std::string& target);
	Form(const Form& obj);
	virtual ~Form();
	Form& operator=(const Form& obj);

	class GradeTooHighException: public Bureaucrat::GradeTooHighException
	{
	};
	class GradeTooLowException: public Bureaucrat::GradeTooLowException
	{
	};
	class NotSignedException: public std::exception
	{
		virtual const char* what() const throw();
	};

	const std::string&	getName() const;
	bool				getSigned() const;
	int					getGradeRequired() const;
	const std::string&	getTarget() const;

	void				beSigned(const Bureaucrat& obj);

	virtual void		execute(Bureaucrat const & executor) const;
	virtual Form*		new_form(const std::string& target) const = 0;
};

std::ostream& operator<<(std::ostream& stream, const Form& obj);

#endif