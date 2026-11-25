// ACTIVITY 2: SIMULATING VIRTUAL FUNCTIONS

#include <stdio.h>

// Define a Function Pointer Type
typedef void (*SpeakFunction)();

// Base Struct
struct Animal {
    SpeakFunction speak;
};

// Derived Struct
struct Dog {
    struct Animal base;
};

// Actual Functions
void genericSound() {
    printf("Animal makes a generic sound.\n");
}

void dogBark() {
    printf("Dog barks: Woof! Woof!\n");
}

int main() {

    printf("--- Simulating Non-Virtual (Base only) ---\n");

    struct Animal myAnimal;

    myAnimal.speak = genericSound;

    myAnimal.speak();

    printf("\n--- Simulating Virtual (Dynamic binding) ---\n");

    struct Dog myDog;

    myDog.base.speak = dogBark;

    struct Animal* pet = (struct Animal*)&myDog;

    pet->speak();

    return 0;
}