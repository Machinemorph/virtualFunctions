#pragma once
class Person
{
public:
	Person();
	Person(string);
	virtual ~Person();
	static Person* begin;
	static void print();
	static void print(Person*);
	static void clearList();
	static void clearMember(Person*);
	virtual void show() = 0;
	void Add();
protected:
	string name;
	Person * next;
};

