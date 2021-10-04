#pragma once
#include "AbstractWeapon.h"
#include "AutomaticBullet.h"
class AutomaticWeapon: AbstractWeapon
{
public:
	AutomaticWeapon() {
		this->setCaliber(20);
	}
protected:
	/*
   * ���������� ���������� ������.
   * ������� ��������� ����,
   * ������������� ��� �������� ���� ������.
	*/
	AbstractBullet* CreateBullet() {
		return new AutomaticBullet();
	}
};