#ifndef OFFICEBLOCK_H
#define OFFICEBLOCK_H

#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

class OfficeBlock
{
private:
	Intern*		_intern;
	Bureaucrat*	_signer;
	Bureaucrat*	_executor;

	bool	teamIsFull() const;
	
	OfficeBlock(const OfficeBlock& obj);
	OfficeBlock& operator=(const OfficeBlock& obj);

public:
	OfficeBlock();
	OfficeBlock(Intern* intern, Bureaucrat* signer, Bureaucrat* executor);
	~OfficeBlock();

	void	setIntern(Intern *intern);
	void	setSigner(Bureaucrat *signer);
	void	setExecutor(Bureaucrat *executor);

	void	doBureaucracy(const std::string& formName, const std::string& target) const;

	class TeamNotFullException: public std::exception
	{
		virtual const char* what() const throw();
	};
};

#endif