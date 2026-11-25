// ACTIVITY 3B: STD::STRING VERSION

#include <iostream>
#include <string>
using namespace std;

int main() {

    // Create a string variable
    string name;

    // Ask the user to enter their name
    cout << "Enter your name: ";
    getline(cin, name);

    // Display the name
    cout << "Name: " << name << endl;

    // Find the length
    cout << "Length: " << name.length() << endl;

    // Display the first character
    cout << "First character: " << name[0] << endl;

    // Copy the name
    string copy = name;

    cout << "Copy: " << copy << endl;

    // Join two strings
    string greeting = "Hello, " + name + "!";

    cout << greeting << endl;

    return 0;
}