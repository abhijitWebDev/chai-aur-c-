// returnType functionName(parameters) {
    // this is called function body

// }

// void

#include<iostream>
using namespace std;

// custom function
int checkTemprature(int temprature){
    return temprature;
};

void serveChai(int cups); // function declaration

void makeChai() {
    cout << "Boiling water, Adding Tea leaves, ...statining" << endl;
}

void serveChai(string teaType = "Masala tea") {
    cout << "Serving " << teaType << endl;
}

int main() {
    int temp = checkTemprature(50);
    

    // cout << "The temprature is " << temp << " degrees " << endl;
    // serveChai(3);
    // makeChai();
    serveChai();
    return 0;
}

void serveChai(int cups) {
    cout << "Serving " << cups << endl;
}; // definition




   