#include <iostream>
using namespace std;
int main()
{
	cout << "------------------------------------";
	cout << "\n"
		 << "| Name: FINAL PROJECT              |";
	cout << "\n"
		 << "| Section: ITE11S2                 |";
	cout << "\n"
		 << "------------------------------------";
	int num, trans, ctr, sum = 0, suma = 0, ord;
	float avg;
	cout << "\n\n WELCOME TO THE AUTOMATED PIZZA STORE!!!";
	cout << "\n MENU"
		 << "\n 1.PIZZA"
		 << "\n 2.DRINKS"
		 << "\n 3.ADD-ONS";

	do
	{
		cout << "\n\n Please enter the number of your order: ";
		cin >> trans;
		switch (trans)
		{
		case 1:
			cout << "\n You chose pizza!!"
				 << "\n There three pizzas available: "
				 << "\n 1.Hawaiian"
				 << "\n 2.Bacon"
				 << "\n 3.Pepperoni";
			cout << "\n\n Please enter the corresponding number of your order: ";
			cin >> ord;
			switch (ord)
			{
			case 1:
				cout << "\n You have chosen Hawaiian pizza!!"
					 << "\n There are three pizza size available: "
					 << "\n 1. Solo"
					 << "\n 2. Double"
					 << "\n 3. Family";
				cout << "\n\n Please enter the corresponding number of your order: ";
				cin >> num;
				cout << "\n How many would you like to order?";
				cin >> num;
				break;
			case 2:
				cout << "\n You have chosen Bacon pizza!!"
					 << "\n There are three pizza size available: "
					 << "\n 1. Solo"
					 << "\n 2. Double"
					 << "\n 3. Family";
				cout << "\n\n Please enter the corresponding number of your order: ";
				cin >> num;
				cout << "\n How many would you like to order?";
				cin >> num;
				break;
			case 3:
				cout << "\n You have chosen Pepperoni pizza!!"
					 << "\n There are three pizza size available: "
					 << "\n 1. Solo"
					 << "\n 2. Double"
					 << "\n 3. Family";
				cout << "\n\n Please enter the corresponding number of your order: ";
				cin >> num;
				cout << "\n How many would you like to order?";
				cin >> num;

			}			  // end of switch
		}				  // end of switch
	} while (trans <= 3); //end of do while
} //end of main