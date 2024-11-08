#include <iostream>

// using namespace standard
using namespace std;

// class Bank account
class BankAccount {
    private:
        string accountNumber;
        double balance;

    public:
        BankAccount(string accNum, double initialBalance) {
            accountNumber = accNum;
            balance = initialBalance;
        };

        // getbalance using getter method
        double getBalance() const {
            return balance;
        };

        // Method to deposit money
        void deposit(double amount) {
            if(amount > 0) {
                balance += amount;
                cout << "Deposited amount" << amount << endl;
            }
            else {
                cout << "Invalid deposit amount " << endl;

            }
        };

        void withdrawAmount(double amount) {
            if(amount > 0 && amount <= balance) {
                balance -= amount;
                
            } else {
                cout << "Invalid amount" << endl;
            }
        }


};

int main() {
    BankAccount myAccount("11229988", 500);

    myAccount.getBalance();

    myAccount.deposit(200);

    myAccount.withdrawAmount(100);
}