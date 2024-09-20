
/*
**Challenge 2: Assignment Operators**\
   Create a program where the user inputs the number of tea bags they have.
    If the number is less than 20, 
    give them 10 extra bags using the `+=` assignment operator.
    Display the updated total.
*/

#include <iostream>

using namespace std;

int main() {
    int tea_bags;

    cout << "Please enter how many tea bags you have ";
    cin >> tea_bags;

    // comparing the tea bags quantity , if it is less than 20 then give them 10 more tea bags
    if(tea_bags < 20) {
        tea_bags += 10;
        
    }

    cout << "The number of tea bags , user have are " << tea_bags << endl;
    
    
    return 0;
}