#pragma once
#include "PCParts.h"
//Класс, описывающий процессор компьютера
class Processor : public PCParts
{
	//Тактовая частота
	float clockFrequency;
	//Ядро
	string core;
	//Кеш память
	float cacheMemory;

public:
	//Конструктор
	Processor(string name = "\0", float height = 0.0, float width = 0.0, string color = "\0",
		float clockFrequency = 0.0, string core = "\0", float cacheMemory = 0.0)
		:PCParts(name, height, width), clockFrequency{ clockFrequency },
		core{core}, cacheMemory{cacheMemory}
	{
		cout << "Processor Constructor: " << this << endl;
	}
	//Деструктор
	~Processor()
	{
		cout << "Processor Destructor: " << this << endl;
	}
};