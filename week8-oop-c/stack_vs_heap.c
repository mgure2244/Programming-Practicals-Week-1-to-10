#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Car {
    char model[20];
};

// Function to initialize a car
void initCar(struct Car *c, const char *modelName) {
    strcpy(c->model, modelName);
    printf("Car created: %s\n", c->model);
}

// Function to destroy a car
void destroyCar(struct Car *c) {
    printf("Car destroyed: %s\n", c->model);
}

int main() {

    printf("--- Creating Stack Object ---\n");

    // Stack allocation
    struct Car stackCar;

    initCar(&stackCar, "Toyota");

    printf("\n--- Creating Heap Object ---\n");

    // Heap allocation
    struct Car *heapCar = (struct Car*)malloc(sizeof(struct Car));

    if (heapCar != NULL) {
        initCar(heapCar, "Honda");

        printf("Heap car model: %s\n", heapCar->model);
    }

    printf("\n--- End of main function ---\n");

    // Free heap memory
    if (heapCar != NULL) {
        destroyCar(heapCar);

        free(heapCar);

        heapCar = NULL;
    }

    return 0;
}