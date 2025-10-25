// Assignment 2: Problem 5
// Write a C program to check a number is divisible by 3 and 5 or not.

#include <stdio.h>

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    // Check for divisibility by 3 AND 5.
    if ((number % 3 == 0) && (number % 5 == 0)) {
        printf("%d is divisible by both 3 and 5.\n", number);
    } else {
        printf("%d is NOT divisible by both 3 and 5.\n", number);
    }

    return 0;
}
