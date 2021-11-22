#include "PC.h"
#include "HomePCFactory.h"
#include "OfficePCFactory.h"
#include "PCConfigurator.h"
using namespace std;
void menu()
{
	cout << "\nIf you do you want buy \"home\" PC, please enter - 1\n";
	cout << "If you do you want buy \"office\" PC, please enter - 2\n";
	cout << "If you do you want close program, please enter - 0\n";
	cout << "Input your choice: ";
}
int main()
{
	cout << "===================================================\n"
		 << "             Welcome to Computer Market!           \n"
		 << "===================================================\n";
	
	int key = 0;
	PCConfigurator pcConfigurator;
	do
	{
		menu();
		cin >> key;

		if (key == 1)
		{
			PC pc1;
			pcConfigurator.setPCFactory(new HomePCFactory());
			pcConfigurator.Configure(&pc1);
			pc1.print();
		}
		else if (key == 2)
		{
			PC pc2;
			pcConfigurator.setPCFactory(new OfficePCFactory());
			pcConfigurator.Configure(&pc2);
			pc2.print();
		}
		else
		{
			cout << "\nGOODBYE!\n";
		}
	} while (key != 0);


	return 0;
}