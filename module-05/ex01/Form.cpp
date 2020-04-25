#include "Form.hpp"

Form::Form(): _name("default"), _grade_required(150), _signed(false)
{
}

Form::Form(const std::string& name, const int& grade_required): _name(name), _grade_required(grade_required), _signed(false)
{
	if (_grade_required < 1) {
		throw Form::GradeTooHighException();
	} else if (_grade_required > 150) {
		throw Form::GradeTooLowException();
	}
}

Form::Form(const Form& obj): _name(obj._name), _grade_required(obj._grade_required), _signed(false)
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

std::ostream& operator<<(std::ostream& stream, const Form& obj)
{
	if (obj.getSigned()) {
		stream << obj.getName() << " form is already signed";
	} else {
		stream << obj.getName() << " form needs grade " << obj.getGradeRequired() << " to be signed";
	}
	return (stream);
}
