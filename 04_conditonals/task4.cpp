#include <iostream>
#include <string>

using namespace std;

int main() {
    int choice;
    double price;

    cout << "Select your tea\n ";
    cout << "1. Green Tea\n ";
    cout << "2. Lemon Tea\n ";
    cout << "3. Oolong Tea\n ";
    cout << "Enter your choice in number: \n ";

    cin >> choice;

    switch (choice)
    {
    case 1:
        price = 2.0;
        cout << "You selected green tea and the price is " << price << endl;
        break;
    case 2:
        price = 3.0;
        cout << "You selected lemon tea and the price is " << price << endl;
        break;
        
    case 3:
        price = 4.0;
        cout << "You selected oolong tea and the price is " << price << endl;
        break;
    
    default:
    cout << "Invalid choice" << endl;
        break;
    }
    return 0;
}