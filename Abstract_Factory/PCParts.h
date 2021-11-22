#pragma once
#include <iostream>
using namespace std;
//Абстрактный класс, описывающий части компьютера
class PCParts
{
protected:
	string name;
	float height;
	float width;

public:
	//Конструктор
	PCParts(string name = "\0", float height = 0.0, float width = 0.0)
		:name{name}, height{height}, width{ width } {}
	//Деструктор
	virtual ~PCParts() = 0;

	//get функции
	string getName()const
	{
		return name;
	}
	float getHeight()const
	{ 
		return height; 
	}
	float getWidth()const
	{
		return width;
	}
};
PCParts::~PCParts(){}