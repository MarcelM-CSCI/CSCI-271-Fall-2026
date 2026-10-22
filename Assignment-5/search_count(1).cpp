//Marcel Mcgill
//CSCI-271 Assignment 5
//search_count.cpp

#include <iostream> // input/output
using namespace std; // Prevents migraine

int main() { // Start

    const int SIZE = 10; // Sets the array size to 10
    int data[SIZE] = {7, 12, 5, 12, 40, 3, 12, 8, 21, 5}; // Initializes the array

    int target; // Stores the number to search for
    int foundIndex = -1; // -1 means no match has been found
    int count = 0; // Counts the number of matches

    cout << "Enter a number to search for: "; // Asks for a target
    cin >> target; // Reads the target number

    for (int i = 0; i < SIZE; i++) { // Searches every array element

        if (data[i] == target) { // Checks if the current element matches

            count++; // Increases the number of matches

            if (foundIndex == -1) { // Checks if this is the first match
                foundIndex = i; // Saves the first matching index
            }
        }
    }

    if (foundIndex != -1) { // Checks whether the number was found

        cout << target << " first found at index "
             << foundIndex << endl; // Displays the first index

        cout << target << " appears "
             << count << " time(s)" << endl; // Displays the match count

    } else { // Runs when no match was found

        cout << target << " was not found." << endl; // Displays not-found message
    }

    return 0; // Endpoint
}
