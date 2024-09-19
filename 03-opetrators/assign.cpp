#include <iostream>

using namespace std;

int main() {

    // give me tea bags from user
    int teaBags;

    cout<< "Enter the number of tea bags you have";
    cin>>teaBags;

    if(teaBags < 10) {
        teaBags += 5;
    }

    cout<< " Your total bags are "<< teaBags << endl;

    return 0;
}
