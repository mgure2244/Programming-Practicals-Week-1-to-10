// ============================================================
// ACTIVITY 3: RETURN CODES AND STDERR IN C
// Learning Outcome: Evaluate C error-handling strategies
// ============================================================

#include <stdio.h>
#include <errno.h>
#include <string.h>

// Function that returns a status code
// 0 = success, 1 = failure

int readFileWithReturnCode(const char *filename) {

    FILE *file = fopen(filename, "r");

    if (file == NULL) {

        // Display error message
        fprintf(stderr, "Error opening file: %s\n", strerror(errno));

        // Return 1 to show failure
        return 1;
    }

    // Read file successfully
    fclose(file);

    return 0;
}

int main() {

    printf("--- Testing Return Code Strategy ---\n");

    // Check the return code
    if (readFileWithReturnCode("data.txt") == 1) {

        printf("Main function: Handled error gracefully. Program continues.\n");
    }

    printf("\n--- Evaluation ---\n");

    printf("In C, we must manually check return codes.\n");

    printf("If the programmer forgets to check, the program might crash later.\n");

    return 0;
}