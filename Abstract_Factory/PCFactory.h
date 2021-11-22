#pragma once
#include "Box.h"
#include "HDD.h"
#include "MainBoard.h"
#include "Memory.h"
#include "Processor.h"

//Абстрактный класс фабрика для создания конфигурации
//системного блока персонального компьютера
class PCFactory
{
public:
	//Конструктор
	PCFactory()
	{
		cout << "PCFactory Constructor: " << this << endl;
	}
	//Деструктор
	~PCFactory()
	{
		cout << "PCFactory Destructor: " << this << endl;
	}

	virtual Box* createBox() = 0;
	virtual Processor* createProcessor() = 0;
	virtual MainBroad* createMainBroad() = 0;
	virtual HDD* createHDD() = 0;
	virtual Memory* createMemory() = 0;
};