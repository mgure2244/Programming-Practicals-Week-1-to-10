// ACTIVITY 1: LINEAR SEARCH IN AN INTEGER ARRAY

#include <iostream>
using namespace std;

// Function to search for a number
int linearSearch(int arr[], int size, int target) {

    // Check each element one by one
    for (int i = 0; i < size; i++) {

        // Check whether the number matches
        if (arr[i] == target) {
            return i;
        }
    }

    // Return -1 if the number is not found
    return -1;
}

int main() {

    // Create an array containing 8 numbers
    int numbers[8] = {15, 42, 7, 89, 23, 56, 11, 74};

    // Find the size of the array
    int size = sizeof(numbers) / sizeof(numbers[0]);

    int target;

    // Display the numbers
    cout << "Array contents: ";

    for (int i = 0; i < size; i++) {
        cout << numbers[i] << " ";
    }

    cout << endl;

    // Ask the user for a number
    cout << "Enter a number to search: ";
    cin >> target;

    // Search for the number
    int position = linearSearch(numbers, size, target);

    // Display the result
    if (position != -1) {
        cout << "Element found at index: " << position << endl;
    }
    else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}