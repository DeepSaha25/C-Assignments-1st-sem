// Assignment 1: Problem 2
// Write a C program to add between two numbers.

#include <stdio.h>

int main() {
    int num1, num2, sum;

    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the second integer: ");
    scanf("%d", &num2);

    sum = num1 + num2;

    printf("The sum of %d and %d is: %d\n", num1, num2, sum);

    return 0;
}