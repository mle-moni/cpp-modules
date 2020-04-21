#ifndef PEON_H
#define PEON_H

#include "Victim.hpp"

class Peon: public Victim
{
private:
	Peon();
public:
	Peon(const char* p_name);
	Peon(const Peon& obj);
	~Peon();
	Peon& operator=(const Peon& obj);

	void			getPolymorphed() const;
};

#endif