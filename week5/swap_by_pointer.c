#include <stdio.h>

// Function using pointers
void swapByPointer(int *a, int *b)
{
    int temp = *a;

    *a = *b;
    *b = temp;
}

int main()
{
    int x = 10;
    int y = 20;

    printf("Before swapping: x = %d, y = %d\n", x, y);

    // Send addresses of x and y
    swapByPointer(&x, &y);

    printf("After swapping: x = %d, y = %d\n", x, y);

    return 0;
}