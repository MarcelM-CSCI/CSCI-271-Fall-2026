//Marcel Mcgill
//CSCI-271 Assignment 5
//score_stats_cpp


#include <iostream> // input output
using namespace std; // my saving grace


int main() // Start
{
    const int SIZE = 5; // Sets integer variable SIZE equal to five and makes sure its read only
    
    int scores[SIZE]; // Creates an array
    int sum = 0; // Integer variable sum totals to zero

    
    for (int i = 0; i < SIZE; i++) { // Loops through each array index
        cout << "Enter score " << i + 1 << ": "; // Displays the score number
        cin >> scores[i]; // Stores the entered score
    }

    int highest = scores[0]; // Starts highest at the first score
    int lowest = scores[0]; // Starts lowest at the first score

    
    for (int i = 0; i < SIZE; i++) { // Visits every score
        sum += scores[i]; // Adds the current score to the total

        if (scores[i] > highest) { // Checks for a new highest score
            highest = scores[i]; // Updates the highest score
        }

        if (scores[i] < lowest) { // Checks for a new lowest score
            lowest = scores[i]; // Updates the lowest score
        }
    }

    double average = static_cast<double>(sum) / SIZE; // Calculates a decimal average

    cout << "Scores: "; // Score value marker output

    for (int i = 0; i < SIZE; i++) { // Loops through the scores
        cout << scores[i] << " "; // Prints each score on one line
    }

    cout << endl; // Moves to the next line
    cout << "Sum: " << sum << endl; // Displays the sum
    cout << "Average: " << average << endl; // Displays the average
    cout << "Highest: " << highest << endl; // Displays the highest score
    cout << "Lowest: " << lowest << endl; // Displays the lowest score

    return 0; // Endpoint
}