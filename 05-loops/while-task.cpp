#include <iostream>
#include <string>

using namespace std;

int main(){

    int teaCups;

    cout << "Enter the number of tea cups to server: ";
    cin >> teaCups;

    while (teaCups > 0)
    {
        /* code */
        teaCups--;
        cout << "Serving cup of tea\n " << teaCups << " remaining " << endl;
        // teaCups--;
    }

    cout << "All tea cups are served " << endl;
    
    
    return 0;
}