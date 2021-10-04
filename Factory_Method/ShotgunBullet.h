#pragma once
#include "Bullet.h"
class ShotgunBullet : public AbstractBullet
{
public:
	//�����������
	ShotgunBullet()
	{
		cout << "ShotgunBullet Constructor: " << this << endl;
	}
	//����������
	~ShotgunBullet()
	{
		cout << "ShotgunBullet Destructor: " << this << endl;
	}

	/*
	* ����� ��������� ����.
	* ��� ��� ������ ���� ���� �������� ���� ���������,
	 �� ����� ������ ���� ���������� � ����������.
	*/
	virtual void HitTarget()override
	{
		cout << "Hit by shotgun ballet\n";
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