#include "stdafx.h"
#include "Student.h"


Student::Student() : Person()
{
	classes = 0;
	missedClasses = 0;
}

Student::Student(string n, int cl, int misdCl) : Person(n)
{
	classes = cl;
	missedClasses = misdCl;
}


Student::~Student()
{
}

void Student::show()
{
	cout << "�������\n" << name << "\n��������� " << missedClasses << " ������� �� " << classes << endl;
}
