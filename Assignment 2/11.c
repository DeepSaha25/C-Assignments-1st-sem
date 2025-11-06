// Assignment 2: Problem 11
// Write a C program to calculate the student grade using if-else statements.

#include <stdio.h>

int main() {
    int score;

    printf("Enter the student's score (0-100): ");
    scanf("%d", &score);

    if (score < 0 || score > 100) {
        printf("Error: Invalid score entered.\n");
    } else if (score >= 90) {
        printf("Grade: A (Excellent)\n");
    } else if (score >= 80) {
        printf("Grade: B (Good)\n");
    } else if (score >= 70) {
        printf("Grade: C (Average)\n");
    } else if (score >= 60) {
        printf("Grade: D (Pass)\n");
    } else {
        printf("Grade: F (Fail)\n");
    }

    return 0;
}