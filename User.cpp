#include<iostream>
#include<fstream>
#include"User.h"
#include"customer.h"
#include"filemanager.h"
#include<string>
using namespace std;
//Default Constructor
User::User()
{

}
//Getter for USer name
string User:: getusername()
{
	return Username;
}

// Getter for UserId
string User::getUserID()
{
	return UserID;
}

//Getter for password
string User::getpassword()
{
	return Password;
}

void User::Login()
{
	string m;
	char x;

	//Taking input of the user
	jump:
	
	cin.ignore();
	getline(cin, m);
	cout << "Enter your User ID!" << endl;
	
	getline(cin, UserID);
	cout << endl;
	cout << "Enter your name!" << endl;
	getline(cin, Username);
	cout << endl;
	cout << "Enter the password!" << endl;
	getline(cin, Password);
	

	// A stirng which output the line from the file
	string line;
	bool found = false;
	//Reading the file
	ifstream inFile("Userdata.txt");

	//Loop is ending when the lines of the file end
	while (getline(inFile, line))
	{
		if (UserID == line)
		{
			(getline(inFile, line));
			if (Username == line)
			{
				(getline(inFile, line));
				if (Password == line)
				{
					found = true;

				}
			}
		}
	}
	if (found)
	{
		cout << endl;
		cout << "(:You    Have   Successfully    Logged    In!:)" << endl;
		cout << "*//*//*//*//*///*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//" << endl;
	}
	else
	{
		cout << "Kindly   check   Your   username   Or   password! " << endl;
		cout << endl;

		//Asking of we want to again Login
		cout << "Again    want   to     Login?:)(Y or N)" << endl;
		cin >> x;
		cout << endl;
		if (x == 'Y' || x == 'y')
		{
			goto jump;
		}
		else
		{
			cout << endl;
			cout << "Kindly    first   Login " << endl;
			exit;
		}
	}
	
	// Closing the file	
	inFile.close();
	
}
void User::Register()
{
	fstream ab;
	
	//Taking information of the user for registration 
	
	cout << "Kindly enter your User ID!" << endl;
	cin.ignore();
	getline(cin, UserID);
	cout << "Enter your Good name!" << endl;
	cout << endl;
	getline(cin, Username);
	cout << "Enter the strong password!" << endl;
	getline(cin, Password);

	
}

string User::GetUserType()
{
	cout << "Please tell me the User type!" << endl;
	getline(cin, UserType);
	return UserType;
}