/*
 **Challenge 1: Arithmetic Operators**\
   Write a program that calculates the price of tea packs. 
   A user enters the number of tea packs they want, 
   and the price per pack. 
   Apply a 10% tax to the total price and display the final cost.
*/

#include <iostream>

using namespace std;

int main() {
    int tea_packs;
    float pricePerpack, totalPrice, finalPrice;

    // get input from user
    cout << "Enter the number of tea packs ";
    cin >> tea_packs;
    cout << "Enter the price of the tea pack ";
    cin >> pricePerpack;

    // calculate the total price
    totalPrice = tea_packs * pricePerpack;

    // Apply ten percent tax
    finalPrice = totalPrice + (totalPrice * 0.10);

    // Display the the final cost
    cout << "The final cost after applying ten percent tax is: " << finalPrice << endl;



    return 0;
}