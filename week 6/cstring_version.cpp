// ACTIVITY 3A: C-STRING VERSION

#include <iostream>
#include <cstring>
using namespace std;

int main() {

    // Create a character array
    char name[50];

    // Ask the user to enter their name
    cout << "Enter your name: ";
    cin.getline(name, 50);

    // Display the name
    cout << "Name: " << name << endl;

    // Find the length of the name
    cout << "Length: " << strlen(name) << endl;

    // Display the first character
    cout << "First character: " << name[0] << endl;

    // Copy the name
    char copy[50];
    strcpy(copy, name);

    cout << "Copy: " << copy << endl;

    return 0;
}