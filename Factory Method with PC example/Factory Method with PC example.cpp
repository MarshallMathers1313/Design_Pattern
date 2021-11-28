#include "Parts.h"
#include "Factory.h"

void menu()
{
	cout << "==================================\n";
	cout << "1 - Create Home PC\n";
	cout << "2- Create Office PC\n";
	cout << "3 - Gaming PC\n";
	cout << "0 - Exit\n";
	cout << "==================================\n";
	cout << "Input your choice: ";
}

int main()
{
	PC* pc = nullptr;
	Factory* factory = nullptr;

	int choice;

	do
	{
 		menu();
		cin >> choice;

		switch (choice)
		{
		case 1:
			factory = new PCHomeFactory();
			pc = factory->configurator();
			pc->print();
			break;
		case 2:
			factory = new PCOfficeFactory();
			pc = factory->configurator();
			pc->print();
			break;
		case 3:
			factory = new PCGamingFactory();
			pc = factory->configurator();
			pc->print();
			break;
		case 0: 
			cout << "Good Bye\n";
			break;
		default:
			cout << "Incorrect operation\n";
			break;
		}

		if (factory)
		{
			delete factory;
			factory = nullptr;
		}
		if (pc)
		{
			delete pc;
			pc = nullptr;
		}

	} while (choice != 0);

	return 0;
}