#include <iostream>
#include <vector>

using namespace std;

class Chai{
    private:
        string teaName;
        int servings;
        vector<string> ingredients;

    public:
        Chai() {
            teaName = "Unknown Tea";
            servings = 1;
            ingredients = {"Water", "Tea leaves"};
        }

        Chai(string name, int serve, vector<string> ingr)
        {
            teaName = name;
            servings = serve;
            ingredients = ingr;
        };

        // getter
        string getTeaName() {
            return teaName;
        }

        // setter
        void setTeaName(string name) {

            // logic
            teaName = name;
        }

        // getter for servings
        int getServings() {
            return servings;
        }

        // setter for servings
        void setServings(int serve) {
            servings = serve;

        }

        // getter for ingridents
        vector<string> getIngredients() {
            return ingredients;
        }

        // setter for ingre
        void setIngredients(vector<string> ingre) {
            ingredients = ingre;
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
    Chai  chai;
    chai.setTeaName("Ginger tea");
    chai.getTeaName();
    return 0;
}