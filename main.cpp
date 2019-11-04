/*-- main.cpp------------------------------------------------------------
   This file implements the driver for the BSTArray
-------------------------------------------------------------------------*/
#include "BSTArray.h"

#include <iostream>
using namespace std;

int main()
{
	// Create object
	BSTArray arrayBST;

	// Call methods on object
	arrayBST.insert(5);
	arrayBST.insert(8);
	arrayBST.insert(3);
	arrayBST.insert(1);
	arrayBST.insert(4);
	arrayBST.insert(9);
	arrayBST.insert(18);
	arrayBST.insert(20);
	arrayBST.insert(19);
	arrayBST.insert(2);
	arrayBST.print();
	arrayBST.findmax();
	arrayBST.findmin();
	arrayBST.search(3);
	arrayBST.search(18);
	arrayBST.search(19);
}

