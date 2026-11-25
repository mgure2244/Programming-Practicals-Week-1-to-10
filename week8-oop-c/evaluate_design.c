#include <stdio.h>

// BAD DESIGN
struct BadBankAccount {
    double balance;
};

// GOOD DESIGN
struct GoodBankAccount {
    double balance;
};

// Function to safely deposit money
void goodDeposit(struct GoodBankAccount *acc, double amount) {
    if (amount > 0) {
        acc->balance += amount;
    }
}

int main() {

    printf("--- Testing BAD Design ---\n");

    struct BadBankAccount badAccount;

    badAccount.balance = 100.0;

    // Direct access without validation
    badAccount.balance = -5000.00;

    printf("Bad Account Balance: %.2f\n", badAccount.balance);


    printf("\n--- Testing GOOD Design ---\n");

    struct GoodBankAccount goodAccount;

    goodAccount.balance = 100.0;

    // Use the safe deposit function
    goodDeposit(&goodAccount, 500.00);

    printf("Good Account Balance: %.2f\n", goodAccount.balance);

    return 0;
}