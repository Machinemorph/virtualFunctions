#include "stdafx.h"
#include "HoD.h"


HoD::HoD() : Lecturer()
{
	subs_num = 0;
}

HoD::HoD(int h, int s) : Lecturer(h)
{
	subs_num = s;
}


HoD::~HoD()
{
}

void HoD::show()
{
	cout << "���������� ��������\n���� " << hours << " �����\n����� " << subs_num << " ����������\n";
}
