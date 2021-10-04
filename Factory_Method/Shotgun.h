#pragma once
#include "AbstractWeapon.h"
#include "ShotgunBullet.h"
class Shotgun : public AbstractWeapon
{
public:
	Shotgun() {
		this->setCaliber(50);
	}
protected:
	/*
   * ���������� ���������� ������.
   * ������� ��������� ����,
   * ������������� ��� �������� ���� ������.
	*/
	AbstractBullet* CreateBullet()
	{
		return new ShotgunBullet();
	}
};