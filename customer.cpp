#include<iostream>
#include"customer.h"
#include"order.h"
using namespace std;

string Customer::getusername()
{
    cout << "H e l l o   S i r   W e l c o m e   T o  F a s t  C a f e! " << endl;
    return name;

}

void Customer::ViewMenu()
{
   
    cout << "1. Coffee(latte)-------- Rs 200" << endl;
    cout << "2. Club-sandwich-------- Rs 300" << endl;
    cout << "3. Pan-pizza------------ Rs 1000" << endl;
    cout << "4. Grilled-burger------- Rs 500" << endl;
    cout << "5. Tea------------------ Rs 150" << endl;
    cout << "6. Ice-Cream-shake------ Rs 150" << endl;
    cout << "7. Chicken Biryani------ Rs 200 " << endl;
    cout << "8. Choco-donut---------- Rs 300" << endl;
    cout << "9. Showmen-------------- Rs 450" << endl;
    cout << "10.Chicken Karahi------- Rs 250" << endl;


}
void Customer::ViewMenu2()
{
    cout << "11. Beef-steak--------- Rs 1050" << endl;
    cout << "12. alfredo-pasta------ Rs 1100" << endl;
    cout << "13. Russian-salad------ Rs 850" << endl;
    cout << "14. hot-n-sour-Soup---- Rs 60" << endl;
    cout << "15. chips-------------- Rs 100" << endl;
    cout << "16. espresso-coffee---- Rs 200" << endl;
    cout << "17. Ice-Tea------------ Rs 110" << endl;
    cout << "18. Cheese-cake-------- Rs 450" << endl;
    cout << "19. Gulab-Jamun-------- Rs 450" << endl;
    cout << "20. finger-fish--------Rs 700" << endl;


}
void Customer::ViewMenu3()
{
   
    cout << "21. Chicken+veg-rice--------- Rs 520" << endl;
    cout << "22. Noodles------------------ Rs 200" << endl;
    cout << "23. Plain-biryani / pulao---- Rs 650" << endl;
    cout << "24. Con-dog / hot dog-------- Rs 300" << endl;
    cout << "25. Palin-coffee------------- Rs 220" << endl;
    cout << "26. Cadmium-Tea-------------- Rs 110" << endl;
    cout << "27. Cake / rusk--------------  Rs 30" << endl;
    cout << "28. Sunday------------------- Rs 399" << endl;


}// Function for Placing the order
void Customer::PlaceOrder()
{
    Order ow;
    //Making arrays in which the data should be atored
    string arr[100];
    int arr1[100],arr2[34];
    string m;
    int i=0,x;
    cout << "For Placing order, Kindly tell the item number:(0 to exit)" << endl;
    cin >> x;
    while (x != 0)
    {
        if (x < 0 || x>28)
        {

            cout << "Kindly   enter   the   correct   item    number!" << endl;
            cout << "*//*//*//*//*///*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//*//" << endl;
            cin >> x;
        }
        else
        {
            switch (x)
            {
            case 1:
                arr[i] = "Coffee(latte)";
                arr1[i] = 200;
                arr2[i] = 1;

                i++;
                cout << "Coffee(latte) has been added!" << endl;
                cin >> x;
                break;

            case 2:
                arr[i] = "Club sandwich";
                arr1[i] = 300;
                arr2[i] = 2;

                i++;
                cout << "Club-sandwich has been added!" << endl;
                cin >> x;
                break;

            case 3:
                arr[i] = "Pan-Pizza";

                arr1[i] = 1000;
                arr2[i] = 3;
                i++;
                cout << "Pan-Pizza has been added!" << endl;
                cin >> x;
                break;

            case 4:
                arr[i] = "Grilled-burger";
                arr1[i] = 500;
                arr2[i] = 4;
                i++;
                cout << "Grilled-burger has been added!" << endl;
                cin >> x;
                break;

            case 5:
                arr[i] = "Tea";

                arr1[i] = 150;
                arr2[i] = 5;
                i++;
                cout << "Tea has been added!" << endl;
                cin >> x;
                break;

            case 6:
                arr[i] = "Ice-Cream-shake";
                arr1[i] = 150;
                arr2[i] = 6;
                i++;
                cout << "Ice-Cream-shake has been added!" << endl;
                cin >> x;
                break;

            case 7:
                arr[i] = "Chicken Biryani";

                arr1[i] = 200;
                arr2[i] = 7;
                i++;
                cout << "Chicken Biryani has been added!" << endl;
                cin >> x;
                break;

            case 8:
                arr[i] = "Choco Donut";

                arr1[i] = 300;
                arr2[i] = 8;
                i++;
                cout << "Choco Donut has been added!" << endl;
                cin >> x;
                break;

            case 9:
                arr[i] = "Showmen";

                arr1[i] = 450;
                arr2[i] = 9;
                i++;
                cout << "Showmen has been added!" << endl;
                cin >> x;
                break;

            case 10:
                arr[i] = "Chicken Karahi";

                arr1[i] = 250;
                arr2[i] = 10;
                i++;
                cout << "Chicken Karahi has been added!" << endl;
                cin >> x;
                break;

            case 11:
                arr[i] = "Beef-Steak";
                arr2[i] = 11;
                arr1[i] = 1050;
                i++;
                cout << "Beef-Steak has been added!" << endl;
                cin >> x;
                break;

            case 12:
                arr[i] = "alfredo-pasta";
                arr2[i] = 12;
                arr1[i] = 1100;
                i++;
                cout << "alfredo-pasta has been added!" << endl;
                cin >> x;
                break;

            case 13:
                arr[i] = "Russian-salad";
                arr2[i] = 13;
                arr1[i] = 850;
                i++;
                cout << "Russian-salad has been added!" << endl;
                cin >> x;
                break;

            case 14:
                arr[i] = "hot-n-sour-Soup";
                arr2[i] = 14;
                arr1[i] = 60;
                i++;
                cout << "hot-n-sour-Soup has been added!" << endl;
                cin >> x;
                break;

            case 15:
                arr[i] = "chips";
                arr2[i] = 15;
                arr1[i] = 100;
                i++;
                cout << "chips has been added!" << endl;
                cin >> x;
                break;

            case 16:
                arr[i] = "espresso-coffee";
                arr2[i] = 16;
                arr1[i] = 200;
                i++;
                cout << "espresso-coffee has been added!" << endl;
                cin >> x;
                break;

            case 17:
                arr[i] = "Ice-Tea";
                arr2[i] = 17;
                arr1[i] = 110;
                i++;
                cout << "Ice-Tea has been added!" << endl;
                cin >> x;
                break;

            case 18:
                arr[i] = "Cheese-cake";
                arr2[i] = 18;
                arr1[i] = 450;
                i++;
                cout << "Cheese-cake has been added!" << endl;
                cin >> x;
                break;

            case 19:
                arr[i] = "Gulab-Jamun";
                arr2[i] = 19;
                arr1[i] = 450;
                i++;
                cout << "Gulab-Jamun has been added!" << endl;
                cin >> x;
                break;

            case 20:
                arr[i] = "finger-fish";
                arr2[i] = 20;
                arr1[i] = 700;
                i++;
                cout << "finger-fish has been added!" << endl;
                cin >> x;
                break;

            case 21:
                arr[i] = "Chicken+veg-rice";
                arr2[i] = 21;
                arr1[i] = 520;
                i++;
                cout << "Chicken+veg-rice has been added!" << endl;
                cin >> x;
                break;

            case 22:
                arr[i] = "Noodles";
                arr2[i] = 22;
                arr1[i] = 200;
                i++;
                cout << "Noodles has been added!" << endl;
                cin >> x;
                break;

            case 23:
                arr[i] = "Plain-biryani / pulao";
                arr2[i] = 23;
                arr1[i] = 650;
                i++;
                cout << "Plain-biryani / pulao has been added!" << endl;
                cin >> x;
                break;

            case 24:
                arr[i] = "Con-dog / hot dog";
                arr2[i] = 24;
                arr1[i] = 300;
                i++;
                cout << "Con-dog / hot dog has been added!" << endl;
                cin >> x;
                break;

            case 25:
                arr[i] = "Palin-coffee";
                arr2[i] = 25;
                arr1[i] = 220;
                i++;
                cout << "Palin-coffee has been added!" << endl;
                cin >> x;
                break;

            case 26:
                arr[i] = "Cadmium-Tea";
                arr2[i] = 26;
                arr1[i] = 110;
                i++;
                cout << "Cadmium-Tea has been added!" << endl;
                cin >> x;
                break;

            case 27:
                arr[i] = "Cake / rusk";
                arr2[i] = 27;
                arr1[i] = 50;
                i++;
                cout << "Cake / rusk has been added!" << endl;
                cin >> x;
                break;

            case 28:
                arr[i] = "Sunday";
                arr2[i] = 28;
                arr1[i] = 399;
                i++;
                cout << "Sunday has been added!" << endl;
                cin >> x;
                break;


            }
        }
    }
    //Printing the order 
    for (int k = 0; k < i; k++)
    {

        cout <<arr2[k]<<"--"<< arr[k] << "------" << arr1[k] << endl;

    }
    cout << endl;
    //Sending it to the order class
    ow.Required(arr, arr1,arr2, i);

   
    

}

