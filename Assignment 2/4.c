// Assignment 2: Problem 4
// Write a C program to check a number is divisible by 2 and 3 or not.

#include <stdio.h>

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    // Use the logical AND operator (&&) to check both conditions simultaneously.
    if ((number % 2 == 0) && (number % 3 == 0)) {
        printf("%d is divisible by both 2 and 3.\n", number);
    } else {
        printf("%d is NOT divisible by both 2 and 3.\n", number);
    }

    return 0;
}
