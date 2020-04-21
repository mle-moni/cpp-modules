#ifndef SORCERER_H
#define SORCERER_H

#include <iostream>
#include "Victim.hpp"

class Sorcerer
{
private:
	Sorcerer();
	std::string		name;
	std::string		title;
public:
	Sorcerer(const char* p_name, const char* p_title);
	Sorcerer(const Sorcerer& obj);
	~Sorcerer();
	Sorcerer& operator=(const Sorcerer& obj);

	const std::string&	getName() const;
	const std::string&	getTitle() const;

	void polymorph(Victim const &);
};

std::ostream& operator<<(std::ostream& stream, const Sorcerer& obj);

#endif