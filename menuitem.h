#pragma once
#include<iostream>
using namespace std;
class MenuItem
{
	string ItemID;
	string *ItemName;
	string ItemDescription;
	int Price;
	int QuantityInStock[30];
public:
	MenuItem();
	// Updating the stock by entering the Item
	void UpdateStock(int arr1[],int a);

	string getitem(int index)const;


};

