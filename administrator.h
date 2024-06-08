#pragma once
#include<iostream>
#include"User.h"
using namespace std;
class Administrator :public User
{
public:
	void Selection();

	//Function of viewing menu
	void viewMenu();

	//Function for Adding the item in the menu
	void Additem();

	//Function for Removing the item from the menu
	void Removeitem();

	//Function for Managing the inventory
	void Manageinventory();

	//Function for Managing the discount of promotion
	void MAnagediscountpromotion();

	//Function for Viewing the previous history of the order
	void vieworderhistory();

	//Function for adding the notification
	void AddNotification();

	// Function for removing the notification
	void Removenotification();

	//Function for rating the item from the menu
	void Ratemenuitem();

	//Displaying the information from the file
	void Displayfromfile();

	//Function for viewing the users from the file
	void ViewUsersfromFile();

	//Function for for viewing menu items from the file
	void ViewMenuitemsfromFile();

	//Function for viewing orders from file
	void ViewOrderfromFile();

	//Function for viewing the rating from the file
	void ViewRatingsfromFile();

	//Function for viewing payments from the file
	void ViewpaymentfromFile();

	//Function for calculating the monthly earning 
	void Calculatemonthlyearning();

	//Function for logout 
	void Logout();


};
