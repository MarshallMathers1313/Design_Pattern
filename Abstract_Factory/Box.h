#pragma once
#include "PCParts.h"
//Класс, описывающий блок компьютера
class Box : public PCParts
{
	string color;
	
public:
	//Конструктор
	Box(string name = "\0", float height = 0.0, float width = 0.0, string color = "\0")
		:PCParts(name, height, width), color{color}
	{
		cout << "Box Constructor: " << this << endl;
	}
	//Деструктор
	~Box()
	{
		cout << "Box Destructor: " << this << endl;
	}
};