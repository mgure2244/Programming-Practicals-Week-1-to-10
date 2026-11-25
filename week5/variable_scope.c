#include <stdio.h>

// Global variable
int globalCounter = 100;

// Function to display global variable
void displayGlobal()
{
    printf("Inside displayGlobal: globalCounter = %d\n", globalCounter);
}

// Function to modify global variable
void modifyGlobal()
{
    globalCounter = 500;

    printf("Inside modifyGlobal: globalCounter changed to %d\n", globalCounter);
}

// Function with local variable
void localDemo()
{
    // Local variable shadows the global variable
    int globalCounter = 999;

    printf("Inside localDemo: globalCounter = %d\n", globalCounter);
}

// Main function
int main()
{
    // Local variable
    int localCounter = 50;

    // Display global and local variables
    printf("In main: globalCounter = %d\n", globalCounter);
    printf("In main: localCounter = %d\n", localCounter);

    // Call functions
    displayGlobal();

    modifyGlobal();

    localDemo();

    // Display global variable again
    printf("Back in main: globalCounter = %d\n", globalCounter);

    return 0;
}