#ifndef SHRUBBERYCREATIONFORM_H
#define SHRUBBERYCREATIONFORM_H

#include <iostream>
#include "Form.hpp"

class ShrubberyCreationForm: public Form
{
private:
	ShrubberyCreationForm();
public:
	ShrubberyCreationForm(const std::string& target);
	ShrubberyCreationForm(const ShrubberyCreationForm& obj);
	~ShrubberyCreationForm();
	ShrubberyCreationForm& operator=(const ShrubberyCreationForm& obj);

	void		execute(Bureaucrat const & executor) const;
protected:
	void		abstract_class() const;
};

#endif