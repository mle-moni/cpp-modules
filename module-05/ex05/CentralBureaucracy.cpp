#include "CentralBureaucracy.hpp"
#include <ctime>
#include <cstdlib>

struct Queue;

CentralBureaucracy::CentralBureaucracy()
{
	for (int i = 0; i < 20; i++) {
		_ptr[i] = new Intern();
		_offices[i].setIntern(_ptr[i]);
	}
	_queue = nullptr;
	_form_names[0] = "shrubbery creation";
	_form_names[1] = "robotomy request";
	_form_names[2] = "presidential pardon";
	std::srand(std::time(NULL));
}

CentralBureaucracy::CentralBureaucracy(const CentralBureaucracy& obj)
{
	(void)obj;
}

CentralBureaucracy::~CentralBureaucracy()
{
	for (int i = 0; i < 20; i++) {
		delete _ptr[i];
	}
	Queue* tmp;
	while (_queue)
	{
		tmp = _queue->next;
		delete _queue;
		_queue = tmp;
	}
}

CentralBureaucracy& CentralBureaucracy::operator=(const CentralBureaucracy& obj)
{
	(void)obj;
	return (*this);
}

void	CentralBureaucracy::feed(Bureaucrat* bureaucrat)
{
	for (int i = 0; i < 20; i++) {
		int team = _offices[i].teamIsFull();
		if (team != 3) {
			if (team == 1) {
				_offices[i].setSigner(bureaucrat);
			} else {
				_offices[i].setExecutor(bureaucrat);
			}
			return ;
		}
	}
	std::cout << "No seats available" << std::endl;
	return ;
}

void	CentralBureaucracy::queueUp(const std::string& name)
{
	if (!_queue) {
		_queue = new Queue();
		_queue->done = false;
		_queue->name = name;
		_queue->next = nullptr;
		return ;
	}

	Queue* lst = _queue;
	while (lst && lst->next)
	{
		lst = lst->next;
	}
	lst->next = new Queue();
	lst->next->done = false;
	lst->next->name = name;
	lst->next->next = nullptr;
}

CentralBureaucracy::Queue*	CentralBureaucracy::getNextPerson()
{
	Queue* lst = _queue;
	while (lst)
	{
		if (lst->done == false) {
			return (lst);
		}
		lst = lst->next;
	}
	return (nullptr);
}

void	CentralBureaucracy::doBureaucracy()
{
	Queue*	next_client;
	int 	random_int;
	int		i = 0;

	while ((next_client = getNextPerson()))
	{
		random_int = std::rand() % 3;
		while (i < 20)
		{
			if (_offices[i].teamIsFull() == 3) {
				try
				{
					_offices[i].doBureaucracy(_form_names[random_int], next_client->name);
				}
				catch (std::exception& e)
				{
					std::cout << "Error while bureaucracing: " << e.what() << std::endl;
				}
				next_client->done = true;
				i++;
				i %= 20;
				break ;
			}
			if (i == 0) {
				std::cout << "Offices are empty!" << std::endl;
				return ;
			}
			i = 0;
		}
	}
}
