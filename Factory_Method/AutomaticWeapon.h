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
   * Реализация фабричного метода.
   * Создает экземпляр пули,
   * специфический для текущего типа оружия.
	*/
	AbstractBullet* CreateBullet() {
		return new AutomaticBullet();
	}
};