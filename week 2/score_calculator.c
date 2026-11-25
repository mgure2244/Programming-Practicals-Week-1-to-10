```c
// STUDENT SCORE CALCULATOR - C VERSION

#include <stdio.h>
#include <string.h>

#define MAX_LEN 100
#define MAX_SCORE 100
#define TOTAL_TESTS 4

int main() {

    // 1. Variable declarations
    char studentName[MAX_LEN];
    char course[MAX_LEN];

    int score1, score2, score3, score4;
    int totalScore;
    int highestScore;
    int lowestScore;

    double average;
    double percentage;

    char grade;

    // 2. Welcome message
    printf("========================================\n");
    printf("       STUDENT SCORE CALCULATOR\n");
    printf("========================================\n\n");

    // 3. Enter student name
    printf("Enter student name: ");
    fgets(studentName, MAX_LEN, stdin);
    studentName[strcspn(studentName, "\n")] = '\0';

    // 4. Enter course
    printf("Enter course (BBIT/BCS): ");
    fgets(course, MAX_LEN, stdin);
    course[strcspn(course, "\n")] = '\0';

    // 5. Enter four test scores
    printf("Enter score for Test 1: ");
    scanf("%d", &score1);

    printf("Enter score for Test 2: ");
    scanf("%d", &score2);

    printf("Enter score for Test 3: ");
    scanf("%d", &score3);

    printf("Enter score for Test 4: ");
    scanf("%d", &score4);

    // 6. Calculate total score
    totalScore = score1 + score2 + score3 + score4;

    // 7. Calculate average
    average = totalScore / (double)TOTAL_TESTS;

    // 8. Calculate percentage
    percentage = (totalScore / (double)(TOTAL_TESTS * MAX_SCORE)) * 100;

    // 9. Find highest score
    highestScore = score1;

    if (score2 > highestScore) {
        highestScore = score2;
    }

    if (score3 > highestScore) {
        highestScore = score3;
    }

    if (score4 > highestScore) {
        highestScore = score4;
    }

    // 10. Find lowest score
    lowestScore = score1;

    if (score2 < lowestScore) {
        lowestScore = score2;
    }

    if (score3 < lowestScore) {
        lowestScore = score3;
    }

    if (score4 < lowestScore) {
        lowestScore = score4;
    }

    // 11. Assign letter grade
    if (percentage >= 80) {
        grade = 'A';
    } else if (percentage >= 70) {
        grade = 'B';
    } else if (percentage >= 60) {
        grade = 'C';
    } else if (percentage >= 50) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    // 12. Display report card
    printf("\n========================================\n");
    printf("              REPORT CARD\n");
    printf("========================================\n\n");

    printf("Student: %s\n", studentName);
    printf("Course: %s\n", course);

    printf("\nTest 1: %d/%d\n", score1, MAX_SCORE);
    printf("Test 2: %d/%d\n", score2, MAX_SCORE);
    printf("Test 3: %d/%d\n", score3, MAX_SCORE);
    printf("Test 4: %d/%d\n", score4, MAX_SCORE);

    printf("\nTotal Score: %d/%d\n",
           totalScore, TOTAL_TESTS * MAX_SCORE);

    printf("Highest Score: %d\n", highestScore);
    printf("Lowest Score: %d\n", lowestScore);

    printf("Average: %.2f\n", average);
    printf("Percentage: %.2f%%\n", percentage);

    printf("Letter Grade: %c\n", grade);

    // 13. Pass or fail
    if (percentage >= 50) {
        printf("Result: PASS\n");
    } else {
        printf("Result: FAIL\n");
    }

    printf("========================================\n");

    return 0;
}
```