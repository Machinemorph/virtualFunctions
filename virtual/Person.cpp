#include "stdafx.h"
#include "Person.h"


Person::Person()
{
	this->Add();
}

Person::Person(string n)
{
	name = n;
	this->Add();
}


Person::~Person()
{
}

void Person::print()
{
	Person::print(Person::begin);
}

void Person::print(Person *a)
{
	if (a->next != nullptr) Person::print(a->next);
	a->show();
	cout << endl;
}

void Person::clearList()
{
	Person::clearMember(Person::begin);
	begin = nullptr;
}

void Person::clearMember(Person *a)
{
	if (a->next != nullptr) {
		Person::clearMember(a->next);
		a->next = nullptr;
	}
}

void Person::Add()
{
	next = Person::begin;
	Person::begin = this;
}
