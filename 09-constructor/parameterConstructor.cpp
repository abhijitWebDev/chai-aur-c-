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

        Chai(string name, int servings, vector<string> ingr) {
            teaName = name;
            servings = servings;
            ingredients = ingr;
            cout << "Parameter Constructor called" << endl;

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
    Chai lemonTea("Lemon tea", 2, {"Water", "Lemon 🍵"});

    // display detaills
    lemonTea.displayChaiDetails();

    // copy the object
    Chai copiedChai = lemonTea;
    copiedChai.displayChaiDetails();

    lemonTea.teaName = "Modified lemon tea";

    cout << "Lemon tea" << endl;

    lemonTea.displayChaiDetails();

    cout << "Copied Tea" << endl;

    copiedChai.displayChaiDetails();



    

    return 0;
}
