// ACTIVITY 3: MEMORY LEAKS AND DELETE

#include <iostream>
using namespace std;

// Function demonstrating memory allocation
void demonstrateMemory() {

    // Allocate memory dynamically
    int* ptr = new int(42);

    cout << "Value stored in memory: " << *ptr << endl;

    // Release the allocated memory
    delete ptr;

    // Set pointer to nullptr
    ptr = nullptr;

    cout << "Memory has been freed successfully." << endl;
}

int main() {

    // Call the function
    demonstrateMemory();

    return 0;
}
