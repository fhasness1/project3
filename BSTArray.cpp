#include "BSTArray.h"
#include <iostream>
#include <string>
using namespace std;

// Create BSTArray methods here
BSTArray::BSTArray()
{
	int array[256];
}

BSTArray::~BSTArray()
{

}

int BSTArray::search(int x) 
{
	int i = 1;
	if (array[i] == 0) {
		return 0;
	}
	else {
		while (array[i] != 0 && i < capacity) {
			if (x > array[i]) {
				i = i * 2 + 1;
			}
			else if (x < array[i]) {
				i = i * 2;
			}
			else if (x == array[i]) {
				return i;
			}

		}
	}

}

void BSTArray::findmax() 
{
	int temp = 0;
	for (int i = 1; i < capacity; i = i * 2 + 1)
	{
		if (array[i] != 0 && array[i] >= temp)
		{
			temp = array[i];
		}
	}
		cout << "Max Value: " << temp << endl;
}

void BSTArray::findmin() 
{
	int temp = capacity;
	for (int i = 1; i < capacity; i = i * 2) 
	{
		if (array[i] != 0 && array[i] <= temp) 
		{
			temp = array[i];
		}
	}
		cout << "Min Value: " << temp << endl;
}

void BSTArray::insert(int x) 
{
	int i = 1;
	if (array[i] == 0)
	{
		array[i] = x;
	}
	else 
	{
		while (array[i] != 0 && i < capacity)
		{
			if (x > array[i])
			{
				i = i * 2 + 1;
			}
			else if (x < array[i])
			{
				i = i * 2;
			}
			else
			{
				break;
			}

		}
	}
	array[i] = x;
}

void BSTArray::print()
{
	for (int i = 1; i < capacity; i++)
	{
		if (array[i] == 0) 
		{
			cout << " ";
		}
		else
			cout << array[i] << ", ";
	}
		cout << endl << endl;
}