#pragma once
#include "Bullet.h"
class AutomaticBullet: public AbstractBullet
{
public:
	//�����������
	AutomaticBullet()
	{
		cout << "AutomaticBullet Constructor: " << this << endl;
	}
	//����������
	~AutomaticBullet()
	{
		cout << "AutomaticBullet Destructor: " << this << endl;
	}

	/*
	* ����� ��������� ����.
	* ��� ��� ������ ���� ���� �������� ���� ���������,
	 �� ����� ������ ���� ���������� � ����������.
	*/
	virtual void HitTarget()override
	{
		cout << "Hit by automatic ballet\n";
	}

	/*
	* �����, ����������� �������� ����.
	* ��� ��� ������ ���� ���� ����� ������ ����������
	* ��������, �� ����� ������ ���� ����������
	* � ����������.
	*/
	virtual void Movement()override
	{
		//���������� ��������� �������� ����
	}
};