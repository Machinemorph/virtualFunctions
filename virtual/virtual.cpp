// virtual.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "Person.h"
#include "Student.h"
#include "Lecturer.h"
#include "HoD.h"

Person* Person::begin = nullptr;

int main()
{
	setlocale(LC_ALL, "Russian");
	Student a("Петров", 5, 3);
	Lecturer b("Иванов", 30);
	HoD c("Васюткин", 25, 3);
	Person::print();
	//system("pause");
	return 0;
}

