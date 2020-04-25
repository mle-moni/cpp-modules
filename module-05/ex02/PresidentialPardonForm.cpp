#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():
Form("PresidentialPardonForm", 25, 5, "nobody")
{
}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target):
Form("PresidentialPardonForm", 25, 5, target)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& obj):
Form(obj)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm& obj)
{
	(void)obj;
	return (*this);
}

void					PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	Form::execute(executor);
	
	std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox\n";
}

void				PresidentialPardonForm::abstract_class() const
{
	return ;
}
