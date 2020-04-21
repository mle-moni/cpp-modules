#ifndef VICTIM_H
#define VICTIM_H

#include <iostream>

class Victim
{
protected:
	Victim();
	std::string		name;
public:
	Victim(const char* p_name);
	Victim(const Victim& obj);
	~Victim();
	Victim& operator=(const Victim& obj);

	const std::string&	getName() const;
	virtual void		getPolymorphed() const;
};

std::ostream& operator<<(std::ostream& stream, const Victim& obj);

#endif