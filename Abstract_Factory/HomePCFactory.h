#pragma once
#include "PCFactory.h"

//Фабрика для создания "домашней" конфигурации
//системного блока персонального компьютера
class HomePCFactory: public PCFactory
{
public:
	//Конструктор
	HomePCFactory()
	{
		cout << "HomePCFactory Constructor: " << this << endl;
	}
	//Деструктор
	~HomePCFactory()
	{
		cout << "HomePCFactory Destructor: " << this << endl;
	}

	Box* createBox()
	{
		return new Box("SilverBox");
	}
	Processor* createProcessor()
	{
		return new Processor("IntelProcessor");
	}
	MainBroad* createMainBroad()
	{
		return new MainBroad("MSIMainBord");
	}
	HDD* createHDD()
	{
		return new HDD("SamsungHDD");
	}
	Memory* createMemory()
	{
		return new Memory("Ddr2Memory");
	}
};