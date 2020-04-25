#ifndef ROBOTOMYREQUESTFORM_H
#define ROBOTOMYREQUESTFORM_H

#include <iostream>
#include "Form.hpp"

class RobotomyRequestForm: public Form
{
private:
	RobotomyRequestForm();
public:
	RobotomyRequestForm(const std::string& target);
	RobotomyRequestForm(const RobotomyRequestForm& obj);
	~RobotomyRequestForm();
	RobotomyRequestForm& operator=(const RobotomyRequestForm& obj);

	void		execute(Bureaucrat const & executor) const;
	Form*		new_form(const std::string& target) const;
};

#endif