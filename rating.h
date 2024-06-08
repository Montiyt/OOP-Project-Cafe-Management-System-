#pragma once
#include<iostream>
using namespace std;
class Rating
{
	string RatingID;
	string MenuItemID;
	string CustomerID;
	int Score;
	string Comment;
public:
	//Rating by the user for the item
	void Rate(int arr[],string arr1[],int a);



};