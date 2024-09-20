/*
**Challenge 3: Relational and Logical Operators**\
   A tea subscription service offers a discount 
   if the user buys more than 12 cups or if they are a member for more than a year.
   Write a program that checks if the user qualifies 
   for a discount based on their input.
*/
#include <iostream>

using namespace std;

int main() {
    int cups; 
    int membershipDuration; // in months

    cout << "Enter the number of tea cups: ";
    cin >> cups;
    cout << "Enter the membership duration in months: ";
    cin >> membershipDuration;


    // check if the member qualifies for a discount
    if(cups > 12 || membershipDuration > 12) {
        cout << "You are elegible for the discount " << endl;
    } else {
        cout << "You are not elegible for the discount " << endl;
    }

    return 0;
}
