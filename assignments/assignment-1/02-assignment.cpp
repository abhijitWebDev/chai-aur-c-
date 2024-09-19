#include<iostream>
#include<string>

using namespace std;


int main() {
    string tea_type="lemon tea";
    float price;

    cout << "What Should be the price of the tea \n";

    

    // Ask for quantity
   cout << "What is the price of tea?  ";
   cin >> price;

    int roundedPrice = int(price + (price * 0.10));

    double totalPrice = roundedPrice;

    cout << "Original Price: $" << price << endl;
    cout << "Rounded Price: $" << roundedPrice << endl;
    cout << "Total Price: $" << totalPrice << endl;


    


    return 0;
}