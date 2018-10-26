#include "stdafx.h"
#include "Lecturer.h"


Lecturer::Lecturer() : Person()
{
	hours = 0;
}

Lecturer::Lecturer(string n, int h) : Person(n)
{
	hours = h;
}

Lecturer::~Lecturer()
{
}

void Lecturer::show()
{
	cout << "�������������\n" << name << "\n���� " << hours << " �����\n";
}
