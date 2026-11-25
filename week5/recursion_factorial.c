#include <stdio.h>

// Simple recursion function
int factorialRecursive(int n)
{
    // Base case
    if (n <= 1)
    {
        return 1;
    }

    // Recursive case
    return n * factorialRecursive(n - 1);
}

// Tail recursion helper function
int factorialTailHelper(int n, int accumulator)
{
    // Base case
    if (n <= 1)
    {
        return accumulator;
    }

    // Recursive call
    return factorialTailHelper(n - 1, n * accumulator);
}

// Tail recursion wrapper function
int factorialTail(int n)
{
    return factorialTailHelper(n, 1);
}

// Main function
int main()
{
    int num;

    // Ask user to enter a number
    printf("Enter a number to calculate factorial: ");

    // Read number
    scanf("%d", &num);

    // Validate input
    if (num < 0 || num > 12)
    {
        printf("Please enter a number between 0 and 12.\n");
        return 1;
    }

    // Simple recursion
    printf("\nUsing simple recursion:\n");
    printf("%d! = %d\n", num, factorialRecursive(num));

    // Tail recursion
    printf("\nUsing tail recursion:\n");
    printf("%d! = %d\n", num, factorialTail(num));

    // Comparison
    printf("\n--- Comparison ---\n");

    printf("Simple recursion: Clear and easy to understand.\n");

    printf("Tail recursion: Uses an accumulator.\n");

    return 0;
}