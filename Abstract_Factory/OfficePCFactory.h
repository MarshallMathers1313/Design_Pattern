#pragma once
#include "PCFactory.h"

//Фабрика для создания "домашней" конфигурации
//системного блока персонального компьютера
class OfficePCFactory : public PCFactory
{
public:
	//Конструктор
	OfficePCFactory()
	{
		cout << "OfficePCFactory Constructor: " << this << endl;
	}
	//Деструктор
	~OfficePCFactory()
	{
		cout << "OfficePCFactory Destructor: " << this << endl;
	}

	Box* createBox()
	{
		return new Box("BlackBox");
	}
	Processor* createProcessor()
	{
		return new Processor("AMDProcessor");
	}
	MainBroad* createMainBroad()
	{
		return new MainBroad("AsusMainBord");
	}
	HDD* createHDD()
	{
		return new HDD("LGHDD");
	}
	Memory* createMemory()
	{
		return new Memory("DdrMemory");
	}
};