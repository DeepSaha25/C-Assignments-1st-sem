// Assignment 1: Problem 7
// Write a C program to swap between two numbers without using third variable.

#include <stdio.h>

int main() {
    int a = 5;
    int b = 15;

    printf("Before swap: a = %d, b = %d\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swap: a = %d, b = %d\n", a, b);

    return 0;
}