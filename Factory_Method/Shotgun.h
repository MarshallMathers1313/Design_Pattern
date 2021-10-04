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
   * Реализация фабричного метода.
   * Создает экземпляр пули,
   * специфический для текущего типа оружия.
	*/
	AbstractBullet* CreateBullet()
	{
		return new ShotgunBullet();
	}
};