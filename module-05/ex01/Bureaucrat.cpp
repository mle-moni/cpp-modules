#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat()
{
}

Bureaucrat::Bureaucrat(const std::string& name, int grade): _name(name), _grade(grade)
{
	if (grade < 1) {
		throw Bureaucrat::GradeTooHighException();
	} else if (grade > 150) {
		throw Bureaucrat::GradeTooLowException();
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat& obj): _name(obj._name), _grade(obj._grade)
{
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat&			Bureaucrat::operator=(const Bureaucrat& obj)
{
	_grade = obj._grade;
	return (*this);
}

const std::string&	Bureaucrat::getName() const
{
	return (_name);
}

int			Bureaucrat::getGrade() const
{
	return (_grade);
}

void				Bureaucrat::incrementGrade()
{
	if (_grade - 1 < 1) {
		throw Bureaucrat::GradeTooHighException();
	} else {
		_grade--;
	}
}

void				Bureaucrat::decrementGrade()
{
	if (_grade + 1 > 150) {
		throw Bureaucrat::GradeTooLowException();
	} else {
		_grade++;
	}
}

std::ostream& operator<<(std::ostream& stream, const Bureaucrat& obj)
{
	stream << obj.getName() << ", bureaucrat grade " << obj.getGrade();
	return (stream);
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("GradeTooHighException");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("GradeTooLowException");
}

void		Bureaucrat::signForm(Form& form)
{
	if (form.getSigned()) {
		std::cout << *this << " cannot sign the form: " << form.getName() << " because it is already signed\n";
		return ;
	}
	bool succes = true;
	try
	{
		form.beSigned(*this);
	}
	catch (std::exception & e)
	{
		std::cout << *this << " cannot sign the form: " << form.getName() << " because his grade is too low\n";
		succes = false;
	}
	if (succes) {
		std::cout << *this << " signs the form: " << form.getName() << "\n";
	}
}
