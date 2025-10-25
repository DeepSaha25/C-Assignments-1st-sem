// Assignment 1: Problem 6
// Write a C program to swap between two numbers using third variable.

#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;
    int temp; // The third variable

    printf("Before swap: a = %d, b = %d\n", a, b);

    // Swapping logic using the third variable (temp)
    temp = a; // 1. Store the value of 'a' in 'temp' (temp = 10)
    a = b;    // 2. Assign the value of 'b' to 'a' (a = 20)
    b = temp; // 3. Assign the original value of 'a' (stored in temp) to 'b' (b = 10)

    printf("After swap: a = %d, b = %d\n", a, b);

    return 0;
}
