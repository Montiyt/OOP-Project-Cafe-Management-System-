#pragma once
#include<iostream>
#include"User.h"
using namespace std;
class FileManager
{
	string filename;
	string UserID;
	string MenuItem;
	string Order;
	string rating;
	double Payment;

public:
	//Function for Saving user in the file for data storage
	
	void SaveUserToFile(User &aa);

	//Function for Save the item from the menu entered by user in the file
	void SaveMenuItemtoFile(string* arr, int arr1[]);

		//Function for Saving the whole order of the user in the file
	void SaveOrdertoFile(int arr1[], string arr2[], int arr3[],int a);

		//Function for  Saving the rating of the item in the file
	void SaveRatingtoFile(string arr[], int arr1[], int f);

		//Function for Saving the payment in the file
	void SavePaymenttoFile(int Price);
	//Simple Function for Using the User ID
	string getname(string name);
};