#pragma once
#include "PCParts.h"
//Класс, описывающий HDD компьютера
class HDD : public PCParts
{
	int size;

public:
	//Конструктор
	HDD(string name = "\0", float height = 0.0, float width = 0.0, string color = "\0",
		int size = 0)
		:PCParts(name, height, width), size{size}
	{
		cout << "HDD Constructor: " << this << endl;
	}
	//Деструктор
	~HDD()
	{
		cout << "HDD Destructor: " << this << endl;
	}
};