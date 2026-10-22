//Marcel Mcgill
//CSCI-271 Assignment 5
//array_utils.cpp

#include <iostream> // input/output
using namespace std; // me when std:: 
                     //;-;


void printForward(const int arr[], int size); // Declares forward printing function
void printReverse(const int arr[], int size); // Declares reverse printing function
int countAbove(const int arr[], int size, int limit); // Declares counting function

int main() { // Starts the main function

    const int SIZE = 6; // Sets the array size to 6
    int values[SIZE] = {14, 3, 27, 9, 50, 21}; // Initializes the array

    int limit; // Stores the user's comparison limit

    cout << "Forward: "; // Displays the forward label
    printForward(values, SIZE); // Calls the forward printing function

    cout << "Reverse: "; // Displays the reverse label
    printReverse(values, SIZE); // Calls the reverse printing function

    cout << "Count values above: "; // Asks for a limit
    cin >> limit; // Reads the limit from the user

    int count = countAbove(values, SIZE, limit); // Counts values above the limit

    cout << "Count: " << count << endl; // Displays the result

    return 0; // Ends the program successfully
}

void printForward(const int arr[], int size) { // Receives an array and its size

    for (int i = 0; i < size; i++) { // Loops from first to last index
        cout << arr[i] << " "; // Prints the current element
    }

    cout << endl; // Moves to the next line
}

void printReverse(const int arr[], int size) { // Receives an array and its size

    for (int i = size - 1; i >= 0; i--) { // Loops backward through the array
        cout << arr[i] << " "; // Prints the current element
    }

    cout << endl; // Moves to the next line
}

// Function to count values greater than a limit
int countAbove(const int arr[], int size, int limit) { // Receives array, size, and limit

    int count = 0; // Initializes the counter

    for (int i = 0; i < size; i++) { // Visits every array element

        if (arr[i] > limit) { // Checks if the element is above the limit
            count++; // Increases the counter
        }
    }

    return count; // Returns the number of matching elements
}
