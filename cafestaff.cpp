#include<iostream>
#include"customer.h"
#include"menuitem.h"
#include<string>
#include"cafestaff.h"
using namespace std;


void CafeStaff::Select()
{

	int x;
	cout << "What would you like to do?(0 for exit)" << endl;
	cout << "1.View the Menu" << endl;
	cout << "2. Add an item in the Menu" << endl;
	cout << "3.Remove an item from the Menu" << endl;
	cout << "4.Logout" << endl;
	cin >> x;
	while (x != 0)
	{
		switch (x)
		{
		case 1:
			ViewMenu();
			cin >> x;
			break;
		case 2:
			AddMenuitem();
			cin >> x;
			break;
		case 3:
			RemoveMenuitem();
			cin >> x;
			break;
		case 4:
			Logout();
			cin >> x;
			break;
		}

	}


}
void CafeStaff::ViewMenu()
{
	Customer c;
	c.ViewMenu();
	c.ViewMenu2();
	c.ViewMenu3();


}

void CafeStaff::AddMenuitem()
{
	//Making an array
	string* arr = new string[30];
	string item;
	MenuItem mu;
	//Copying in the array all the menu items
	for (int i = 0; i < 30; i++)
	{
		arr[i] = mu.getitem(i);
	}
	cout << "Which item would you like to add?" << endl;
	getline(cin, item);


	for (int i = 0; i < 30; i++)
	{
		if (arr[i] == " ")
		{
			arr[i] = item;
			break;
		}
	}
	cout << "The item has been added!" << endl;

}

void CafeStaff::RemoveMenuitem()
{

	//Making an array
	string* arr = new string[30];
	string item;
	MenuItem mu;
	int j = 0;
	int k = 30;
	for (int i = 0; i < k; i++)
	{
		arr[i] = mu.getitem(i);
	}
	for (int i = 0; i < k; i++)
	{
		cout << arr[i] << endl;
	}
	cout << "Which item would you like to add?" << endl;
	cin.ignore();
	getline(cin, item);

	bool abc = false;

	for (int i = 0; i < k; i++)
	{
		if (arr[i] == item)
		{
			j = i;
			abc = true;
			break;
		}
	}
	//If bool is true
	if (abc)
	{
		k -= 1;
		for (; j < k; j++)
		{
			arr[j] = arr[j + 1];
		}
	}
	for (int i = 0; i < k; i++)
	{
		cout << arr[i] << endl;
	}
	cout << "The item has been removed!" << endl;

}

void CafeStaff::Logout()
{

	cout << "Thank you for Visiting!" << endl;
	exit;

}

