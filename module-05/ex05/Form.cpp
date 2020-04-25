#include "Form.hpp"

Form::Form(): _name("default"),  _target("none"), _grade_required(150), _grade_to_exec(150), _signed(false)
{
}

Form::Form(const std::string& name, const int& grade_required, const int& grade_to_exec, const std::string& target):
 _name(name), _target(target), _grade_required(grade_required), _grade_to_exec(grade_to_exec), _signed(false)
{
	if (_grade_required < 1) {
		throw Form::GradeTooHighException();
	} else if (_grade_required > 150) {
		throw Form::GradeTooLowException();
	}
}

Form::Form(const Form& obj):
_name(obj._name), _target(obj._target), _grade_required(obj._grade_required), _grade_to_exec(obj._grade_to_exec), _signed(false)
{
}

Form::~Form()
{
}

Form& Form::operator=(const Form& obj)
{
	(void)obj;
	return (*this);
}

const std::string&	Form::getName() const
{
	return (_name);
}

bool				Form::getSigned() const
{
	return (_signed);
}

int					Form::getGradeRequired() const
{
	return (_grade_required);
}

int					Form::getExecGrade() const
{
	return (_grade_to_exec);
}

const std::string&	Form::getTarget() const
{
	return (_target);
}

void				Form::beSigned(const Bureaucrat& obj)
{
	if (_signed) {
		return ;
	}
	if (obj.getGrade() <= _grade_required) {
		_signed = true;
	} else {
		throw Form::GradeTooLowException();
	}
}

void				Form::execute(Bureaucrat const & executor) const
{
	if (!_signed) {
		throw Form::NotSignedException();
	}
	if (executor.getGrade() <= _grade_to_exec) {
		return ;
	} else {
		throw Form::GradeTooLowException();
	}
}

const char* 		Form::NotSignedException::what() const throw()
{
	return ("NotSignedException");
}

std::ostream& operator<<(std::ostream& stream, const Form& obj)
{
	stream << obj.getName() << " (sign: " << obj.getGradeRequired() << ", exec: " << obj.getExecGrade() <<
	", target: " << obj.getTarget() << ", signed: " << obj.getSigned() << ")";
	return (stream);
}
