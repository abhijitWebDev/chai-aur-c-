#include <iostream>
#include <string>

using namespace std;

int main() {
    string teaOrder;

    cout<<"Enter your Tea order";
    getline(cin, teaOrder);
    
    if(teaOrder == "Green tea") {
        cout<< "Your have orderd Green Tea"<<endl;
    }
    return 0;
}
