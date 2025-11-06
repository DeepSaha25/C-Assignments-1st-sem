// Assignment 1: Problem 4
// Write a C program to multiply between two numbers.

#include <stdio.h>

int main() {
    double num1, num2, product;

    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    product = num1 * num2;

    printf("The product of %.2lf and %.2lf is: %.2lf\n", num1, num2, product);

    return 0;
}