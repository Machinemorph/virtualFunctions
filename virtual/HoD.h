#pragma once
#include "Lecturer.h"
class HoD :
	public Lecturer
{
public:
	HoD();
	HoD(string, int, int);
	~HoD();
	void show();
protected:
	int subs_num;
};

