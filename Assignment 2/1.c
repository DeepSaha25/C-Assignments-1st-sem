// Assignment 2: Problem 1
// Write a C program to check if a number is even or odd.

#include <stdio.h>

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    // An even number is perfectly divisible by 2 (remainder is 0).
    // The modulus operator (%) finds the remainder.
    if (number % 2 == 0) {
        printf("%d is an EVEN number.\n", number);
    } else {
        printf("%d is an ODD number.\n", number);
    }

    return 0;
}
