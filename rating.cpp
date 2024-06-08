#include<iostream>
#include"rating.h"
#include"filemanager.h"
using namespace std;

void Rating::Rate(int arr[], string arr1[],int a)
{
	FileManager fa;
	char r;
	int x;
	int j = 0;
	// Making two arrays
	string *arr3=new string[10] ;
	int* arr4 = new int[10];
	

	//LOOP for printing the item in both array
	//These array consist of order and its name 
	for (int i = 0; i < a; i++)
	{
		cout << arr[i] << "\t" << arr1[i] << endl;
	}
	label:
	cout << "*//*//*//*//*///*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//" << endl;
	cout << endl;
	cout << "Which item would you like to review from the your order!(Kindly enter the ID of the item)" << endl;
	cin >> x;
	for (int i = 0; i < a; i++)
	{
		// Asking for item number
		if (x == arr[i])
		{	
			cout << endl;
			cout << "What score would you like to give to this item?" << endl;
			cin >> Score;
			arr3[j] =  (arr1[i]);
			arr4[j] =  (Score);
			j++;
			break;
		}
	}
	//Asking if the user want to rate any other item
	cout << "*//*//*//*//*///*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//" << endl;
	cout << endl;
	cout << "Would you like to rate any other item?(Y or N)" << endl;
	cin >> r;
	if (r == 'Y' || r == 'y')
	{
		//Using Goto Function
		goto label;
	}
	else
	{
		cout << "Thanks for your review" << endl;
	}
	fa.SaveRatingtoFile(arr3,arr4,j);
	
}