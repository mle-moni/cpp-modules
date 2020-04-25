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
protected:
	void		abstract_class() const;
};

#endif