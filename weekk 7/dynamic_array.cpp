// ACTIVITY 4: DYNAMIC ARRAY WRAPPER

#include <iostream>
using namespace std;

// Create a DynamicArray class
class DynamicArray {

private:

    int* data;
    int size;
    int capacity;

public:

    // Constructor
    DynamicArray(int initialCapacity) {

        capacity = initialCapacity;
        size = 0;

        // Allocate memory
        data = new int[capacity];
    }

    // Destructor
    ~DynamicArray() {

        // Free memory
        delete[] data;
    }

    // Add a new element
    void push_back(int value) {

        // Check if the array is full
        if (size == capacity) {

            // Double the capacity
            int newCapacity = capacity * 2;

            // Create a bigger array
            int* newData = new int[newCapacity];

            // Copy old elements
            for (int i = 0; i < size; i++) {

                newData[i] = data[i];
            }

            // Delete old memory
            delete[] data;

            // Update pointer
            data = newData;
            capacity = newCapacity;

            cout << "[Resized capacity to "
                 << capacity << "]" << endl;
        }

        // Add the new value
        data[size] = value;

        size++;
    }

    // Display array elements
    void display() {

        cout << "Array (Size: " << size
             << ", Capacity: " << capacity << "): ";

        for (int i = 0; i < size; i++) {

            cout << data[i] << " ";
        }

        cout << endl;
    }
};

// Main function
int main() {

    // Start with capacity of 2
    DynamicArray myArray(2);

    cout << "Created dynamic array with capacity 2." << endl;

    // Add first two elements
    myArray.push_back(10);
    myArray.push_back(20);

    myArray.display();

    // Add third element
    cout << "\nAdding third element..." << endl;

    myArray.push_back(30);

    myArray.display();

    // Add fourth and fifth elements
    cout << "\nAdding fourth and fifth elements..." << endl;

    myArray.push_back(40);
    myArray.push_back(50);

    myArray.display();

    return 0;
}