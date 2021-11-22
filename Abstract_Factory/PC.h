#pragma once
#include "Box.h"
#include "Memory.h"
#include "Processor.h"
#include "MainBoard.h"
#include "HDD.h"
//Класс, описывающий компьютер и его составляющие 
class PC
{
	Box* box;
	Processor* processor;
	MainBroad* mainbord;
	HDD* hdd;
	Memory* memory;
public:
	//Конструктор
	PC()
	{
		cout << "PC Constructor: " << this << endl;
		box = nullptr; processor = nullptr;
		mainbord = nullptr; hdd = nullptr;
		memory = nullptr;
	}
	//Деструктор
	virtual ~PC()
	{
		if (box)
			delete box;
		if (processor)
			delete processor;
		if (mainbord)
			delete mainbord;
		if (hdd)
			delete hdd;
		if (memory)
			delete memory;
	}

	//get функция для Box*
	Box* getBox()const
	{
		return box;
	}
	//set функция для Box*
	void setBox(Box* box)
	{
		this->box = box;
	}

	//get функция для Processor*
	Processor* getProcessor()const
	{
		return processor;
	}
	//set функция для Processor*
	void setProcessor(Processor* processor)
	{
		this->processor = processor;
	}

	//get функция для MainBroad*
	MainBroad* getMainBroad()const
	{
		return mainbord;
	}
	//set функция для MainBroad*
	void setMainBroad(MainBroad* mainBroad)
	{
		this->mainbord = mainBroad;
	}

	//get функция для HDD*
	HDD* getHDD()const
	{
		return hdd;
	}
	//set функция для HDD*	
	void setHDD(HDD* hdd)
	{
		this->hdd = hdd;
	}

	//get функция для Memory*
	Memory* getMemory()const
	{
		return memory;
	}
	//set функция для Memory*
	void setMemory(Memory* memory)
	{
		this->memory = memory;
	}

	//Вывод информации о PC
	void print()const
	{
		cout << "================================================\n"
			 << "             Information about PC               \n"
			 << "================================================\n";
		cout << "Box: " << box->getName() << endl;
		cout << "Processor: " << processor->getName() << endl;
		cout << "Mainboard: " << mainbord->getName() << endl;
		cout << "HDD: " << hdd->getName() << endl;
		cout << "Memory: " << memory->getName() <<"\n\n";
	}
};