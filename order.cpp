#include<iostream>
#include<string>
#include"order.h"
#include"payment.h"
#include"rating.h"
#include"filemanager.h"
#include"menuitem.h"
using namespace std;
void Order::Required(string arr[], int arr3[],int arr1[], int i)
{
    int x;
    //Transferring the data in the arrays of this class
    for (int j = 0; j < i; j++)
    {
        ItemsOrdered[j] = arr[j];
        Prices[j] = arr3[j];
        ID[j] = arr1[j];
        m ++;
    }
    cout << endl;
    cout << "*//*//*//*//*///*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//" << endl;
    cout << "What do you want to do with the order?" << endl;
    cout << "1.Add item in the order?" << endl;
    cout << "2.Remove item from the order?" << endl;
    cout << "3.Total Price of the order?" << endl;
    cout << "4.Confirming the order?" << endl;
    cout << "5.Logout" << endl;
    cout << "*//*//*//*//*///*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//" << endl;
    cin >> x;
    cout << endl;
   
    // Switch for following the command of x variable
    while (x != 0)
    {
        switch (x)
        {
         case 1:
            AddItem();
            cin >> x;
            break;

         case 2:
             RemoveItem();
             cout << "Any further or confirm the order(4 for confirm!)" << endl;
             cin >> x;
             break;
        
         case 3:
             CalculateTotal();
             cout << "Any further or confirm the order(4 for confirm!)" << endl;
             cin >> x;
             break;

         case 4:
             ConfirmOrder();
             cout << endl;
             cout << endl;
             cout << "Thank you for your order!(Enter 0)" << endl;
             cin >> x;
             break;

         case 5:
             Logout();
             break;

        
        }
    }
}

//Definiton of Function which can add the item in the menu

void Order::AddItem()
{
    int x;
	cout << "Add item number  you like to add in the menu" << endl;
    cin >> x;
    while (x != 0)
    {
        switch (x)
        {
        case 1:
            ItemsOrdered[m] = "Coffee(latte)";
            Prices[m] = 200;
            ID[m] = 1;
            m++;
            cout << "Coffee(latte) has been added!" << endl;
            cin >> x;
            break;

        case 2:
            ItemsOrdered[m] = "Club sandwich";
            Prices[m] = 300;
            ID[m] = 2;
            m++;
            cout << "Club-sandwich has been added!" << endl;
            cin >> x;
            break;

        case 3:
            ItemsOrdered[m] = "Pan-Pizza";
            Prices[m] = 1000;
            ID[m] = 3;
            m++;
            cout << "Pan-Pizza has been added!" << endl;
            cin >> x;
            break;

        case 4:
            ItemsOrdered[m] = "Grilled-burger";
            Prices[m] = 500;
            ID[m] = 4;
            m++;
            cout << "Grilled-burger has been added!" << endl;
            cin >> x;
            break;

        case 5:
            ItemsOrdered[m] = "Tea";
            Prices[m] = 150;
            ID[m] = 5;
            m++;
            cout << "Tea has been added!" << endl;
            cin >> x;
            break;

        case 6:
            ItemsOrdered[m] = "Ice-Cream-shake";
            Prices[m] = 150;
            ID[m] = 6;
            m++;
            cout << "Ice-Cream-shake has been added!" << endl;
            cin >> x;
            break;

        case 7:
            ItemsOrdered[m] = "Chicken Biryani";
            Prices[m] = 200;
            ID[m] = 7;
            m++;
            cout << "Chicken Biryani has been added!" << endl;
            cin >> x;
            break;

        case 8:
            ItemsOrdered[m] = "Choco Donut";
            Prices[m] = 300;
            ID[m] = 8;
            m++;
            cout << "Choco Donut has been added!" << endl;
            cin >> x;
            break;

        case 9:
            ItemsOrdered[m] = "Showmen";
            Prices[m] = 450;
            ID[m] = 9;
            m++;
            cout << "Showmen has been added!" << endl;
            cin >> x;
            break;

        case 10:
            ItemsOrdered[m] = "Chicken Karahi";
            Prices[m] = 250;
            ID[m] = 10;
            m++;
            cout << "Chicken Karahi has been added!" << endl;
            cin >> x;
            break;

        case 11:
            ItemsOrdered[m] = "Beef-Steak";
            Prices[m] = 1050;
            ID[m] = 11;
            m++;
            cout << "Beef-Steak has been added!" << endl;
            cin >> x;
            break;

        case 12:
            ItemsOrdered[m] = "alfredo-pasta";
            Prices[m] = 1100;
            ID[m] = 12;
            m++;
            cout << "alfredo-pasta has been added!" << endl;
            cin >> x;
            break;

        case 13:
            ItemsOrdered[m] = "Russian-salad";
            Prices[m] = 850;
            ID[m] = 13;
            m++;
            cout << "Russian-salad has been added!" << endl;
            cin >> x;
            break;

        case 14:
            ItemsOrdered[m] = "hot-n-sour-Soup";
            Prices[m] = 60;
            ID[m] = 14;
            m++;
            cout << "hot-n-sour-Soup has been added!" << endl;
            cin >> x;
            break;

        case 15:
            ItemsOrdered[m] = "chips";
            Prices[m] = 100;
            ID[m] = 15;
            m++;
            cout << "chips has been added!" << endl;
            cin >> x;
            break;

        case 16:
            ItemsOrdered[m] = "espresso-coffee";
            Prices[m] = 200;
            ID[m] = 16;
            m++;
            cout << "espresso-coffee has been added!" << endl;
            cin >> x;
            break;

        case 17:
            ItemsOrdered[m] = "Ice-Tea";
            Prices[m] = 110;
            ID[m] = 17;
            m++;
            cout << "Ice-Tea has been added!" << endl;
            cin >> x;
            break;

        case 18:
            ItemsOrdered[m] = "Cheese-cake";
            Prices[m] = 450;
            ID[m] = 18;
            m++;
            cout << "Cheese-cake has been added!" << endl;
            cin >> x;
            break;

        case 19:
            ItemsOrdered[m] = "Gulab-Jamun";
            Prices[m] = 450;
            ID[m] = 19;
            m++;
            cout << "Gulab-Jamun has been added!" << endl;
            cin >> x;
            break;

        case 20:
            ItemsOrdered[m] = "finger-fish";
            Prices[m] = 700;
            ID[m] = 20;
            m++;
            cout << "finger-fish has been added!" << endl;
            cin >> x;
            break;

        case 21:
            ItemsOrdered[m] = "Chicken+veg-rice";
            Prices[m] = 520;
            ID[m] = 21;
            m++;
            cout << "Chicken+veg-rice has been added!" << endl;
            cin >> x;
            break;

        case 22:
            ItemsOrdered[m] = "Noodles";
            Prices[m] = 200;
            ID[m] = 22;
            m++;
            cout << "Noodles has been added!" << endl;
            cin >> x;
            break;

        case 23:
            ItemsOrdered[m] = "Plain-biryani / pulao";
            Prices[m] = 650;
            ID[m] = 23;
            m++;
            cout << "Plain-biryani / pulao has been added!" << endl;
            cin >> x;
            break;

        case 24:
            ItemsOrdered[m] = "Con-dog / hot dog";
            Prices[m] = 300;
            ID[m] = 24;
            m++;
            cout << "Con-dog / hot dog has been added!" << endl;
            cin >> x;
            break;

        case 25:
            ItemsOrdered[m] = "Palin-coffee";
            Prices[m] = 220;
            ID[m] = 25;
            m++;
            cout << "Palin-coffee has been added!" << endl;
            cin >> x;
            break;

        case 26:
            ItemsOrdered[m] = "Cadmium-Tea";
            Prices[m] = 110;
            ID[m] = 26;
            m++;
            cout << "Cadmium-Tea has been added!" << endl;
            cin >> x;
            break;

        case 27:
            ItemsOrdered[m] = "Cake / rusk";
            Prices[m] = 50;
            ID[m] = 27;
            m++;
            cout << "Cake / rusk has been added!" << endl;
            cin >> x;
            break;

        case 28:
            ItemsOrdered[m] = "Sunday";
            Prices[m] = 399;
            ID[m] = 28;
            m++;
            cout << "Sunday has been added!" << endl;
            cin >> x;
            break;


        }
    }
    cout << endl;
    //Loop for Printing the the updated order
    for (int k = 0; k < m; k++)
    {

      cout << ID[k] << "--" << ItemsOrdered[k] << "------" << Prices[k] << endl;
    
    }
    cout << endl;

}

//Definiton of Function which can add the item in the menu

void Order::RemoveItem()
{
    bool present = false;
    int item;
    cout << "Enter the item ID you want to remove:" << endl;
    cin >> item;
    int j = 0;
    //Loop for checking the item is available in the menu or not
    for (int i = 0; i < m; i++)
    {
        if (ID[i] == item)
        {
            j = i;
            present = true;
            break;
        }
    }
    if (present)
    {
        m -= 1;
        for (; j < m; j++)
        {
            ID[j] = ID[j + 1];
            ItemsOrdered[j] = ItemsOrdered[j + 1];
            Prices[j] = Prices[j + 1];
            
        }
    }

    //Loop for Printing the the updated order
    for (int k = 0; k < m; k++)
    {

        cout <<ID[k]<<"--" << ItemsOrdered[k] << "------" << Prices[k] << endl;

    }
    cout << endl;

}


//Definition of the function for calculating the total of the order
void Order::CalculateTotal()
{
    
    cout << "The Calculating amount of your order is:" << endl;

    for (int i = 0; i < m; i++)
    {
        TotalPrice += Prices[i];
    }
    cout << TotalPrice << endl;
    

}

// This function will confirm the order of the user
void Order::ConfirmOrder()
{
    Payment pii;
    Rating r;
    FileManager fm;
    MenuItem mi;

    cout << "Confirming the order... " << endl;

    fm.SaveOrdertoFile(ID, ItemsOrdered, Prices,m);

    cout << "Your Order has been confirmed" << endl;
    mi.UpdateStock(ID,m);
    r.Rate(ID, ItemsOrdered,m);
    pii.ProcessPayment(TotalPrice);
    exit;
}
void Order::Logout()
{
    cout << "Thanks   for    Using   the    app!:)";
        exit;

}
