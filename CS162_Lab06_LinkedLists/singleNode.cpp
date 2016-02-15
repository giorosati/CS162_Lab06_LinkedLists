/*********************************************************************
** Program Filename: singleNode.cpp
** Author: Giovanni Rosati
** email: rosatig@oregonstate.edu
** Date: 2016-02-13
** Description: single linked node implementation file CS161_400 Lab06 project
*********************************************************************/

//includes
#include "singleNode.hpp"
#include <cstdlib>
#include <iostream>

//usings
using std::cout;
using std::endl;
using std::cin;

void displayS(singleNode * &shead)
{
	if (shead == NULL)
	{
		cout << "There are no items in the list." << endl;
		cout << endl;
	}
	else
	{
		cout << endl;
		singleNode* tempNode = shead;
		cout << "The list contains: " << endl;
		cout << tempNode->value << endl;	//outputs head node's value
		while (tempNode->next != NULL)
		{
			tempNode = tempNode->next;		//set tempNode to the next node
			cout << tempNode->value << endl;//outputs nodes after head 
		}
		cout << endl;
	}
}


void addNodeS(singleNode* &shead, int valueIn)	//creates a node, adds it to the end of the list
{
	if (shead == NULL)		//case where no nodes exist
	{
		shead = new singleNode;
		shead->value = valueIn;
		shead->next = NULL;
		cout << endl;
	}
	else					//adds a node to the end of the list
	{
		singleNode* lastNode = findLastS(shead);
		lastNode->next = new singleNode;
		lastNode->next->value = valueIn;
		lastNode->next->next = NULL;
		cout << endl;
	}
}


int removeNodeS(singleNode* &shead)				//removes the last node and returns its data
{
	if (shead == NULL)
	{
		cout << "You cannot remove an element from an empty list!" << endl;
		return -999;
		cout << endl;
	}
	else
	{
		singleNode* tempNode = shead; 
		if (tempNode->next == NULL)	//case where only one node exists
		{
			shead = NULL;
			delete tempNode;
		}
		else if (tempNode->next->next == NULL)	//case where only two nodes exits
		{
			tempNode->next = NULL;
			delete tempNode->next;
		}
		else
		{
			{
				while (tempNode->next->next != NULL)
					tempNode = tempNode->next;
			}
			tempNode->next = NULL;
			delete tempNode->next;
		}
	}
	cout << endl;
}


singleNode* findLastS(singleNode* &head)		//returns pointer to last node
{
	singleNode* tempNode = head;
	while (tempNode->next != NULL)
	{
		tempNode = tempNode->next;
	}
	return tempNode;
}


