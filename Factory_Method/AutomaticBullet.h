#pragma once
#include "Bullet.h"
class AutomaticBullet: public AbstractBullet
{
public:
	//Конструктор
	AutomaticBullet()
	{
		cout << "AutomaticBullet Constructor: " << this << endl;
	}
	//Деструктор
	~AutomaticBullet()
	{
		cout << "AutomaticBullet Destructor: " << this << endl;
	}

	/*
	* Метод поражения цели.
	* Так как разные типы пуль поражают цель поразному,
	 то метод должен быть реализован в подклассах.
	*/
	virtual void HitTarget()override
	{
		cout << "Hit by automatic ballet\n";
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