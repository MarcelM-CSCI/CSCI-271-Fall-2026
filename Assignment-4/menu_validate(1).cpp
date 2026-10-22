// Marcel Mcgill CSCI-271
// ASSIGNMENT 4

#include <iostream>
using namespace std;

int main() {
    int choice;

    do {
        cout << "Enter a menu choice (1-3): "; // Choice prompt
        cin >> choice; // Fills the choice variable

        if (choice < 1 || choice > 3) {     // if choice < 1 OR choice > 3
            cout << "Invalid choice, try again." << endl;   // Invalid choice prompt 
        }

    } while (choice < 1 || choice > 3); // if choice invalid, repeat attempt

    cout << "You selected option " << choice << "." << endl; //prompt for valid choice

    return 0;
}
