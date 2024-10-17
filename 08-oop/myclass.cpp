#include<iostream>
#include<vector>

using namespace std;

class Chai {
    public:
        // data members (attributes)
        string teaName; // name of the tea
        int servings; // number of servings
        vector<string> ingredients; // list of ingredients for tea

        // functionality (Member function)

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
    Chai chaiOne;

    chaiOne.teaName = "Lemon Tea";
    chaiOne.servings = 2;
    chaiOne.ingredients = {"Water", "Lemon", "Honey", "Sugar", "Tea"};

    chaiOne.displayChaiDetails();

    Chai chaiTwo;

    chaiTwo.teaName = "Masala chai";
    chaiTwo.servings = 3;
    chaiTwo.ingredients = {"Water", "milk", "Tea", "Ginger", "Everest chai malasa"};

    // print
    chaiTwo.displayChaiDetails();
    return 0;
}