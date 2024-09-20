/*
4. **Challenge 4: Switch Case**\
   Write a program that offers different tea brewing methods.
   The user selects a method (1 for Boiling, 2 for Steeping, 3 for Iced Tea), 
   and the program prints the instructions for the selected brewing method.
   Use a switch statement to handle the selections.
*/

#include <iostream>
using namespace std;

int main() {
    int choice;

    cout << " Select a tea brewing method:\n ";
    cout << "1. Boiling\n ";
    cout << "2. Steeping\n";
    cout <<"3. Iced Tea\n";
    cout << "Enter your choice (1, 2, or 3): ";
    cin>> choice;

    // writing in switch case

    switch (choice) {
        case 1:
            cout << "Boiling Method Instructions:\n";
            cout << "1. Boil water to 100°C (212°F).\n";
            cout << "2. Add tea leaves or tea bag to the boiling water.\n";
            cout << "3. Let it steep for 3-5 minutes.\n";
            cout << "4. Remove tea leaves or tea bag and serve hot.\n";
            break;
        case 2:
            cout << "Steeping Method Instructions:\n";
            cout << "1. Heat water to the appropriate temperature (usually around 80-90°C or 176-194°F).\n";
            cout << "2. Add tea leaves or tea bag to the hot water.\n";
            cout << "3. Let it steep for 3-5 minutes.\n";
            cout << "4. Remove tea leaves or tea bag and serve.\n";
            break;
        case 3:
            cout << "Iced Tea Method Instructions:\n";
            cout << "1. Boil water to 100°C (212°F).\n";
            cout << "2. Add tea leaves or tea bag to the boiling water.\n";
            cout << "3. Let it steep for 3-5 minutes.\n";
            cout << "4. Remove tea leaves or tea bag and let the tea cool to room temperature.\n";
            cout << "5. Pour the tea over a glass filled with ice cubes.\n";
            cout << "6. Serve chilled.\n";
            break;
        default:
            std::cout << "Invalid choice. Please select 1, 2, or 3.\n";
            break;
        
    }
    return 0;
}