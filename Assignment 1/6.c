// Assignment 1: Problem 6
// Write a C program to swap between two numbers using third variable.

#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;
    int temp;

    printf("Before swap: a = %d, b = %d\n", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("After swap: a = %d, b = %d\n", a, b);

    return 0;
}