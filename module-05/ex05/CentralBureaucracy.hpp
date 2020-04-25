#ifndef CENTRALBUREAUCRACY_H
#define CENTRALBUREAUCRACY_H

#include "OfficeBlock.hpp"

class CentralBureaucracy
{
private:
	struct Queue {
		std::string name;
		bool		done;
		Queue* next;
	};

	OfficeBlock		_offices[20];
	Intern*			_ptr[20];
	Queue*			_queue;
	std::string		_form_names[3];

	CentralBureaucracy(const CentralBureaucracy& obj);
	CentralBureaucracy& operator=(const CentralBureaucracy& obj);

	Queue*			getNextPerson();
public:
	CentralBureaucracy();
	~CentralBureaucracy();

	void	feed(Bureaucrat* bureaucrat);
	void	queueUp(const std::string& name);
	void	doBureaucracy();

};

#endif