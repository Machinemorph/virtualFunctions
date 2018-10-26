#pragma once
#include "Person.h"
class Lecturer :
	public Person
{
public:
	Lecturer();
	Lecturer(string, int);
	~Lecturer();
	void show();
protected:
	int hours;
};

