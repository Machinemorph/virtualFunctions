#pragma once
#include "Person.h"
class Student :
	virtual public Person
{
protected:
	int classes;
	int missedClasses;
public:
	Student();
	Student(int, int);
	virtual ~Student();
	void show();

};

