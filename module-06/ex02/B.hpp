#ifndef B_H
#define B_H

#include "Base.hpp"

class B: public Base
{
private:
	/* data */
public:
	B();
	B(const B& obj);
	~B();
	B& operator=(const B& obj);
};

#endif