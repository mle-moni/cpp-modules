#ifndef BASE_H
#define BASE_H

class Base
{
private:
	/* data */
public:
	Base();
	Base(const Base& obj);
	virtual ~Base();
	Base& operator=(const Base& obj);
};

#endif