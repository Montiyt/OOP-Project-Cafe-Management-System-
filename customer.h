#pragma once
#include<iostream>
#include"User.h"
using namespace std;
class Customer :public User
{
	string name = "";
public:
	//Function for viewing Customer the menu
	void ViewMenu();

	// Function for viewing Faculty menu
	void ViewMenu2();

	// Function for viewing Faculty menu
	void ViewMenu3();
	
	//Function for placing the order
	void PlaceOrder();

	//Function for viewing the order history
	void ViewOrderhistory();

	//Username of the user
	string getusername();


	//Function for logout
	void Logout();





};