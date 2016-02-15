/*********************************************************************
** Program Filename: main.cpp
** Author: Giovanni Rosati
** email: rosatig@oregonstate.edu
** Date: 2016-02-15
** Description: file with main() for CS162_400 Lab06 project
*********************************************************************/

#include <cstdlib>
#include <iostream>
#include "singleNode.hpp"
#include "doubleNode.hpp"

using std::cout;
using std::cin;
using std::endl;

void menu();

int main()
{
	int menuOne = 0;
	int menuTwo = 0;
	int intValue;
	singleNode* shead = NULL;
	doubleNode* dhead = NULL;

	while (menuOne != 1 && menuOne != 2 && menuOne != 3)
	{
		cout << "*******************************************" << endl;
		cout << "  Do you want to create a STACK or a QUE?  " << endl;
		cout << "                                           " << endl;
		cout << "    Enter 1 for a stack or 2 for a QUE     " << endl;
		cout << "               or 3 to exit                " << endl;
		cout << "*******************************************" << endl;
		cin >> menuOne;
	}

	while (menuOne != 3)	//execute the program
	{
		while (menuOne == 1)	//single linked list
		{
			menu();
			cin >> menuTwo;
			cout << endl;
			cout << endl;

			switch (menuTwo)
			{
			case 1:
				displayS(shead);
				break;
			case 2:
				std::cout << "Enter value: ";
				cin >> intValue;
				addNodeS(shead, intValue);
				break;
			case 3:
				removeNodeS(shead);
				break;
			case 4:
				menuOne = 3;
				break;
			}
		}

		while (menuOne == 2)				//double linked list
		{
			menu();
			cin >> menuTwo;
			cout << endl;
			cout << endl;

			switch (menuTwo)
			{
			case 1:
				displayD(dhead);
				break;
			case 2:
				std::cout << "Enter value: ";
				cin >> intValue;
				addNodeD(dhead, intValue);
				break;
			case 3:
				removeNodeD(dhead);
				break;
			case 4:
				menuOne = 3;
				break;
			}
		}
	}
	//exit program
	cin.ignore();
	cout << "Press enter to exit." << endl;
	cin.get();
	cout << endl;
	cout << endl;
	cout << "Goodbye...";
	cout << "*******************************************" << endl;
	cout << "********************************" << endl;
	cout << "***********************" << endl;
	cout << "**************" << endl;
	cout << "*****" << endl;
	return 0;
}

void menu()
{
	cout << "*******************************************" << endl;
	cout << endl;
	cout << "Enter 1 to display the list" << endl;
	cout << "Enter 2 to add an int to the list" << endl;
	cout << "Enter 3 to remove the last item from the list" << endl;
	cout << "Enter 4 to end the program" << endl;
	cout << endl;
	cout << "*******************************************" << endl;
	cout << "Your selection: ";
}