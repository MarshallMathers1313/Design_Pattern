#pragma once
#include "PCParts.h"
//Класс, описывающий материнку компьютера
class MainBroad: public PCParts
{
	string socket;
	string memoryType;
	int speed;

public:
	//Конструктор
	MainBroad(string name = "\0", float height = 0.0, float width = 0.0, string color = "\0", 
		string soket = "\0", string memoryType = "\0", int speed = 0)
		:PCParts(name, height, width), socket{socket}, memoryType{memoryType}, speed{speed}
	{
		cout << "MainBroad Constructor: " << this << endl;
	}
	//Деструктор
	~MainBroad()
	{
		cout << "MainBroad Destructor: " << this << endl;
	}
};