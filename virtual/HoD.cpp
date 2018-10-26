#include "stdafx.h"
#include "HoD.h"


HoD::HoD() : Lecturer()
{
	subs_num = 0;
}

HoD::HoD(string n, int h, int s) : Lecturer(n, h)
{
	//name = n;
	subs_num = s;
}


HoD::~HoD()
{
}

void HoD::show()
{
	cout << "Заведующий кафедрой\n" << name << "\nВедёт " << hours << " часов\nИмеет " << subs_num << " подчинённых\n";
}
