#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm():
Form("ShrubberyCreationForm", 145, 137, "nobody")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target):
Form("ShrubberyCreationForm", 145, 137, target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& obj):
Form(obj)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm& obj)
{
	(void)obj;
	return (*this);
}

void					ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	Form::execute(executor);
	std::ofstream	file;

	file.open(this->getTarget() + "_shrubbery");
	file << 
"               ,@@@@@@@," << "\n" <<
"       ,,,.   ,@@@@@@/@@,  .oo8888o." << "\n" <<
"    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << "\n" <<
"   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << "\n" <<
"   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << "\n" <<
"   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'" << "\n" <<
"   `&%\\ ` /%&'    |.|        \\ '|8'" << "\n" <<
"       |o|        | |         | |" << "\n" <<
"       |.|        | |         | |" << "\n" <<
"    \\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_" << "\n";
}

void				ShrubberyCreationForm::abstract_class() const
{
	return ;
}
