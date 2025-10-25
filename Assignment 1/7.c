// Assignment 1: Problem 7
// Write a C program to swap between two numbers without using third variable.

#include <stdio.h>

int main() {
    int a = 5;
    int b = 15;

    printf("Before swap: a = %d, b = %d\n", a, b);

    // Swapping logic without a third variable (using addition and subtraction)
    // NOTE: This can cause overflow if a and b are very large.

    a = a + b; // a now holds the sum (a = 5 + 15 = 20)
    b = a - b; // b gets the original value of a (b = 20 - 15 = 5)
    a = a - b; // a gets the original value of b (a = 20 - 5 = 15)

    printf("After swap: a = %d, b = %d\n", a, b);

    return 0;
}
