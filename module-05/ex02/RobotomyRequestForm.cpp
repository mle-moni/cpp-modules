#include "RobotomyRequestForm.hpp"
#include <ctime>
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm():
Form("RobotomyRequestForm", 72, 45, "nobody")
{
}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target):
Form("RobotomyRequestForm", 72, 45, target)
{
	std::srand(std::time(NULL));
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& obj):
Form(obj)
{
	std::srand(std::time(NULL));
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm& obj)
{
	(void)obj;
	return (*this);
}

void					RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	Form::execute(executor);
	const int random_int = std::rand();

	std::cout << "**DRILLING NOISES**\n";
	if (random_int % 200 < 100) {
		std::cout << this->getTarget() << " has been robotomized successfully\n";
	} else {
		std::cout << "Failed to robotomize " << this->getTarget() << "\n";
	}
}

void				RobotomyRequestForm::abstract_class() const
{
	return ;
}
