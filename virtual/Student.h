#pragma once
#include "Person.h"
class Student :
	public Person
{
protected:
	int classes;
	int missedClasses;
public:
	Student();
	Student(string, int, int);
	~Student();
	void show();

};

