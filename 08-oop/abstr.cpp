#include <iostream>

// using namespace standard
using namespace std;

class Tea {
    public:
        virtual void prepareIngredients() = 0; // pure virtual function
        virtual void brew() = 0; // pure virtual function
        virtual void serve() = 0; // pure virtual function

        void makeTea() {
            prepareIngredients();
            brew();
            serve();
        }


};

// derived class
class GreenTea: public Tea{
    public:
        void prepareIngredients() override {
            cout << "Green leaves and water is ready " << endl;


        };

        void brew() override {
            cout << "Green tea is brewed " << endl;
        };

        void serve() override {
            cout << "Green Tea is served" << endl;
        }
};

class MasalaTea: public Tea{
    public:
        void prepareIngredients() override {
            cout << "Masala leaves and water is ready " << endl;


        };

        void brew() override {
            cout << "Masala tea is brewed " << endl;
        };

        void serve() override {
            cout << "Masala Tea is served" << endl;
        }
};

int main() {
    GreenTea greenTea;
    MasalaTea masalaTea;

    greenTea.makeTea();
    masalaTea.makeTea();
    return 0;
}