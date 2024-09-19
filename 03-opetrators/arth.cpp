#include <iostream>

using namespace std;

int main() {
    // Give me how many cups after user gives input
    int cups;

    // Give me price per cup, total price, and discounted price
    double price, totalPrice, discountedPrice;

    cout << "Enter the number of tea cups: ";
    cin >> cups;
    cout << "Enter the price per cup: ";
    cin >> price;

    totalPrice = cups * price;

    // Apply 5% discount if total price is above 100
    if (totalPrice > 100) {
        discountedPrice = totalPrice - (totalPrice * 0.05);
        cout << "The discounted price is: " << discountedPrice << endl;
    } else {
        cout << "The total price is: " << totalPrice << endl;
    }

    cout << "The code works, my aha moment" << endl;

    return 0;
}
