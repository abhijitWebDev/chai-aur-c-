#include <iostream>

using namespace std;

int main() {
    int cups;

    // get input from user
    cout << "Enter the number of cups ";
    cin >> cups;

    if(cups > 20) {
        cout << "You will get a gold badge " << endl;
    } else if (cups > 10 && cups < 20)
    {
        cout << "You will get a silver badge " << endl;
    } else {
        cout << "You will get a no badge " << endl;
    }

    return 0;
}
