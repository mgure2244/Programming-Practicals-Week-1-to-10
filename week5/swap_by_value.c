#include <stdio.h>

// Function to swap two numbers using pass by value
void swapByValue(int a, int b)
{
    // Display values before swapping
    printf("Inside function - Before swap: a = %d, b = %d\n", a, b);

    // Create a temporary variable
    int temp = a;

    // Swap the values
    a = b;
    b = temp;

    // Display values after swapping
    printf("Inside function - After swap: a = %d, b = %d\n", a, b);
}

// Main function
int main()
{
    // Declare two variables
    int x = 10;
    int y = 20;

    // Display values before calling function
    printf("Before calling swapByValue:\n");
    printf("x = %d, y = %d\n", x, y);

    // Call the function
    swapByValue(x, y);

    // Display values after calling function
    printf("After calling swapByValue:\n");
    printf("x = %d, y = %d\n", x, y);

    return 0;
}