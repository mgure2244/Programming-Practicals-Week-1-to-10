// ACTIVITY 1: SIMULATING INHERITANCE IN C

#include <stdio.h>
#include <string.h>

// BASE STRUCT (Parent)
struct Shape {
    char color[20];
};

// DERIVED STRUCT (Child)
struct Circle {
    struct Shape base;
    double radius;
};

int main() {

    // Create a Circle
    struct Circle myCircle;

    // Initialize inherited data
    strcpy(myCircle.base.color, "Red");

    // Initialize Circle's unique data
    myCircle.radius = 5.0;

    // Display information
    printf("Circle Color (Inherited): %s\n", myCircle.base.color);
    printf("Circle Radius (Specific): %.2f\n", myCircle.radius);

    return 0;
}