// Assignment 2: Problem 2
// Write a C program to check if a number is divisible by 3 or not.

#include <stdio.h>

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    // Check if the remainder when divided by 3 is 0.
    if (number % 3 == 0) {
        printf("%d is divisible by 3.\n", number);
    } else {
        printf("%d is NOT divisible by 3.\n", number);
    }

    return 0;
}
