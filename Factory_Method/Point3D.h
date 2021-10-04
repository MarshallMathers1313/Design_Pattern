#pragma once
#include <iostream>
using namespace std;
//����� ��� ���������� ������������
	//������������ ��� ����������� ���������.
class Point3D
{
public:
	int x, y, z;

	//�����������
	Point3D(int x = 0, int y = 0, int z = 0)
		:x{ x }, y{ y }, z{ z }
	{
		cout << "Point3D Constructor: " << this << endl;
	}
	//����������
	~Point3D()
	{
		cout << "Point3D Destructor: " << this << endl;
	}
};