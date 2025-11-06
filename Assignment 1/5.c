// Assignment 1: Problem 5
// Write a C program to divide between two numbers.

#include <stdio.h>

int main() {
    int numerator, denominator;
    double result;

    printf("Enter numerator (dividend): ");
    scanf("%d", &numerator);

    printf("Enter denominator (divisor): ");
    scanf("%d", &denominator);

    if (denominator != 0) {
        result = (double)numerator / denominator;
        printf("The result of %d divided by %d is: %.4lf\n", numerator, denominator, result);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }

    return 0;
}