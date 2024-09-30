#include <iostream>
using namespace std;

int main() {

    // lambda
    auto preparedChai = [](int cups) {
        cout << "Preparing " << cups << endl;
    };  // syntax of lambda function

    preparedChai(4);
    return 0;
}