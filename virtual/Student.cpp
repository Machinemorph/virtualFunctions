#include "stdafx.h"
#include "Student.h"


Student::Student() : Person()
{
	classes = 0;
	missedClasses = 0;
}

Student::Student(int cl, int misdCl) : Person()
{
	classes = cl;
	missedClasses = misdCl;
}


Student::~Student()
{
}

void Student::show()
{
	cout << "Студент\nПропустил " << missedClasses << " занятий из " << classes << endl;
}
