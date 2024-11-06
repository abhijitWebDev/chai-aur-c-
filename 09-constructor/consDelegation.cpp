#include<iostream>
#include<vector>

using namespace std;

class Chai {
    public: 
        string teaName;
        int servings;
        vector<string> ingredients;

        // delegating constructor
        Chai(string name) : Chai(name, 1, {"water", "Tea leaves"}){}

        // main constructor

        Chai(string name, int serve, vector<string> ingre) {
            teaName = name;
            servings = serve;
            ingredients = ingre;

            cout << "Main constructor called ! " << endl;

            
        }
         // looping over ingredients
         void displayChaiDetails() {
            cout << "Tea Name: " << teaName << endl;
            cout << "Servings: " << servings << endl;
            cout << "Ingredients: ";

            for(string ingredient : ingredients) {
                cout << ingredient << " ";
            }
            cout << endl;
        };
};

int main() {
    Chai quickChai("Quick chai");
    quickChai.displayChaiDetails();
    return 0;
};