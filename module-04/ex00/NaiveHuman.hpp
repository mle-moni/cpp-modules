#ifndef NAIVEHUMAN_H
#define NAIVEHUMAN_H

#include "Victim.hpp"

class NaiveHuman: public Victim
{
private:
	NaiveHuman();
public:
	NaiveHuman(const char* p_name);
	NaiveHuman(const NaiveHuman& obj);
	~NaiveHuman();
	NaiveHuman& operator=(const NaiveHuman& obj);

	void			getPolymorphed() const;
};

#endif