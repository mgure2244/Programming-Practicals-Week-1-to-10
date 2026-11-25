// ACTIVITY 3: SIMULATING ABSTRACT CLASSES

#include <stdio.h>

// Base Struct
struct Shape {
    double (*calculateArea)(void* derivedShape);
};

// Derived Struct 1
struct Square {
    struct Shape base;
    double side;
};

// Derived Struct 2
struct Circle {
    struct Shape base;
    double radius;
};

// Specific Implementations
double squareArea(void* shapePtr) {

    struct Square* s = (struct Square*)shapePtr;

    return s->side * s->side;
}

double circleArea(void* shapePtr) {

    struct Circle* c = (struct Circle*)shapePtr;

    return 3.14159 * c->radius * c->radius;
}

int main() {

    // Create a Square
    struct Square sq;

    sq.side = 5.0;

    sq.base.calculateArea = squareArea;

    // Create a Circle
    struct Circle circ;

    circ.radius = 3.0;

    circ.base.calculateArea = circleArea;

    // Calculate and display areas
    printf("Area of Square: %.2f\n",
           sq.base.calculateArea(&sq));

    printf("Area of Circle: %.2f\n",
           circ.base.calculateArea(&circ));

    return 0;
}