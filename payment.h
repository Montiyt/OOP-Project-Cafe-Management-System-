#pragma once
#include<iostream>
using namespace std;
class Payment
{
	string PaymentID;
	string OrderID;
	double Amount;
	string PaymentStatus;

	public:
		// This function is for processing the payment of the item
		void ProcessPayment(int Pay);

};
