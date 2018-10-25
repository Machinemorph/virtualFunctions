#include "stdafx.h"
#include "Lecturer.h"


Lecturer::Lecturer() : Person()
{
	hours = 0;
}

Lecturer::Lecturer(int h) : Person()
{
	hours = h;
}

Lecturer::~Lecturer()
{
}

void Lecturer::show()
{
	cout << "Преподаватель\nВедёт " << hours << " часов\n";
}
