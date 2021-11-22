#pragma once
#include "PCFactory.h"
#include "PC.h"

//Класс Конфигуратор
class PCConfigurator
{
	//Фабрика составляющих персонального компьютера
	PCFactory* pcFactory;
public:
	PCConfigurator()
	{
		cout << "PCConfigurator Constructor: " << this << endl;
		pcFactory = nullptr;
	}
	~PCConfigurator()
	{
		cout << "PCConfigurator Destructor: " << this << endl;
		if (pcFactory)
			delete pcFactory;
	}

	//get функция для PCFactory*
	PCFactory* getPCFactory()const
	{
		return pcFactory;
	}
	//set функция для PCFactory*
	void setPCFactory(PCFactory* pcFactory)
	{
		this->pcFactory = pcFactory;
	}

	//Метод конфигурирования ситемного блока
	void Configure(PC* pc)
	{
		pc->setBox(pcFactory->createBox());
		pc->setMainBroad(pcFactory->createMainBroad());
		pc->setHDD(pcFactory->createHDD());
		pc->setMemory(pcFactory->createMemory());
		pc->setProcessor(pcFactory->createProcessor());
	}
};