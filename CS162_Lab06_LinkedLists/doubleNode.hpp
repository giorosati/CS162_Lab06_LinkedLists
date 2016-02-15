/*********************************************************************
** Program Filename: doubleNode.hpp
** Author: Giovanni Rosati
** email: rosatig@oregonstate.edu
** Date: 2016-02-14
** Description: double linked node class header file CS161_400 Lab06 project
*********************************************************************/

#ifndef DOUBLENODE_HPP
#define DOUBLENODE_HPP

struct doubleNode
{

	int value;
	doubleNode* next;
	doubleNode* prev;
};
	void displayD(doubleNode* &head);		//displays the list to the console
	void addNodeD(doubleNode* &head, int valueIn);	//creates a node, adds it to the end of the list
	int removeNodeD(doubleNode* &head);			//removes the last node and returns its data
	doubleNode* findLastD(doubleNode* &head);

#endif
