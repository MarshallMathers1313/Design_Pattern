#pragma once
#include "PC.h"

class Factory
{
protected:
	virtual MotherBoard* createBoard() = 0;
	virtual RAM* createRAM() = 0;
	virtual CPU* createCPU() = 0;
public:
	//factory method
	virtual PC* configurator() = 0;
};

class PCHomeFactory : public Factory
{
	PCHome* pc = nullptr;
protected:

	MotherBoard* createBoard()override
	{
		return new MotherBoard("ASUS 543 - Home");
	}

	RAM* createRAM()override
	{
		return new RAM("DDR3 1300");
	}

	CPU* createCPU()override
	{
		return new CPU("Intel Core i-3 4500");
	}

public:
	//factory method
	PC* configurator()override
	{
		pc = new PCHome;
		pc->setMotherBoard(createBoard());
		pc->setRAM(createRAM());
		pc->setCPU(createCPU());
		return pc;
	}

	~PCHomeFactory()
	{
		if (pc)
		{
			delete pc;
			pc = nullptr;
		}
	}
};

class PCOfficeFactory:public Factory
{
	PCOffice* pc = nullptr;

protected:
	MotherBoard* createBoard()override
	{
		return new MotherBoard("ASUS 989 - OFFICE");
	}

	RAM* createRAM()override
	{
		return new RAM("DDR3 1600");
	}

	CPU* createCPU()override
	{
		return new CPU("Intel Core i-5 4500");
	}

	DVD* createDVD()
	{
		return new DVD("DVD OFFICE");
	}

public:
	//factory method
	PC* configurator()override
	{
		pc = new PCOffice;
		pc->setMotherBoard(createBoard());
		pc->setRAM(createRAM());
		pc->setCPU(createCPU());
		pc->setDVD(createDVD());
		
		return pc;
	}

	//Деструктор
	~PCOfficeFactory()
	{
		if (pc)
		{
			delete pc;
			pc = nullptr;
		}
	}
};

class PCGamingFactory:public Factory
{
	PCGaming* pc = nullptr;
protected:

	MotherBoard* createBoard()override
	{
		return new MotherBoard("ASUS 999 - Gaming");
	}

	RAM* createRAM()override
	{
		return new RAM("DDR5 3200");
	}

	CPU* createCPU()override
	{
		return new CPU("Intel Core i-9 11500");
	}

	VideoCard* createCard()
	{
		return new VideoCard("GeForce 9898 Gaming");
	}
	
public:
	//factory method
	PC* configurator()override
	{
		pc = new PCGaming;
		pc->setMotherBoard(createBoard());
		pc->setRAM(createRAM());
		pc->setCPU(createCPU());
		pc->setCard(createCard());
		return pc;
	}

	~PCGamingFactory()
	{
		if (pc)
		{
			delete pc;
			pc = nullptr;
		}
	}
};