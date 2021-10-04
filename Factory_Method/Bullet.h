#pragma once
#include "Point3D.h"
#include "Vector3D.h"
using namespace std;

//����� ����������� ����
class AbstractBullet
{
	Point3D location;
	Vector3D direction;
	double caliber;

public:
	//�����������
	AbstractBullet()
	{
		cout << "AbstractBullet Constructor: " << this << endl;
	}
	//����������
	~AbstractBullet()
	{
		cout << "AbstractBullet Destructor: " << this << endl;
	}

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

	//������ �������� ����
	void StartMovement()
	{
		//���������� ������ ����...
	}

	/*
	* ����� ��������� ����.
	* ��� ��� ������ ���� ���� �������� ���� ���������,
	 �� ����� ������ ���� ���������� � ����������.
	*/
	virtual void HitTarget() = 0;
	
	/*
	* �����, ����������� �������� ����.
	* ��� ��� ������ ���� ���� ����� ������ ����������
	* ��������, �� ����� ������ ���� ����������
	* � ����������.
	*/
	virtual void Movement() = 0;
};