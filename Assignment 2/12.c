// Assignment 2: Problem 12
// Write a C program to calculate the student grade using switch case.

#include <stdio.h>

int main() {
    int score;

    printf("Enter the student's score (0-100): ");
    scanf("%d", &score);

    if (score < 0 || score > 100) {
        printf("Error: Invalid score entered.\n");
        return 1;
    }

    switch (score / 10) {
        case 10:
        case 9:
            printf("Grade: A (Excellent)\n");
            break;
        case 8:
            printf("Grade: B (Good)\n");
            break;
        case 7:
            printf("Grade: C (Average)\n");
            break;
        case 6:
            printf("Grade: D (Pass)\n");
            break;
        default:
            printf("Grade: F (Fail)\n");
            break;
    }

    return 0;
}