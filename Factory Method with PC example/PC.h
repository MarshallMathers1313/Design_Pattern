#pragma once
#include "Parts.h"

class PC
{
protected:
	MotherBoard* mb;
	RAM* ram;
	CPU* cpu;

public:
	void setMotherBoard(MotherBoard* mb)
	{
		this->mb = mb;
	}
	void setRAM(RAM* ram)
	{
		this->ram = ram;
	}
	void setCPU(CPU* cpu)
	{
		this->cpu = cpu;
	}

	MotherBoard* getMotherBoard()const
	{
		return mb;
	}
	RAM* getRAM()const
	{
		return ram;
	}
	CPU* getCPU()const
	{
		return cpu;
	}

	virtual void print() = 0;
};

class PCHome : public PC
{
public:
	void print()override
	{
		cout << "MotherBoard: " << mb->getName() << endl;
		cout << "CPU: " << cpu->getName() << endl;
		cout << "RAM: " << ram->getName() << endl;
	}
};

class PCOffice: public PC
{
	DVD* dvd;

public:
	void setDVD(DVD* dvd)
	{
		this->dvd = dvd;
	}

	DVD* getDVD()const
	{
		return dvd;
	}

	void print()override
	{
		cout << "MotherBoard: " << mb->getName() << endl;
		cout << "CPU: " << cpu->getName() << endl;
		cout << "RAM: " << ram->getName() << endl;
		cout << "DVD: " << dvd->getName() << endl;
	}
};

class PCGaming: public PC
{
	VideoCard* card;
	
public:
	void setCard(VideoCard* card)
	{
		this->card = card;
	}

	VideoCard* getCard()const
	{
		return card;
	}

	void print()override
	{
		cout << "MotherBoard: " << mb->getName() << endl;
		cout << "CPU: " << cpu->getName() << endl;
		cout << "RAM: " << ram->getName() << endl;
		cout << "VideoCard: " << card->getName() << endl;
	}
};