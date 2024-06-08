#pragma once
#include<iostream>
#include"User.h"
using namespace std;
class CafeStaff :public User
{
public:
	//Function for viewing the menu
	void ViewMenu();

	//Function for processing the order
	void ProcessOrder();

	//Function for Adding the item in the menu
	void AddMenuitem();

	//Function for Removing the item from the menu
	void RemoveMenuitem();

	//Function for logout
	void Logout();

	//Selection function
	void Select();




};