#include <iostream>
#include <vector>

using namespace std;

class Chai {
public:
    string* teaName;
    int servings;
    vector<string> ingredients;

    Chai(string name, int servings, vector<string> ingr) {
        teaName = new string(name);
        this->servings = servings; // Use this-> to refer to the member variable
        ingredients = ingr;
        cout << "Parameter Constructor called" << endl;
    }

    Chai(const Chai& other) {
        teaName = new string(*other.teaName);
        servings = other.servings;
        ingredients = other.ingredients;
        cout << "Copy constructor called" << endl;
    }

    ~Chai() {
        delete teaName;
        cout << "Destructor called" << endl; // Fixed typo
    }

    void displayChaiDetails() {
        cout << "Tea Name: " << *teaName << endl;
        cout << "Servings: " << servings << endl;
        cout << "Ingredients: ";
        for (string ingredient : ingredients) {
            cout << ingredient << " ";
        }
        cout << endl;
    }
};

int main() {
    Chai lemonTea("Lemon tea", 2, {"Water", "Lemon 🍵"});

    // Display details
    lemonTea.displayChaiDetails();

    // Copy the object
    Chai copiedChai = lemonTea;
    copiedChai.displayChaiDetails();

    *lemonTea.teaName = "Modified lemon tea";

    cout << "Lemon tea" << endl;
    lemonTea.displayChaiDetails();

    cout << "Copied Tea" << endl;
    copiedChai.displayChaiDetails();

    return 0;
}
