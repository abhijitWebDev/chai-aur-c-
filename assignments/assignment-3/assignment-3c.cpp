/*
3. **Challenge 3: Nested If-Else**\
   Write a program that checks the temperature of tea water input by the user:

- If the temperature is above 100°C, print "Too hot!"
- If the temperature is between 80°C and 100°C, print "Perfect temperature."
- If the temperature is below 80°C, print "Too cold!"
*/

#include <iostream>
using namespace std;

int main() {
    int temprature;

    cout << "Please enter the temprature in celseus: ";
    cin >> temprature;

    // checking the nested condition
    if(temprature > 100 ) {
        cout << "Too Hot " << endl;
    } else if(temprature>=80 && temprature<=100) {
        cout << "Perfect temprature" << endl;
    } else {
        cout << "Too cold" << endl;
    }
    return 0;
}