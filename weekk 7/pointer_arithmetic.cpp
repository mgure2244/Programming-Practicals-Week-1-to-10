
#include <iostream>
using namespace std;

// The main function - where the program starts
int main() {

    // Declare and initialise an array of 5 integers
    int numbers[5] = {10, 20, 30, 40, 50};

    // Declare a pointer that points to the first element
    int* ptr = numbers;

    cout << "Array elements accessed via pointer arithmetic:" << endl;

    // Loop 5 times to access each element
    for (int i = 0; i < 5; i++) {

        // Display the value stored at the pointer
        cout << "Value: " << *ptr << endl;

        // Move the pointer to the next element
        ptr++;
    }

    // Reset the pointer to the beginning of the array
    ptr = numbers;

    cout << "\nAccessing using offset arithmetic:" << endl;

    // Access elements using pointer arithmetic
    for (int i = 0; i < 5; i++) {

        // Display each element
        cout << "Index " << i << " has value: " << *(ptr + i) << endl;
    }

    return 0;
}