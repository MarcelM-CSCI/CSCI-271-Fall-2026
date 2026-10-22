//CSCI ASSIGNMENT ONE, ALL ENTRIES BY MARCEL JOHNATHAN MCGILL
#include <iostream>  //allows the use of input/output like cin and cout
#include <string> //allows the storage of string variables
using namespace std; // removes the need to type std:: before everything


int main() //Where the code starts 
{
cout <<"Hello, world!"<< "\n"; //Displays the statement, followed by a line break

cout <<"Say.. What's your name?\n"; //Displays the question, followed by a line break

string name; // defines name as a string variable, allowing the name to be stored

cin >> name; //requests input for the name variable.. code wont finish without you typing your name... different operator than cout

cout <<"Nice to meet you, " << name <<"!"<< endl; //displays closing statements, uses the name variable you just stored to personalize the message


return 0; // Where the code ends, error code 0 means nothing went wrong


}
