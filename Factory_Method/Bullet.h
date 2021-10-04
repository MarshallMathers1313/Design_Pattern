#pragma once
#include "Point3D.h"
#include "Vector3D.h"
using namespace std;

//Класс абстрактной пули
class AbstractBullet
{
	Point3D location;
	Vector3D direction;
	double caliber;

public:
	//Конструктор
	AbstractBullet()
	{
		cout << "AbstractBullet Constructor: " << this << endl;
	}
	//Деструктор
	~AbstractBullet()
	{
		cout << "AbstractBullet Destructor: " << this << endl;
	}

	//текующая положение пули
	Point3D getLocation()const
	{
		return location;
	}
	//set функция для положение пути
	void setLocation(const Point3D& point)
	{
		this->location = point;
	}

	//текующая напрвление
	Vector3D getDirection()const
	{
		return direction;
	}
	//set функция для текующей напрвление
	void setDirection(const Vector3D& vector)
	{
		this->direction = vector;
	}

	//get функция для колибры
	double getCaliber()const
	{
		return caliber;
	}
	//set функция для колибры
	void setCaliber(double newCaliber)
	{
		this->caliber = newCaliber;
	}

	//Начало движение пули
	void StartMovement()
	{
		//Реализация начало пути...
	}

	/*
	* Метод поражения цели.
	* Так как разные типы пуль поражают цель поразному,
	 то метод должен быть реализован в подклассах.
	*/
	virtual void HitTarget() = 0;
	
	/*
	* Метод, реализующий движение пули.
	* Так как разные типы пуль имеют разную траекторию
	* движения, то метод должен быть реализован
	* в подклассах.
	*/
	virtual void Movement() = 0;
};