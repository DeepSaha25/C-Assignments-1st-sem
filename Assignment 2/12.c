// Assignment 2: Problem 12
// Write a C program to calculate the student grade using switch case.
// NOTE: Switch cases work only on discrete integer values.
// We use integer division to map score ranges (0-100) to a smaller set of discrete values (0-10).

#include <stdio.h>

int main() {
    int score;

    printf("Enter the student's score (0-100): ");
    scanf("%d", &score);

    if (score < 0 || score > 100) {
        printf("Error: Invalid score entered.\n");
        return 1;
    }

    // Integer division by 10 maps scores:
    // 100 -> 10, 90-99 -> 9, 80-89 -> 8, ..., 0-9 -> 0
    switch (score / 10) {
        case 10: // 100
        case 9:  // 90-99
            printf("Grade: A (Excellent)\n");
            break;
        case 8:  // 80-89
            printf("Grade: B (Good)\n");
            break;
        case 7:  // 70-79
            printf("Grade: C (Average)\n");
            break;
        case 6:  // 60-69
            printf("Grade: D (Pass)\n");
            break;
        default: // 0-59 (0-5)
            printf("Grade: F (Fail)\n");
            break;
    }

    return 0;
}
