#pragma once
#include "Person.h"
class Lecturer :
	virtual public Person
{
public:
	Lecturer();
	Lecturer(int);
	virtual ~Lecturer();
	void show();
protected:
	int hours;
};

