#include <iostream>
#include <vector>

using namespace std;

class Chai {

    // access modifiers public, private, protected

    // here we will use public block first
    public:
        string teaName;
        int servings;
        vector<string> ingredients;

        Chai() {
            teaName = "Unknown tea";
            servings = 1;
            ingredients = {"Water", "Tea leaves"};
            cout << "Constructor called" << endl;

        }

        // looping over ingredients
         void displayChaiDetails() {
            cout << "Tea Name: " << teaName << endl;
            cout << "Servings: " << teaName << endl;
            cout << "Ingredients: ";

            for(string ingredient : ingredients) {
                cout << ingredient << " ";
            }
            cout << endl;
        };



};

int main() {
    Chai defaultChai;

    defaultChai.displayChaiDetails();

    return 0;
}
