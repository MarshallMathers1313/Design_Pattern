#pragma once
#include "Bullet.h"
#include "Point3D.h"
#include "Vector3D.h"
class AbstractWeapon
{
	Point3D location;
	Vector3D direction;
	double caliber;

protected:
	virtual AbstractBullet* createBullet() = 0;

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

	AbstractBullet* shoot()
	{
		AbstractBullet* abstractBullet = createBullet();
		abstractBullet->setCaliber(this->getCaliber());
		abstractBullet->setLocation(this->getLocation());
		abstractBullet->setDirection(this->getDirection());
		abstractBullet->StartMovement();
		return abstractBullet;
	}

};