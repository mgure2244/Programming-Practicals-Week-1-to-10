// ACTIVITY 4: STUDENT SCORE ANALYZER

#include <iostream>
#include <iomanip>
using namespace std;

// Function to calculate average
double calculateAverage(int scores[], int size) {

    int sum = 0;

    // Add all scores
    for (int i = 0; i < size; i++) {
        sum += scores[i];
    }

    // Calculate average
    return (double)sum / size;
}

// Function to display scores above average
void displayAboveAverage(int scores[], int size, double average) {

    cout << "\nScores above average (" << average << "):" << endl;

    bool found = false;

    for (int i = 0; i < size; i++) {

        if (scores[i] > average) {

            cout << "Score " << scores[i]
                 << " at position " << i + 1 << endl;

            found = true;
        }
    }

    if (!found) {
        cout << "None" << endl;
    }
}

int main() {

    // Number of student scores
    const int SIZE = 10;

    // Create an array
    int scores[SIZE];

    // Ask the user to enter 10 scores
    cout << "Enter " << SIZE << " student scores:" << endl;

    for (int i = 0; i < SIZE; i++) {

        cout << "Score " << i + 1 << ": ";
        cin >> scores[i];
    }

    // Calculate average
    double average = calculateAverage(scores, SIZE);

    // Display results
    cout << "\n--- Results ---" << endl;

    cout << "Average score: "
         << fixed << setprecision(2) << average << endl;

    // Display scores above average
    displayAboveAverage(scores, SIZE, average);

    return 0;
}