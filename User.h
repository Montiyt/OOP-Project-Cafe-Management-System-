#pragma once
#include<iostream>
using namespace std;
class User
{
	//Attributes
	string UserID;
	string Username;
	string Password;
	string UserType;
public:
	//Default Constructor
	User();

	//Member Function for registration
	void Register();

	//Member Function for login
	void Login();
	
	//Getter of user type
	string GetUserType();
	
	//Getting Username
	virtual string getusername();

	//Getting password
	string getpassword();

	//Getting UserID
	string getUserID();

	



};