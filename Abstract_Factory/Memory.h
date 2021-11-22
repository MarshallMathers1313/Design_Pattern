#pragma once
#include "PCParts.h"
//Класс, описывающий HDD компьютера
class Memory : public PCParts
{
	//частота
	float frequency;

public:
	//Конструктор
	Memory(string name = "\0", float height = 0.0, float width = 0.0, string color = "\0",
		float frequency = 0.0)
		:PCParts(name, height, width), frequency{ frequency }
	{
		cout << "Memory Constructor: " << this << endl;
	}
	//Деструктор
	~Memory()
	{
		cout << "Memory Destructor: " << this << endl;
	}
};