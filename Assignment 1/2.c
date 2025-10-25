// Assignment 1: Problem 2
// Write a C program to add between two numbers.

#include <stdio.h>

int main() {
    int num1, num2, sum;

    // Prompt user for input
    printf("Enter the first integer: ");
    // Read the first number from the user
    scanf("%d", &num1);

    printf("Enter the second integer: ");
    // Read the second number from the user
    scanf("%d", &num2);

    // Calculate the sum
    sum = num1 + num2;

    // Display the result
    printf("The sum of %d and %d is: %d\n", num1, num2, sum);

    return 0;
}
