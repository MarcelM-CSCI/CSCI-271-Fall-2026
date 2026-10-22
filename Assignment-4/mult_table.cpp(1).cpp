// Marcel Mcgill CSCI-271
// ASSIGNMENT 4

#include <iostream>
using namespace std;

int main() {
    int num; 

    cout << "Enter a number: "; //prompt
    cin >> num; //number input 

    for (int i = 1; i <= 10; i++) { //counts 1-10
        cout << num << " x " << i << " = " // 
             << num * i << endl;
    }

    return 0;
}
