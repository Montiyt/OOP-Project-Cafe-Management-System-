#include<iostream>
#include"menuitem.h"
#include"filemanager.h"
#include"administrator.h"
using namespace std;

MenuItem::MenuItem()
{
	// Storing the items in an array
	ItemName = new string[30];
	
	ItemName[0] = "Coffee(latte)";
	ItemName[1] = "Club-sandwich";
	ItemName[2] = "Pan-pizza";
	ItemName[3] = "Grilled-burger";
	ItemName[4] = "Tea";
	ItemName[5] = "Ice-Cream-shake";
	ItemName[6] = "Chicken Biryani";
	ItemName[7] = "Showmen";
	ItemName[8] = "Chicken Karahi";
	ItemName[9] = "Beef-steak";
	ItemName[10] = "alfredo-pasta";
	ItemName[11] = "Russian-salad";
	ItemName[12] = "hot-n-sour-Soup";
	ItemName[13] = "chips";
	ItemName[14] = "espresso-coffee";
	ItemName[15] = "Ice-Tea";
	ItemName[16] = "Cheese-cake";
	ItemName[17] = "Gulab-Jamun";
	ItemName[18] = "finger-fish";
	ItemName[19] = "Chicken+veg-rice";
	ItemName[20] = "Noodles";
	ItemName[21] = "Plain-biryani / pulao";
	ItemName[22] = "Con-dog / hot dog";
	ItemName[23] = "Palin-coffee";
	ItemName[24] = "Cadmium-Tea";
	ItemName[25] = "Cake / rusk";
	ItemName[26] = "Sunday";
	ItemName[27] = " ";
	ItemName[28] = " ";
	ItemName[29] = " ";

}

void MenuItem::UpdateStock(int arr[],int s)
{
	int x = 10;
	int y = 0;
	// Each item quantity is 10 in the stock
	for (int i = 0; i < 28; i++)
	{
		QuantityInStock[i] = x;
	}
	
	cout << endl;
	//If user select the item then it decreases from the stock

	for (int j = 0; j < 28; j++)
	{
		if (arr[y]== j)
		{
			y++;
			--QuantityInStock[j];


		}
	} 		 		
	//Sending the updated stock to the File manager class for storing it in the file
	FileManager fa;
	fa.SaveMenuItemtoFile(ItemName,QuantityInStock);
	
	

}

string MenuItem::getitem(int index)const
{
	return ItemName[index];

}
