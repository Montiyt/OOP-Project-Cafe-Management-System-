#include<iostream>
#include"payment.h"
#include"filemanager.h"
using namespace std;
void Payment::ProcessPayment(int Pay)
{
	FileManager ff;
	int x;
	//Printing User Total AMount
	cout << endl;
	cout << "Your Total amount is " << Pay << endl;
	cout << endl;

	//Asking User his payment method
	cout << "Kindly   choose   your   payment   method!:)" << endl;
	cout << "1.Cash" << endl;
	cout << "2.Easy paisa" << endl;
	cin >> x;

	//If User chooses Cash
	if (x == 1)
	{
		cout << "Kindly   pay Rs." << Pay << "   when our person arrives!" << endl;
		cout << endl;
		cout << "Thanks for using the app!" << endl;

	}
	//If User chooses Easypaisa method
	else if (x == 2)
	{

		cout << "Kindly send the amount to (03336996910) " << endl;
		cout << endl;
		cout << "*//*//*//*//*///*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//" << endl;
		cout << endl;
		cout << "Thanks for using the app, you receive your order as I receive the amount!:):):)" << endl;

		ff.SavePaymenttoFile(Pay);
	}
}