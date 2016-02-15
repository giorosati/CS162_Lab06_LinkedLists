/*********************************************************************
** Program Filename: singleNode.hpp
** Author: Giovanni Rosati
** email: rosatig@oregonstate.edu
** Date: 2016-02-14
** Description: single linked node class header file CS161_400 Lab06 project
*********************************************************************/

#ifndef SINGLENODE_HPP
#define SINGLENODE_HPP

struct singleNode
{
	int value;
	singleNode* next;
};
	void displayS(singleNode* &shead);			//displays the list to the console
	void addNodeS(singleNode* &shead, int valueIn);	//creates a node, adds it to the end of the list
	int removeNodeS(singleNode* &shead);				//removes the last node and returns its data
	singleNode* findLastS(singleNode* &shead);	//returns pointer to last node

#endif
