#include<iostream>
#include"customer.h"
#include"menuitem.h"
#include<fstream>
#include<string>
#include"administrator.h"
using namespace std;
//Making two fstream objects
fstream abc,hello;

void Administrator::Selection()
{
	int x;
	cout << "\t\t\t\t\tHello Sir!" << endl;
	cout << "What would you like to do?(0 for exit)" << endl;
	cout << "1.View the Menu" << endl;
	cout << "2. Add an item in the Menu" << endl;
	cout << "3.Remove an item from the Menu" << endl;
	cout << "4.Manage Inventory" << endl;
	cout << "5.Manage Discount Promotions" << endl;
	cout << "6.View Order History" << endl;
	cout << "7.Add notification" << endl;
	cout << "8.Remove notification" << endl;
	cout << "9.Rate Menu Item " << endl;
	cout << "10.View Users from file " << endl;
	cout << "11.View Menu Items from file " << endl;
	cout << "12.View Order from file " << endl;
	cout << "13.View Rating from file " << endl;
	cout << "14.View Payment from file " << endl;
	cout << "15. Calculate monthly earning " << endl;
	cout << "16. Logout " << endl;
	cin >> x;
	while (x != 0)
	{
		switch (x)
		{
		case 1:
			viewMenu();
			cout << "Sir What do you want next" << endl;
			cin >> x;
			break;
		case 2:
			Additem();
			cout << "Sir What do you want next" << endl;
			cin >> x;
			break;
		case 3:
			Removeitem();
			cout << "Sir What do you want next" << endl;
			cin >> x;
			break;
		case 4:
			Manageinventory();
			cout << "Sir What do you want next" << endl;
			cin >> x;
			break;
		case 5:
			vieworderhistory();
			cout << "Sir What do you want next" << endl;
			cin >> x;
			break;
		case 7:
			AddNotification();
			cout << "Sir What do you want next" << endl;
			cin >> x;
			break;
		case 8:
			Removenotification();
			cout << "Sir What do you want next" << endl;
			cin >> x;
			break;
		case 10:
			ViewUsersfromFile();
			cout << "Sir What do you want next" << endl;
			cin >> x;
			break;
		case 11:
			ViewMenuitemsfromFile();
			cout << "Sir What do you want next" << endl;
			cin >> x;
			break;
		case 12:
			ViewOrderfromFile();
			cout << "Sir What do you want next" << endl;
			cin >> x;
			break;
		case 13:
			ViewRatingsfromFile();
			cout << "Sir What do you want next" << endl;
			cin >> x;
			break;
		case 14:
			ViewpaymentfromFile();
			cout << "Sir What do you want next" << endl;
			cin >> x;
			break;
		case 16:
			Logout();
			cout << "Sir What do you want next" << endl;
			cin >> x;
			break;

		
		}
		
	

	}


}
void Administrator::viewMenu()
{
	Customer h;
	h.ViewMenu();
	h.ViewMenu2();
	h.ViewMenu3();

}
void Administrator::Additem()
{
	//Making an array
	string* arr=new string [30];
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
	for (int i = 0; i < 30; i++)
	{
		cout << i << "-----" << arr[i] << endl;
	}
}


void Administrator::Removeitem()
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
	for (int i = 0; i < 30; i++)
	{
		cout << i << "-----" << arr[i] << endl;
	}
	

}

void Administrator::vieworderhistory()
{
	string line;
	//Reading the order file
	ifstream read("order.txt");
	cout << "Here   is the    order   history!" << endl;
	//loop till the end line comes
	while (getline(read, line))
	{
		
		cout << line << endl;
	}
	read.close();
}

void Administrator::Manageinventory()
{
	//Making an array
	string* arr = new string[30];
	string item,item1;
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
	cin.ignore();
	cout << "Which item would you like to manage in  the inventory?" << endl;
	getline(cin, item);

	cout << "Now with which item in the inventory?" << endl;
	getline(cin, item1);

	for (int i = 0; i < k; i++)
	{
		for (int j = 0; j < k; j++)
		{
			if (arr[j] == item)
			{
				if (arr[i] == item1)
				{
					string temp=arr[j];
					arr[j] = arr[i];
					arr[i] = temp;
					
				}
			}
		}
		
	}
	for (int i = 0; i < 30; i++)
	{
		cout << i << "-----" << arr[i] << endl;
	}

}
void Administrator::AddNotification()
{

	string line;
	cout << "Which notification you want to add?" << endl;
	cin.ignore();
	getline(cin, line);
	//Adding the lines
	abc.open("Notification.txt",ios::app);
	abc << line << endl;
	abc.close();

}


void Administrator::Removenotification()
{
	int m = 0, n = 0;
	string line,line1;
	bool select = false;
	
	ifstream infile("Notification.txt");
	string *str=new string[100];
	//Gettting all the lines from the notification file
	while (getline(infile, line1))
	{
		str[m] = line1;
		m++;
	}
	for (int i = 0; i < m; i++)
	{
		cout << str[i] << endl;
	}


	cout << "Which notification you want to remove?" << endl;
	cin.ignore();
	getline(cin, line);
	for (int i = 0; i < m; i++)
	{
		if (str[i] == line)
		{
			n = i;
			select = true;
			break;
		}
	}
	if (select)
	{
		m -= 1;
		for (; n < m; n++)
		{
			str[n] = str[n + 1];

		}
	}
	for (int i = 0; i < m; i++)
	{
		cout << str[i] << endl;
	}
	infile.close();

	ofstream hello("Notification.txt");
	
	for (int i = 0; i < m; i++)
	{
		hello << str[i] << endl;
	}


	hello.close();
	delete[] str;

}
//Function for rating the item
void Administrator::Ratemenuitem()
{


}

//Function for viewing users

void Administrator::ViewUsersfromFile()
{
	string line;
	//Reading the User file
	ifstream read("Userdata.txt");
	cout << "Here   is the    Userdata  information!" << endl;
	//loop till the end line comes
	while (getline(read, line))
	{

		cout << line << endl;
	}
	read.close();
}

void Administrator::ViewMenuitemsfromFile()
{
	string line;
	//Reading the User file
	ifstream read("MenuItem.txt");
	cout << "Here   is the MenuItem information!" << endl;
	//loop till the end line comes
	while (getline(read, line))
	{

		cout << line << endl;
	}
	read.close();
}

void Administrator::ViewOrderfromFile()
{
	string line;
	//Reading the order file
	ifstream read("order.txt");
	cout << "Here   is the    order   history!" << endl;
	//loop till the end line comes
	while (getline(read, line))
	{

		cout << line << endl;
	}
	read.close();


}

void Administrator::ViewRatingsfromFile()
{
	string line;
	//Reading the order file
	ifstream read("Rating.txt");
	cout << "Here   is the    Rating   history!" << endl;
	//loop till the end line comes
	while (getline(read, line))
	{

		cout << line << endl;
	}
	read.close();
}

void Administrator::ViewpaymentfromFile()
{
	string line;
	//Reading the order file
	ifstream read("Payment.txt");
	cout << "Here   is the    Payment   history!" << endl;
	//loop till the end line comes
	while (getline(read, line))
	{

		cout << line << endl;
	}
	read.close();

}
void Administrator::Logout()
{
	cout << "Thank you sir for Visiting the app!" << endl;
	exit;

}





