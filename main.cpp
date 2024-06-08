#include<iostream>
#include<string>
#include<fstream>
#include"administrator.h"
#include"cafestaff.h"
#include"customer.h"
#include"filemanager.h"
#include"menuitem.h"
#include"order.h"
#include"payment.h"
#include"rating.h"
#include"User.h"
using namespace std;

int main()
{
	//Making object of each class
	Administrator ad;
	User us;
	CafeStaff ca;
	Customer cu;
	fstream abc;
	Order orr;

	// Making integer  variables 
	int a, b, c, d, e, f;

	//Creating a file
	
	ofstream Login("Userdata.txt");
	ofstream Order("Order.txt");
	ofstream Menu("MenuItem.txt");
	ofstream Rate("Rating.txt");
	ofstream Noti("Notification.txt");
	ofstream Pay("Payment.txt");


	//Entering some data before
	Login << "22I-1957\n";
	Login << "Manhab Zafar\n";
	Login << "Champions bro\n";

	
	Login.close();


	cout << "\t\t\t\t\tW e l c o m e  T o  F A S T  C a f e !" << endl;
	cout << endl;
	cout << endl;
	cout << "\t\t\t\t\tWhat would you like to do?:)" << endl;
	cout << endl;
	cout << "1.You want to Login for order?" ;
	cout << "\t\t\t\t\t\t2.You want to register?" << endl;
	cin >> a;
	switch (a)
	{
		case 1:
			//Login in the account
			cout << endl;
			cout << "Enter Yes!" << endl;
			us.Login();
			
		break;

		case 2:
			//Registering Account
			FileManager f;
			us.Register();
			cout << endl;
			cout << "Congratulations Your Account is created!Kindly now Login!" << endl;
			f.SaveUserToFile(us);
			cout << endl;
			cout << "Enter OK!"<<endl;
			us.Login();
		break;	

	}

	

	// Storing UserType in string and comparing the string with the " UserType " input
	string m = us.GetUserType();
	//Student Menu
	if (m == "Student" || m == "student")
	{
		cout << endl;
		cout << "*//*//*//*//*///*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//" << endl;
		cu.ViewMenu();
		//Polymorphic Behaviour
		User* ue = &cu;
		ue->getusername();

		cout << "*//*//*//*//*///*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//" << endl;
		cout << endl;
		cu.PlaceOrder();

	}
	//Faculty Menu
	else if (m == "Faculty" || m == "faculty")
	{
		cout << "*//*//*//*//*///*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//" << endl;
		cu.ViewMenu();
		cu.ViewMenu2();
		cu.ViewMenu3();
		cout << "*//*//*//*//*///*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//" << endl;
		cout << endl;
		cu.PlaceOrder();


	}
	//Non Faculty Menu
	else if (m == "Non-Faculty" || m == "non-faculty" || m == "Non Faculty" || m == "non faculty")
	{
		cout << "*//*//*//*//*///*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//" << endl;
		cu.ViewMenu3();
		cout << "*//*//*//*//*///*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//" << endl;
		cout << endl;
		cu.PlaceOrder();
	}

	//Administator area
	else if (m == "Administrator" || m == "administrator")
	{
		cout << endl;
		cout << "*//*//*//*//*///*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//" << endl;
		ad.Selection();
		cout << "*//*//*//*//*///*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//" << endl;

	}
	//Cafe Staff
	else
	{
		cout << endl;
		cout << "*//*//*//*//*///*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//" << endl;



	}
	

}



