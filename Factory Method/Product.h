#pragma once
#include <iostream>
using namespace std;

class Product
{
public:
	//Чисто виртуальная функция
	virtual string doStuff() = 0;
};

class Product1 : public Product
{
public:
	string doStuff()override
	{
		return "Product1";
	}
};

class Product2 : public Product
{
public:
	string doStuff()override
	{
		return "Product2";
	}
};