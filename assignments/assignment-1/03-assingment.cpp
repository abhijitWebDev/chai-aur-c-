#include <iostream>
#include <string>

using namespace std;

int main() {
    string userTea;
    int teaQuantity;

    // Ask for the type of tea
    cout << "What would you like to order in tea? \n";
    getline(cin, userTea);

    // Ask for the quantity
    cout << "How many cups of " << userTea << " would you like to have? ";
    cin >> teaQuantity;

    // Display the output in a fun way
    cout << "\nAwesome! You have ordered " << teaQuantity << " cup(s) of " << userTea << ". Enjoy your tea!\n";

    return 0;
}
