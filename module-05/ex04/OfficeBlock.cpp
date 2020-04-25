#include "OfficeBlock.hpp"

OfficeBlock::OfficeBlock()
{
	_intern = nullptr;
	_signer = nullptr;
	_executor = nullptr;
}

OfficeBlock::OfficeBlock(Intern* intern, Bureaucrat* signer, Bureaucrat* executor):
_intern(intern), _signer(signer), _executor(executor)
{
}

OfficeBlock::OfficeBlock(const OfficeBlock& obj)
{
	(void)obj;
}

OfficeBlock::~OfficeBlock()
{
}

OfficeBlock& OfficeBlock::operator=(const OfficeBlock& obj)
{
	(void)obj;
	return (*this);
}

void	OfficeBlock::setIntern(Intern *intern)
{
	_intern = intern;
}

void	OfficeBlock::setSigner(Bureaucrat *signer)
{
	_signer = signer;
}

void	OfficeBlock::setExecutor(Bureaucrat *executor)
{
	_executor = executor;
}

void	OfficeBlock::doBureaucracy(const std::string& formName, const std::string& target) const
{
	std::exception_ptr eptr;

	if (!teamIsFull()) {
		throw OfficeBlock::TeamNotFullException();
	}
	try
	{
		Form	*form = _intern->makeForm(formName, target);
		_signer->signForm(*form);
		_executor->executeForm(*form);
	}
	catch (std::exception& e)
	{
		eptr = std::current_exception();
		std::rethrow_exception(eptr);
	}
}

bool	OfficeBlock::teamIsFull() const
{
	if (_intern && _executor && _signer) {
		return (true);
	}
	return (false);
}

const char*	OfficeBlock::TeamNotFullException::what() const throw()
{
	return ("TeamNotFullException");
}
