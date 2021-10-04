#pragma once
#include "Bullet.h"
class ShotgunBullet : public AbstractBullet
{
public:
	//Конструктор
	ShotgunBullet()
	{
		cout << "ShotgunBullet Constructor: " << this << endl;
	}
	//Деструктор
	~ShotgunBullet()
	{
		cout << "ShotgunBullet Destructor: " << this << endl;
	}

	/*
	* Метод поражения цели.
	* Так как разные типы пуль поражают цель поразному,
	 то метод должен быть реализован в подклассах.
	*/
	virtual void HitTarget()override
	{
		cout << "Hit by shotgun ballet\n";
	}

	/*
	* Метод, реализующий движение пули.
	* Так как разные типы пуль имеют разную траекторию
	* движения, то метод должен быть реализован
	* в подклассах.
	*/
	virtual void Movement()override
	{
		//Реализация алгоритма движения пули
	}
};