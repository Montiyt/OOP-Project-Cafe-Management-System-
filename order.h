#pragma once
#include<iostream>

using namespace std;
class Order
{
	string orderID;
	string customerID;
	string ItemsOrdered[100];
	float TotalPrice=0;
	string OrderStatus;
public:
	int Prices[100];
	int m = 0;
	int ID[100];
	//Function for Adding the item in the order
	void AddItem();

	//Function for Removing the item from the order
	void RemoveItem();

	//Requirement of the user
	void Required(string arr[], int arr2[],int arr1[], int i);

	//Function for Calculating the total of the Order
	void CalculateTotal();

	//Function for Confirm the order from the user
	void ConfirmOrder();

	//Function for Logout
	void Logout();


};