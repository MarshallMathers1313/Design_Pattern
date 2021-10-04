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

	//�������� ��������� ����
	Point3D getLocation()const
	{
		return location;
	}
	//set ������� ��� ��������� ����
	void setLocation(const Point3D& point)
	{
		this->location = point;
	}

	//�������� ����������
	Vector3D getDirection()const
	{
		return direction;
	}
	//set ������� ��� �������� ����������
	void setDirection(const Vector3D& vector)
	{
		this->direction = vector;
	}

	//get ������� ��� �������
	double getCaliber()const
	{
		return caliber;
	}
	//set ������� ��� �������
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