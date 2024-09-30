#include <iostream>
#include <string>
using namespace std;

// here we are going to learn, pass by value and pass by reference.

// here we create a function
void pourChai(int cups) {
    cups = cups + 5;

    cout << " Poured cups " << cups << endl;
}
int main() {
    int cups = 2;

    pourChai(cups);
    cout << " Total cups are " << cups << endl;
    return 0;
}
