#include <iostream>
#include <string>

using namespace std;

int main() {
    string response;

    while (true) {
        cout << "Do you want more tea (type 'stop' to exit)?: ";
        getline(cin, response);

        if(response == "stop") {
            break;
        }

        cout << "Here is your another cup of tea\n" << endl;
    }

    cout << "No more tea will be served to you" << endl;
    return 0;
}
