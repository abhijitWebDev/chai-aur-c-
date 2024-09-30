#include <iostream>
#include <string>
using namespace std;

int globalChaiStock = 100; // global variable

// here we are going to learn, pass by value and pass by reference.

// here we create a function
void pourChai(int &cups) /*Call by refrence*/ {
    int test = 9;
    cups = cups + 5;
    

    cout << " Poured cups " << cups << endl;
}
int main() {
    int cups = 2;

    pourChai(cups);
    cout << " Total cups are " << cups << endl;
    return 0;
}
