#pragma once
#include <iostream>
using namespace std;
//������ � ���������� ������������
	//������������ ��� ����������� �����������.
class Vector3D
{
public:
	Vector3D()
	{
		cout << "Vector3D Constructor: " << this << endl;
	}
	~Vector3D()
	{
		cout << "Vector3D Destructor: " << this << endl;
	}
};