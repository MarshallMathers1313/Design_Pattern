#include "Product.h"
#include "Creator.h"

void menu()
{
	cout << "===================================\n";
	cout << "1 - Create first product\n";
	cout << "2 - Create second product\n";
	cout << "0 - Exit\n";
	cout << "===================================\n";
	cout << "\nInput your choice: ";
}

int main()
{
	Product* product = nullptr;
	Creator* creator = nullptr;

	int choice;

	do
	{
		menu();
		cin >> choice;

		switch (choice)
		{

		case 1:
			creator = new Creator1;
			product = creator->createProduct();
			cout << product->doStuff() << endl;
			break;

		case 2:
			creator = new Creator2;
			product = creator->createProduct();
			cout << product->doStuff() << endl;
			break;

		case 0:
			cout << "Good bye!\n";
			break;

		default:
			cout << "Incorrect operation\n";
			break;
		}

		if (creator)
		{
			delete creator;
			creator = nullptr;
		}
		if (product)
		{
			delete product;
			product = nullptr;
		}

	}while (choice != 0);


	return 0;
}