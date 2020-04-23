#ifndef CURE_H
#define CURE_H

#include "AMateria.hpp"

class Cure: virtual public AMateria
{
private:
	/* data */
public:
	Cure();
	Cure(const Cure& obj);
	~Cure();
	Cure& operator=(const Cure& obj);

	AMateria* clone() const;
	void use(ICharacter& target);
};

#endif