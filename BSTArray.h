#pragma once
#include "ElementType.h"
#include<iostream>
using namespace std;

// Create BSTArray class defintiion here
class BSTArray 
{
public:
	BSTArray();
	~BSTArray();
	int search(int x);
	void findmax();
	void findmin();
	void print();
	void insert(int x);

private:
	static const int capacity = 256;
	int array[capacity] = { 0 };
};