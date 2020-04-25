#ifndef PRESIDENTIALPARDONFORM_H
#define PRESIDENTIALPARDONFORM_H

#include <iostream>
#include "Form.hpp"

class PresidentialPardonForm: public Form
{
private:
	PresidentialPardonForm();
public:
	PresidentialPardonForm(const std::string& target);
	PresidentialPardonForm(const PresidentialPardonForm& obj);
	~PresidentialPardonForm();
	PresidentialPardonForm& operator=(const PresidentialPardonForm& obj);

	void		execute(Bureaucrat const & executor) const;
	Form*		new_form(const std::string& target) const;
};

#endif