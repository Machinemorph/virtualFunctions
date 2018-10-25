#pragma once
#include "Lecturer.h"
class HoD :
	public Lecturer
{
public:
	HoD();
	HoD(int, int);
	virtual ~HoD();
	void show();
protected:
	int subs_num;
};

