#pragma once
#include <iostream>
using namespace std;

class MotherBoard
{
	string name;
public:
	
	MotherBoard(string name = "\0")//Конструктор
		:name{ name } {}
	
	void setName(string name)//Set для Name
	{
		this->name = name;
	}

	string getName()const//Get для Name
	{
		return name;
	}
};

class CPU
{
	string name;
public:

	CPU(string name = "\0")//Конструктор
		:name{ name } {}

	void setName(string name)//Set для Name
	{
		this->name = name;
	}

	string getName()const//Get для Name
	{
		return name;
	}
};

class RAM
{
	string name;
public:

	RAM(string name = "\0")//Конструктор
		:name{ name } {}

	void setName(string name)//Set для Name
	{
		this->name = name;
	}

	string getName()const//Get для Name
	{
		return name;
	}
};

class DVD
{
	string name;
public:

	DVD(string name = "\0")//Конструктор
		:name{ name } {}

	void setName(string name)//Set для Name
	{
		this->name = name;
	}

	string getName()const//Get для Name
	{
		return name;
	}
};

class VideoCard
{
	string name;
public:

	VideoCard(string name = "\0")//Конструктор
		:name{ name } {}

	void setName(string name)//Set для Name
	{
		this->name = name;
	}

	string getName()const//Get для Name
	{
		return name;
	}
};