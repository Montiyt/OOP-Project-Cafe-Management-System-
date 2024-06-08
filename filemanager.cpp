#include<iostream>
#include<fstream>
#include"User.h"
#include"filemanager.h"
using namespace std;
string m;
fstream ab;
void FileManager::SaveUserToFile(User& aa)
{
	string a, b, c;
	
	//Opening the file
	ab.open("Userdata.txt", ios::binary | ios::app);
	UserID = aa.getUserID();
	m = aa.getUserID();
	b = aa.getusername();
	c = aa.getpassword();
	//Writing in the file
	ab <<UserID<< "\n" << b << "\n" <<c<< endl;
	

	//Closing the file
	ab.close();

}
void FileManager::SaveMenuItemtoFile(string* arr,int arr1[])
{
	//Opening the file
	ab.open("MenuItem.txt", ios::binary | ios::app);
	for (int i = 0; i < 28; i++)
	{
		ab << arr[i] << "\t\t\t" << arr1[i] << endl;
	}

	ab.close();
}
void FileManager::SaveOrdertoFile(int arr1[], string arr2[], int arr3[],int a)
{
	//Saving order in the file
	ab.open("Order.txt", ios::binary | ios::app);
	for (int i = 0; i < a; i++)
	{
		ab << arr1[i] << "\t" << arr2[i] << "\t" << arr3[i] << "\t" << endl;
	}
	cout << endl;
	ab.close();


}
void FileManager::SaveRatingtoFile(string arr[],int arr1[],int f)
{

	ab.open("Rating.txt", ios::binary | ios::app);
	
	for (int i = 0; i < f; i++)
	{
		ab <<m<<"give review to " << arr[i] << "a  " << arr1[i]<<"  score" << endl;
	}
	cout << endl;
	ab.close();

}

void FileManager::SavePaymenttoFile(int Price)
{
	ab.open("Payment.txt", ios::binary | ios::app);
	ab << "You have received Rs." << Price << "  from " <<m << " through EasyPaisa." << endl;
	ab.close();
}

