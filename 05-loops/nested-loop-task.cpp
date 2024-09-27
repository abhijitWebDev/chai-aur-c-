#include <iostream>
#include <string>

using namespace std;

int main(){

    string teaTypes[5] = {"Green Tea", "Black Tea", "Lemon Tea", "Oolong Tea", "Orange Tea"};

    for (int i = 0; i < 5; i++)
    {
        /* code */
        cout << "Brewing " << teaTypes[i] << " ... " << endl ;
        for (int j = 1; j <= 3; j++)
        {
            /* code */
            cout << "Brewing " << j << " Cup of " << teaTypes[i] << endl ;
        }
        
    }
    
    
    
    return 0;
}