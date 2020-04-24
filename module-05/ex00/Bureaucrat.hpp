#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iostream>

class Bureaucrat
{
private:
	std::string		_name;
	int				_grade;
	Bureaucrat();
public:
	Bureaucrat(const std::string& name, int grade);
	Bureaucrat(const Bureaucrat& obj);
	~Bureaucrat();
	Bureaucrat& operator=(const Bureaucrat& obj);

	const std::string&	getName() const;
	int					getGrade() const;

	void				incrementGrade();
	void				decrementGrade();
	
	class GradeTooHighException: public std::exception
	{
		virtual const char* what() const throw()
		{
			return ("GradeTooHighException");
		}
	};
	class GradeTooLowException: public std::exception
	{
		virtual const char* what() const throw()
		{
			return ("GradeTooLowException");
		}
	};
};

std::ostream& operator<<(std::ostream& stream, const Bureaucrat& obj);

#endif