#include <iostream>
#include <vector>
#include <string>

using namespace std;

// base class
class Tea {
protected:
    string teaName;
    int servings;

public:
    Tea(string name, int serve) : teaName(name), servings(serve) {
        cout << "Tea constructor called " << teaName << endl;
    }
    virtual void brew() const {
        cout << "Brewing " << teaName << " with generic method " << endl;
    }

    virtual void serve() const {
        cout << "Serving " << servings << " cups of tea " << endl;
    }

    virtual ~Tea() {
        cout << "Tea destructor called for " << teaName << endl;
    }
};

class GreenTea : public Tea {
public:
    GreenTea(int serve) : Tea("Green tea", serve) {
        cout << "Green tea constructor called " << endl;
    }

    void brew() const override { // Corrected syntax for method declaration
        cout << "Brewing " << teaName << " by steeping the green tea leaves " << endl;
    }

    ~GreenTea() {
        cout << "Green tea destructor called " << endl;
    }
};

class MasalaTea : public Tea {
public:
    MasalaTea(int serve) : Tea("Masala Tea", serve) {
        cout << "Masala tea constructor called " << endl;
    }

    void brew() const override final { // Corrected syntax for method declaration
        cout << "Brewing " << teaName << " with spices and milk " << endl;
    }

    ~MasalaTea() {
        cout << "Masala tea destructor called " << endl;
    }
};

// class spicyMasalaTea : public MasalaTea {
//     public:
//         void brew() const override{
//             cout << "Brewing " << teaName << " with spices and milk " << endl;

//         }
// }

int main() {

    Tea* tea1 = new GreenTea(2);
    Tea* tea2 = new MasalaTea(3);
    

    tea1->brew();
    tea1->serve();

    // tea2
    tea2->brew();
    tea2->serve();

    delete tea1;
    delete tea2;
    return 0;
}
