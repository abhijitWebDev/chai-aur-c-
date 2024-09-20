/*
1. **Challenge 1: If Statement**\
   Write a program that asks the user for their favorite tea. 
   If they choose "Oolong," print a message saying, 
   "You have excellent taste!"
*/

#include <iostream>

using namespace std;

int main() {
    string tea;
    // user selects tea;
    cout<< "What is your favorite tea: ";
    cin >> tea;
    // coparing the tea with the "Oolong"
    if(tea == "Oolong") {
        cout << " You have an excellent taste " << endl;
    } else {
        cout << "You have a decent taste " << endl;
    }
    return 0;
}